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
