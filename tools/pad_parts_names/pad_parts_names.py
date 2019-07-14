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
# The naming conventions of the LGEO library have been changed such that LGEO 
# parts names should now match the original LDraw files, with the addition of 
# the "lg_" prefix and the ".inc" extension. Thus this script should no longer 
# be used as a base for renaming parts. This script is kept here for historical 
# reasons, or in case we change our minds about how filenames should be padded.
# 
# This script takes a list of INC files and pads certain file names with zeros, 
# based on the conventions set by Lutz Uhlmann when he first created the LGEO 
# library. The input file is named "filenames_old.txt". The output file is 
# named "filenames_new.txt".
# 
# In Lutz Uhlmann's original LGEO library, files with between one and three 
# zeros after the "lg_" string were padded with zeros until the the total 
# number was four. For instance, if the LDraw part was named "1.dat", then the 
# LGEO part was named "lg_0001.inc". If the LDraw part was named "10.dat", then 
# the LGEO part was named "lg_0010.inc". And so on.

import re 

rx = "(lg_)(\d*)(.*)(\.inc)"
output_text = ""

f = open("filenames_old.txt", "r")
fl = f.readlines()
f.close()

def pad(n, width, z):
	while len(n) < width:
		n = "" + z + n
	return n

for in_line in fl:
	match = re.match(rx, in_line)
	group1 = match.group(1)
	group2 = match.group(2)
	group3 = match.group(3)
	group4 = match.group(4)
	if group2 != "":
		group2 = pad(group2, 4, "0")
	output_text += group1 + group2 + group3 + group4 + "\n"

f = open("filenames_new.txt", "w")
f.write(output_text)
f.close()
