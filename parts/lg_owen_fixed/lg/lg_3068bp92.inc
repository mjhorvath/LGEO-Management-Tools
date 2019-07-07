/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3068bp92: Tile 2 x 2 with 2 Black Dots Pattern                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120828 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3068bp92)
#else
#include "lg_3068b.inc"
#declare LG_LDU = LG_KNOB_INNER_RADIUS/8;
#declare DOT_RADIUS = LG_KNOB_INNER_RADIUS+LG_LDU;
#declare lg_3068bp92_print = 
union {
 // BOTTOM LEFT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.00005>,
  DOT_RADIUS
  translate <0.5*LG_BRICK_WIDTH-LG_LDU, 0.5*LG_BRICK_WIDTH-LG_LDU, 0>
 }
 // TOP RIGHT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.00005>,
  DOT_RADIUS
  translate <0.5*-LG_BRICK_WIDTH+LG_LDU, 0.5*-LG_BRICK_WIDTH+LG_LDU, 0>
 }
}

#declare lg_3068bp92 = 
union {
 object { 
  lg_3068b
 }
 object {
  lg_3068bp92_print
  texture { lg_black }
 }
}

#declare lg_3068bp92_clear = 
merge {
 object { 
  lg_3068b_clear
 }
 object {
  lg_3068bp92_print
  texture { lg_black }
 }
}

#end
