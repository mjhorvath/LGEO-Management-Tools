/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3068bp96: Tile 2 x 2 with 6 Black Dots Pattern                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120828 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3068bp96)
#else
#include "lg_3068b.inc"
#declare LG_LDU = LG_KNOB_INNER_RADIUS/8;
#declare DOT_RADIUS = LG_KNOB_INNER_RADIUS+LG_LDU;
#declare lg_3068bp96_print = 
union {
 // CENTER LEFT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0, 0.6*LG_BRICK_WIDTH, 0>
 }
 // CENTER RIGHT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0, 0.6*-LG_BRICK_WIDTH, 0>
 }
 // BOTTOM LEFT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0.6*LG_BRICK_WIDTH, 0.6*LG_BRICK_WIDTH, 0>
 }
 // TOP LEFT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0.6*-LG_BRICK_WIDTH, 0.6*LG_BRICK_WIDTH, 0>
 }
 // BOTTOM RIGHT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0.6*LG_BRICK_WIDTH, 0.6*-LG_BRICK_WIDTH, 0>
 }
 // TOP RIGHT DOT
 cylinder {
  <0, 0, 0>,
  <0, 0, 0.000005>,
  DOT_RADIUS
  translate <0.6*-LG_BRICK_WIDTH, 0.6*-LG_BRICK_WIDTH, 0>
 }
}

#declare lg_3068bp96 = 
union {
 object { 
  lg_3068b
 }
 object {
  lg_3068bp96_print
  texture { lg_black }
 }
}

#declare lg_3068bp96_clear = 
merge {
 object { 
  lg_3068b_clear
 }
 object {
  lg_3068bp96_print
  texture { lg_black }
 }
}

#end
