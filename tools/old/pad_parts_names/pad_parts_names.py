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
# The naming conventions of the LGEO library have been changed such that LGEO 
# parts names should now match the original LDraw file, with the addition of 
# the "lg_" prefix and the ".inc" extension. Thus this script should no longer 
# be used. The script is kept here for historical reasons.
# 
# This script takes a list of DAT files and pads certain file names with zeros, 
# then prefixes each file name with the string "lg_", and finally replaces the 
# ".dat" extension with the ".inc" extension. The input file is named 
# "filenames_dat.txt". The output file is named "filenames_inc.txt".

import re 

rx = "(\d*)(.*)(\.dat)"
output_text = ""

f = open("filenames_dat.txt", "r")
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
	if group1 != "":
		group1 = pad(group1, 4, "0")
	out_line = group1 + group2
	output_text += "lg_" + out_line + ".inc\n"

f = open("filenames_inc.txt", "w")
f.write(output_text)
f.close()
