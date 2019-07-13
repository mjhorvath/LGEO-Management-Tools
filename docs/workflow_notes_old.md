# SPREADSHEETS
1. To get a list of LDraw files, drop the file "dir_dat.bat" into your LDraw parts directory and execute it. This will generate a file called "dir_dat.txt". Copy "dir_dat.txt" to the same directory as "pad_parts_names.py" and rename it to "filenames_dat.txt".
1. Execute the "pad_parts_names.bat" batch file. This will generate a new text file called "filenames_inc.txt".
1. Open the spreadsheet "data_elements.xlsx".
1. Copy the contents of "filenames_dat.txt" into the "LDRAW" column of the "Table" worksheet.
1. Copy the contents of "filenames_inc.txt" into the "LGEO" column of the "Table" worksheet.
1. The "LDRAW" and "LGEO" columns should now be in the same order. If not, you have done something wrong.
1. The only differences should be a) the file extension in each list, b) the addition of the string "lg_" in the "LGEO" column, and c) the padding of a select portion of the file names in the "LGEO" column with some extra zeros.
1. To get the lists of LGEO files, drop the file "dir_inc.bat" into each of the various LGEO parts directories created by Lutz, Owen, Damien, etc. and execute them. This will generate a number of files all named "dir_inc.txt".
1. Copy the contents of these files into the appropriate columns of the "Lists" worksheet.
1. If a file represents a slope part, copy and paste the filename into the "SLOPE" column of the "Lists" worksheet.
1. It is not necessary for each of these columns to be in alphabetical order, but it will make it easier to keep track of which file you have added to the spreadsheet.

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
1. Copy the file "LGEO.xml" into your LDView installation directory, or somewhere else that LDView can access it.
