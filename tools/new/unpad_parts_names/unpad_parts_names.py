# LGEO Management Tools by Michael Horvath
# 
# To the extent possible under law, the person who associated CC0 with
# LGEO Management Tools has waived all copyright and related or neighboring 
# rights to LGEO Management Tools.
# 
# You should have received a copy of the CC0 legalcode along with this
# work.  If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
# 
# ABOUT THIS FILE:
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

temp_string = ""

# Need to make it so users can specify the old and new paths on the command line
input_path_old = "D:/GitHub/LGEO-Management-Tools/tools/unpad_parts_names/old"
input_path_new = "D:/GitHub/LGEO-Management-Tools/tools/unpad_parts_names/new"

# Will fail if the filename is not lowercase.
# Make sure to rename the actual files to lowercase too.
def depad(in_line):
	rx = "(lg_)(0*)(.*)(\.inc)"
	match = re.match(rx, in_line)
	group1 = match.group(1)
	group2 = match.group(2)
	group3 = match.group(3)
	group4 = match.group(4)
	out_line = group1 + group3 + group4
	return out_line

def renameobjects(file_inc_old, file_inc_new):
	if file_inc_old != file_inc_new:
		print("Renaming " + file_inc_old + " to " + file_inc_new + ".")
		path_inc_new = os.path.join(input_path_new, file_inc_new)
		if os.path.exists(path_inc_new):
			object_old = file_inc_old.replace(".inc", "")
			object_new = file_inc_new.replace(".inc", "")
			file_read = open(path_inc_new, "r")
			file_text = file_read.read()
			file_read.close()
			file_text = file_text.replace(object_old, object_new)
			file_write = open(path_inc_new, "w")
			file_write.write(file_text)
			file_write.close()
	else:
		print("Skipping renaming " + file_inc_old + " to " + file_inc_new + ".")

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

with open("lgeo_names_list.txt", "r") as f:
	for line in f:
		file_old = line.replace("\n", "")
		file_new = depad(line)
		copyfile(file_old, file_new)
		renameobjects(file_old, file_new)
		print("Copying " + file_old + ".")

#with open("temp.txt", "w") as f:
#    f.write(temp_string.encode("utf-8"))
