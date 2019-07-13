# LGEO Management Tools by Michael Horvath
# 
# To the extent possible under law, the person who associated CC0 with
# LGEO Management Tools has waived all copyright and related or neighboring 
# rights to LGEO Management Tools.
# 
# You should have received a copy of the CC0 legalcode along with this
# work.  If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

import json

output_text =	"; LGEO Elements List\n" \
				";\n" \
				"; For use with Lars C. Hassings L3P version x.xx and up\n" \
				";\n" \
				"; Ldraw	LGEO	LG_Flags (L=LGEO, S=Slope, A=AntonRaves)\n"

with open("data_elements.json") as json_file:  
	data = json.load(json_file)
	for p in data:
		this_file = p["ldraw"].strip(".dat")
		this_incl = p["lgeo"].strip("lg_").strip(".inc")
		this_slope = p["slope"]
		this_anton = p["anton"]
		this_lutz = p["lutz"]
		this_owen = p["owen"]
		this_darats = p["darats"]
		this_flag = ""
		if this_anton == "1":
			this_flag = "A"
		elif this_lutz == "1" or this_owen == "1" or this_darats == "1":
			this_flag = "L"
			if this_slope == "1":
				this_flag += "S"
		if this_flag != "":
			output_text += this_file + "\t" + this_incl + "\t" + this_flag + "\n"

f = open("lg_elements.lst", "w")
f.write(output_text)
f.close()
