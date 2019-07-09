/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4162p0v: Tile 1 x 8 with "Trevi Fountain" pattern                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4162p0v)
#else
#include "lg_4162.inc"
#declare LENGTH = 8;
#declare WIDTH = 1;
#declare lg_4162p0v_print =
merge {
 box {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.001>
  pigment {
   image_map {
    png "lg_4162p0v.png" once map_type 0 interpolate 2
   }
   scale < -6.4, 0.8, 1 >
   translate <LENGTH*LG_BRICK_WIDTH, 0, 0>
  }
 }
 rotate <0, 0, 90>
 translate <0.5*WIDTH*LG_BRICK_WIDTH, -0.5*LENGTH*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
}

#declare lg_4162p0v = 
union {
 object { 
  lg_4162
 }
 object {
  lg_4162p0v_print
 }
}

#declare lg_4162p0v_clear = 
merge {
 object { 
  lg_4162_clear
 }
 object {
  lg_4162p0v_print
 }
}
 
#end
