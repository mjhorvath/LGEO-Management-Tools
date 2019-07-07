/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_87994p01: Bar 3L with White Ends (Lightsaber Blade)                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120811 Owen Burgoyne (based on lg_30374.inc)                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_87994p01)
#else
#declare lg_87994p01 =
union {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  texture { lg_white }
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  texture { lg_white }
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -1*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
  texture { lg_white }
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -1*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
  texture { lg_white }
 }
 cylinder {
  <0, 0, -1*LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_WALL_WIDTH
  texture { lg_white }
 }
 cylinder {
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
  texture { lg_white }
 }
}

#declare lg_87994p01_clear =
merge {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  texture { lg_white }
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  texture { lg_white }
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -1*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
  texture { lg_white }
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -1*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
  texture { lg_white }
 }
 cylinder {
  <0, 0, -1*LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_WALL_WIDTH
  texture { lg_white }
 }
 cylinder {
  <0, 0, -3*LG_BRICK_WIDTH+LG_PLATE_HEIGHT>,
  <0, 0, -3*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
  texture { lg_white }
 }
}

#end
