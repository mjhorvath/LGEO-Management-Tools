/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_87994: Bar 3L (Lightsaber Blade)                                         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120811 Owen Burgoyne (based on lg_30374.inc)                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_87994)
#else
#declare lg_87994 =
union {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -3*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
}

#declare lg_87994_clear =
merge {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -3*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
}

#end
