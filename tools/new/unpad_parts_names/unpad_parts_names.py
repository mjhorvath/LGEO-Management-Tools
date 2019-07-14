# LGEO Management Tools by Michael Horvath
# 
# To the extent possible under law, the person who associated CC0 with
# LGEO Management Tools has waived all copyright and related or neighboring 
# rights to LGEO Management Tools.
# 
# You should have received a copy of the CC0 legalcode along with this
# work.  If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
# 
# ABOUT THIS SCRIPT:
# This script takes a list of LGEO parts files and removes the padding  
# characters from the filename as well as any POV-Ray objects within each file.
# In Lutz Uhlmann's original LGEO library, files with between one and three 
# zeros after the "lg_" string were padded with zeros until the the total 
# number was four. For instance, if the LDraw part was named "1.dat", then the 
# LGEO part was named "lg_0001.inc". If the LDraw part was named "10.dat", then 
# the LGEO part was named "lg_0010.inc". And so on. This script renames each of 
# these files to the original LDraw version. This script also searches within 
# each file to rename any POV-Ray objects in the same manner.

import json
import os
import shutil
import re 

rx = "(lg_)(0*)(.*)(\.inc)"
debug_object = open("debug_text.txt", "w")
debug_object.write("")
debug_object.close()

# Need to make it so that users can specify full paths via the command line.
input_path_old = "old"
input_path_new = "new"

def printbetter(in_text):
	global debug_object
	print(in_text)
	debug_object.write(in_text + "\n")

# Will fail if the filenames are not lowercase.
# Make sure to rename the actual files to lowercase too.
def depad(in_line):
	match = re.match(rx, in_line)
	group1 = match.group(1)
	group2 = match.group(2)		# not used
	group3 = match.group(3)
	group4 = match.group(4)
	out_line = group1 + group3 + group4
	return out_line

def renameobjects(file_inc_old, file_inc_new):
	file_inc_old = file_inc_old.replace(".inc", "")
	file_inc_new = file_inc_new.replace(".inc", "")
	with open("filenames_old.txt", "r") as f:
		for line in f:
			file_rem_old = line.replace("\n", "")
			file_rem_new = depad(file_rem_old)
			path_rem_new = os.path.join(input_path_new, file_rem_new)
			if os.path.exists(path_rem_new):
				# Maybe one or more regular expressions would be faster here?
				string_old_0 = file_inc_old + ".inc"
				string_new_0 = file_inc_new + ".inc"
				string_old_1 = " " + file_inc_old + " "
				string_new_1 = " " + file_inc_new + " "
				string_old_2 = " " + file_inc_old + "_"
				string_new_2 = " " + file_inc_new + "_"
				string_old_3 = "(" + file_inc_old + ")"
				string_new_3 = "(" + file_inc_new + ")"
				string_old_4 = " " + file_inc_old + "\n"
				string_new_4 = " " + file_inc_new + "\n"
				file_read = open(path_rem_new, "r")
				file_text_old = file_read.read()
				file_text_new = file_text_old
				file_read.close()
				file_text_new = file_text_new.replace(string_old_0, string_new_0)
				file_text_new = file_text_new.replace(string_old_1, string_new_1)
				file_text_new = file_text_new.replace(string_old_2, string_new_2)
				file_text_new = file_text_new.replace(string_old_3, string_new_3)
				file_text_new = file_text_new.replace(string_old_4, string_new_4)
				if file_text_old != file_text_new:
					file_write = open(path_rem_new, "w")
					file_write.write(file_text_new)
					file_write.close()
			else:
				printbetter("Missing file (rename): " + file_rem_new)

def copyfile(file_inc_old, file_inc_new):
	if file_inc_old != file_inc_new:
		path_inc_old = os.path.join(input_path_old, file_inc_old)
		path_inc_new = os.path.join(input_path_new, file_inc_new)
	else:
		path_inc_old = os.path.join(input_path_old, file_inc_old)
		path_inc_new = os.path.join(input_path_new, file_inc_old)
	if os.path.exists(path_inc_old):
		if os.path.exists(path_inc_new):
			os.remove(path_inc_new)
		shutil.copy2(path_inc_old, path_inc_new)
		#os.remove(path_inc_old)	# too volatile
	else:
		printbetter("Missing file (copy): " + file_inc_old)

def main():
	global debug_object
	debug_object = open("debug_text.txt", "a")
	update_text = ""
	# Copy loop
	with open("filenames_old.txt", "r") as f:
		for line in f:
			file_old = line.replace("\n", "")
			file_new = depad(file_old)
			update_text += file_new + "\n"
			printbetter("Copying " + file_old + " to " + file_new)
			copyfile(file_old, file_new)
	# Let's get a new list of files
	update_object = open("filenames_new.txt", "w")
	update_object.write(update_text)
	update_object.close()
	# Replacing loop
	with open("filenames_old.txt", "r") as f:
		for line in f:
			file_old = line.replace("\n", "")
			file_new = depad(file_old)
			if file_old != file_new:
				printbetter("Replacing " + file_old + " with " + file_new)
				renameobjects(file_old, file_new)
			else:
				printbetter("Skipping replacing " + file_old + " with " + file_new)
	debug_object.close()

main()
