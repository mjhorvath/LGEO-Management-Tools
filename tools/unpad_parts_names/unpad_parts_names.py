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
# characters from the filename, then outputs a new list of parts.
# 
# In Lutz Uhlmann's original LGEO library, files with between one and three 
# zeros after the "lg_" string were padded with zeros until the the total 
# number was four. For instance, if the LDraw part was named "1.dat", then the 
# LGEO part was named "lg_0001.inc". If the LDraw part was named "10.dat", then 
# the LGEO part was named "lg_0010.inc". And so on.

import re

rx = "(lg_)(0*)(.*)(\.inc)"

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

def main():
	update_text = ""
	with open("filenames_old.txt", "r") as f:
		for line in f:
			file_old = line.replace("\n", "")
			file_new = depad(file_old)
			update_text += file_new + "\n"
	update_object = open("filenames_new.txt", "w")
	update_object.write(update_text)
	update_object.close()

main()
