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
# This script takes a list of LGEO parts files and renames each file to match 
# the name on a second list. This script also searches within each file to 
# rename any POV-Ray objects in the same manner. The two lists are named 
# "filenames_old.txt" and "filenames_new.txt", and need to be located in the 
# same directory as this script. Copies of the original files need to go in the 
# "old" directory. The updated files will appear in the "new" directory.
# 
# MAKE SURE BOTH LISTS ARE OF EQUAL LENGTH AND ARE SORTED IN THE SAME ORDER!!!
# This script is meant to be used with output from "unpad_parts_names.py" and 
# "pad_parts_names.py". Editing the lists by hand is a bad idea unless you 
# really know what you are doing!

import os
import shutil

debug_object = open("debug_text.txt", "w")
debug_object.write("")
debug_object.close()

table_old = []
table_new = []

# Need to make it so that users can specify full paths via the command line.
input_path_old = "old"
input_path_new = "new"

def printbetter(in_text):
	global debug_object
	print(in_text)
	debug_object.write(in_text + "\n")

def replaceobjects(file_inc_old, file_inc_new):
	file_inc_old = file_inc_old.replace(".inc", "")
	file_inc_new = file_inc_new.replace(".inc", "")
	for i in range(len(table_old)):
		file_rem_old = table_old[i]
		file_rem_new = table_new[i]
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
			# If the text has changed, overwrite the file with the changes
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
	global table_old
	global table_new
	debug_object = open("debug_text.txt", "a")
	# Get lists of file names
	with open("filenames_old.txt", "r") as f_old:
		table_old = f_old.read().splitlines()
	with open("filenames_new.txt", "r") as f_new:
		table_new = f_new.read().splitlines()
	if len(table_old) != len(table_new):
		raise ValueError("Lists are of unequal size.")
	# Copying loop
	for i in range(len(table_old)):
		file_old = table_old[i]
		file_new = table_new[i]
		printbetter("Copying " + file_old + " to " + file_new)
		copyfile(file_old, file_new)
	# Replacing loop
	for i in range(len(table_old)):
		file_old = table_old[i]
		file_new = table_new[i]
		if file_old != file_new:
			printbetter("Replacing " + file_old + " with " + file_new)
			replaceobjects(file_old, file_new)
		else:
			printbetter("Skipping replacing " + file_old + " with " + file_new)
	debug_object.close()

main()
