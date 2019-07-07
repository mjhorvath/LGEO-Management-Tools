/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3024ptc2: Plate 1 x 1 with Minecraft Micromob Steve Eyes Pattern         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20121226 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3024ptc2)
#else
#include "lg_3024.inc"
#declare LENGTH = 1;
#declare WIDTH = 1;
#declare GRID_X = LG_BRICK_WIDTH/8-(LG_CORNER_SPACE/8);
#declare GRID_Y = LG_PLATE_HEIGHT/3-(LG_CORNER_SPACE/3);
#declare PRINT = 0.0001;
#declare lg_3024ptc2_print =
union {
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_E, 1*GRID_X, LG_PLATE_HEIGHT-2*GRID_Y>,
  <LENGTH*LG_BRICK_WIDTH+PRINT, 2*GRID_X, LG_PLATE_HEIGHT-3*GRID_Y>
  texture { lg_white }
 }
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_E, 2*GRID_X, LG_PLATE_HEIGHT-2*GRID_Y>,
  <LENGTH*LG_BRICK_WIDTH+PRINT, 3*GRID_X, LG_PLATE_HEIGHT-3*GRID_Y>
  texture { lg_blue }
 }
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_E, 5*GRID_X, LG_PLATE_HEIGHT-2*GRID_Y>,
  <LENGTH*LG_BRICK_WIDTH+PRINT, 6*GRID_X, LG_PLATE_HEIGHT-3*GRID_Y>
  texture { lg_blue }
 }
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_E, 6*GRID_X, LG_PLATE_HEIGHT-2*GRID_Y>,
  <LENGTH*LG_BRICK_WIDTH+PRINT, 7*GRID_X, LG_PLATE_HEIGHT-3*GRID_Y>
  texture { lg_white }
 }
 translate <0.5*-LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
}

#declare lg_3024ptc2 = 
union {
 object { 
  lg_3024
 }
 object {
  lg_3024ptc2_print
 }
}

#declare lg_3024ptc2_clear = 
merge {
 object { 
  lg_3024_clear
 }
 object {
  lg_3024ptc2_print
 }
}
 
#end
