# LGEO Management Tools by Michael Horvath
# 
# To the extent possible under law, the person who associated CC0 with
# LGEO Management Tools has waived all copyright and related or neighboring 
# rights to LGEO Management Tools.
# 
# You should have received a copy of the CC0 legalcode along with this
# work.  If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

import json

output_text =	"; LGEO Colors List\n" \
				";\n" \
				"; For use with Lars C. Hassings L3P version x.xx and up\n" \
				";\n" \
				"; Color Name Flags (S=Solid, T=Transparent, C=Chrome, P=Pearl, M=Metallic, R=Rubber, G=Glitter)\n"

with open("data_colors.json") as json_file:  
	data = json.load(json_file)
	for p in data:
		this_lid = p["ldrawid"]
		this_inc = p["lgeoname"]
		this_mat = p["lgeomat"]
		if this_inc != "":
			output_text += this_lid + "\t" + this_inc + "\t" + this_mat + "\n"

f = open("lg_colors.lst", "w")
f.write(output_text)
f.close()
