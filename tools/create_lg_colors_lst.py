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
