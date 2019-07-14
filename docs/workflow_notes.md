# SPREADSHEETS
1. To get a list of LDraw files, drop the file "dir_dat.bat" into your LDraw parts directory and execute it. This will generate a file called "dir_dat.txt".
1. Using a text editor, save a new copy of the file and in the new copy replace the string ".dat" with the string ".inc". Add the string "lg_" to the front of every line.
1. Copy the list of DAT files to the "LDRAW" column of the "Table" sheet. The "LGEO" column should update automatically. The only differences should be a) the file extension in each list, and b) the addition of the prefix "lg_" in the "LGEO" column.
1. To get the lists of LGEO files on the "Lists" sheet, drop the file "dir_inc.bat" into each of the various LGEO parts directories created by Lutz, Owen, Damien, etc. and execute them. This will generate a number of files all named "dir_inc.txt".
1. Copy the contents of these text files into the appropriate columns of the "Lists" worksheet.
1. If a file represents a slope part, copy and paste the filename into the "SLOPE" column of the "Lists" worksheet.
1. The "Surplus" worksheet consists of three LGEO file name columns plus a "Match" column. The "Match" column indicates whether an LGEO part has an equivalent LDraw partner. If not, then the file is a candidate for removal from the LGEO library.

# JSON
1. Copy the contents of the "JSON" column in the "Table" worksheet of "data_elements.xlsx" into the text file "data_elements.json".
1. Copy the contents of the "JSON" column in the "Table" worksheet of "data_colors.xlsx" into the text file "data_colors.json".
1. Delete the very last comma "," in "data_elements.json" and add an opening and closing square bracket "[" and "]".
1. Delete the very last comma "," in "data_colors.json" and add an opening and closing square bracket "[" and "]".

# OUTPUT
1. Execute the batch file "create_lg_elements_lst.bat". This will create a new text file called "lg_elements.lst".
1. Execute the batch file "create_lg_colors_lst.bat". This will create a new text file called "lg_colors.lst".
1. Execute the batch file "create_lgeo_xml.bat". This will create a new XML file called "LGEO.xml".
1. Copy the files "lg_elements.lst" and "lg_colors.lst" into your "lgeo" folder.
1. Copy the file "LGEO.xml" into your LDView installation directory, or somewhere else that LDView can access it from.
1. Update "lg_color.inc" and "lg_defs.inc" whenever you can.

# PADDING
1. In Lutz Uhlmann's original library of LGEO parts, some part names were padded with zeros for whatever reason. We have decided to no longer do this, in favor of having a 1:1 relationship between LDraw and LGEO parts names.
1. The tools "pad_parts_names.py" and "unpad_parts_names.py" add and remove this zero padding from parts names, respectively.
