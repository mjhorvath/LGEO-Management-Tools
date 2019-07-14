# NOTES
* The files "LGEO.xml", "lg_colors.lst" and "lg_elements.lst" need to be updated after every change made to the LGEO library.


# LIBRARY MANAGEMENT
* Do not use Lars' parts!! They are older than Lutz's latest update I think.
* Don't know what to do with Anton's new parts or Orion's parts. They use different formats that may not be immediately compatible with LGEO (or with each other). It would be nice to get them working along side of LGEO, however.
* (no longer an issue) In Owen's LGEO library the part "lg_756" is listed twice in "LGEO.xml".
* In the spreadsheet I need to mark all remaining slope parts as sloped. Do Darats' STL files have the correct slopey sub-elements?
* Need to replace all instances of "lg_2582_slope" with "lg_2582" within all legacy POV-Ray models. See: https://forums.ldraw.org/showthread.php?tid=16260&pid=27652&mode=linear
* (fixed) The LGEO files "lg_10197.inc", "lg_10288.inc" and "lg_85940.inc" all reference an object named "lg_tech_tube", but this object is missing from Damien's "lg_defs.inc". This file is present in Owen's library and the AIOI, however. In fact, these other "lg_defs.inc" files appear to be more recent than Damien's. Is there anything important in Damien's version of "lg_defs.inc" that needs to be merged with the others?
* As of 2019/07/01, the official AIOI seems to include Owen's parts but not Damien's parts.
* (no longer an issue) As of 2019/07/01, the latest LGEO parts by Damien are missing "lg_2345p44.inc" and "lg_3794a.inc", even though they are listed in his "LGEO.xml".


# PARTS FILES
* (obsolete) Several of Owen's LGEO part names have fewer than four number characters at the beginning, and should be padded with zeros to maintain the naming conventions set by Lutz and followed by everyone else.
* (fixed) On the other hand, it might be better to remove the zero padding from all LGEO part names so that they match the original LDraw part names. The padding serves no real purpose as far as I can tell, and just makes things a little bit more confusing for everyone.
* (solution: always use lower case) Should LGEO part names all be lowercase? Should LGEO part names match the case of the original LDraw part names? Does it matter?
* Need to ask Travis whether UTF-8 encoding is the correct encoding for "LGEO.xml".
* It would be a good idea to create LGEO versions of LDBoxer parts too. Currently they are all very boxy with sharp edges, etc. Will the LDBoxer folder structure trigger issues?
* I should really keep track of file sizes and modification dates, too, if I want to better understand which files are the most current versus the oldest.
* Be careful about the files "0901.dat", "0902.dat", "0903.dat" and "0904.dat". These files should have a zero at the front of their names that is not the result of any zero padding AFAIK.
* I have not studied the filenames of Damien's STL parts in the "lgeo/stl" directory. There could be issues with them that I am unaware of.
* The POV-Ray objects "lego_logo_text_tech" and "lego_logo_text_tech_clear" are missing from Darats' library. He must have a personal edited copy of "lg_defs.inc" in whcih this object resides.


# PARTS COLORS
* The colors in "lg_color.inc" come from a variety of different places such as LDraw, LDD and LUGNET. But mainly they come from Peeron.
* In the spreadsheets and JSON files I have ommitted the extra material information that appears in "LDConfig.ldr" for the SPECKLE material. This can easily be added back in if need be, however.
* Some colors in "lg_colors.lst" feature multiple material codes. But in "LDConfig.ldr" each color is only assigned one material type.
* The file "lg_colors.lst" does not list MILKY or SPECKLE in it yet.
* (fixed) "LDConfig.ldr" treats Glow_In_Dark_Opaque, Milky_White, Glow_In_Dark_Trans and Glow_In_Dark_White as partially transparent. LGEO treats some of these materials as fully solid/opaque.
* As of 2019/07/01, the latest version of the AIOI's "lg_color.inc" file is missing many colors, such as "color 495 - Electric_Contact_Copper" and "color 339 - Glitter_Trans_Neon_Green". This file needs to be updated to reflect the most current "LDConfig.ldr" file.
* (fixed) As of 2019/07/01, in Damien's version of "LGEO.xml" color 406 "lg_rubber_dark_purple" should be renamed to "lg_rubber_dark_blue" (or vice versa, I'm not entirely sure).
* It may not be possible to fix issues with "lg_colors.lst" without somehow breaking "L3P.exe", since this file was originally created for "L3P.exe" to use.
* "trans_black_ir_lens" should be "lg_trans_black_ir_lens".


# POVRAY MATERIALS
* In the LGEO library, ABS and PC plastic parts do not have any normals. Parts made of other materials (e.g. rubber, pearl, chrome, transparent) do have normals, however. 
* By default, in the LGEO library sloped parts do not have special normals to model the "bumpiness" of these bricks. This is despite the fact that the LGEO library has always supported this feature. Some external programs do add special normals to these parts, however.
* LGEO materials do not support subsurface light transport (SSLT) or blurred reflections.
