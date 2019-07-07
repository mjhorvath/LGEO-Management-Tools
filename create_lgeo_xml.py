# -*- coding: utf-8 -*-

import json
import xml.etree.ElementTree as ET
import HTMLParser


# Functions --------------------------------------------------------------------

# From https://stackoverflow.com/a/4590052/330663
def indent(elem, level=0):
    i = "\n" + level * "\t"
    if len(elem):
        if not elem.text or not elem.text.strip():
            elem.text = i + "\t"
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
        for elem in elem:
            indent(elem, level+1)
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
    else:
        if level and (not elem.tail or not elem.tail.strip()):
            elem.tail = i  


# Header -----------------------------------------------------------------------

dec = '<?xml version="1.0" encoding="UTF-8" ?>'
com = "<!-- LDView-to-LGEO XML conversion file. This file must be installed in the LDView base directory. -->"
head = dec + "\n" + com + "\n"


# Root -------------------------------------------------------------------------

root = ET.Element("LDrawPOV")


# Dependencies -----------------------------------------------------------------

dep0 = ET.SubElement(root, "Dependencies")
dep1 = ET.SubElement(dep0, "LGQuality")
dep2 = ET.SubElement(dep0, "LGStuds")
dep3 = ET.SubElement(dep0, "LGDefs")
dep4 = ET.SubElement(dep0, "LGColors")

dep11 = ET.SubElement(dep1, "POVCode").text = "#declare lg_quality = LDXQual;&&#x0A;#if (lg_quality = 3)&&#x0A;#declare lg_quality = 4;&&#x0A;#end"
dep21 = ET.SubElement(dep2, "POVCode").text = "#declare lg_studs = LDXStuds;&&#x0A;"
dep31 = ET.SubElement(dep3, "Dependency").text = "LGQuality"
dep32 = ET.SubElement(dep3, "Dependency").text = "LGStuds"
dep33 = ET.SubElement(dep3, "POVFilename").text = "lg_defs.inc"
dep41 = ET.SubElement(dep4, "Dependency").text = "LGDefs"
dep42 = ET.SubElement(dep4, "POVFilename").text = "lg_color.inc"


# Colors -----------------------------------------------------------------------

col0 = ET.SubElement(root, "Colors")

with open("data_colors.json") as json_file:  
	data = json.load(json_file)
	for p in data:
		this_lid = p["ldrawid"]
		this_inc = p["lgeoname"]
		if this_inc != "":
			col1 = ET.SubElement(col0, "Color")
			col11 = ET.SubElement(col1, "LDrawNumber").text = this_lid
			col12 = ET.SubElement(col1, "POVName").text = this_inc
			col13 = ET.SubElement(col1, "Dependency").text = "LGColors"


# Matrices ---------------------------------------------------------------------

mat0 = ET.SubElement(root, "Matrices")
mat1 = ET.SubElement(mat0, "LGEOTransform").text = "0,0,-25,0,-25,0,0,0,0,-25,0,0,0,0,0,1"


# Elements ---------------------------------------------------------------------

elm0 = ET.SubElement(root, "Elements")

with open("data_elements.json") as json_file:  
	data = json.load(json_file)
	for p in data:
		this_lutz = p["lutz"]
		this_owen = p["owen"]
		this_darats = p["darats"]
		if this_lutz == "1" or this_owen == "1" or this_darats == "1":
			file_ldr = p["ldraw"]
			file_inc = p["lgeo"]
			part_slope = p["slope"]
			name_inc = file_inc.strip(".inc")
			name_clear = name_inc + "_clear"	# apparently every LGEO part has a clear version
			name_slope = name_inc + "_slope"
			elm1 = ET.SubElement(elm0, "Element")
			elm11 = ET.SubElement(elm1, "LDrawFilename").text = file_ldr
			elm12 = ET.SubElement(elm1, "POVName").text = name_inc
			elm13 = ET.SubElement(elm1, "POVName", Alternate="Clear").text = name_clear
			if part_slope == "1":
				elm14 = ET.SubElement(elm1, "Texture", Alternate="Slope").text = name_slope
			elm15 = ET.SubElement(elm1, "Dependency").text = "LGDefs"
			elm16 = ET.SubElement(elm1, "POVFilename").text = file_inc
			elm17 = ET.SubElement(elm1, "MatrixRef").text = "LGEOTransform"


# Conclusion -------------------------------------------------------------------

indent(root)
#ET.dump(root)
text = ET.tostring(root).replace("&amp;&amp;", "&")

# Need to ask Travis whether UTF-8 encoding is the correct encoding for "LGEO.xml".
with open("LGEO.xml", "wb") as f:
    f.write(head.encode("utf-8"))
    f.write(text.encode("utf-8"))
