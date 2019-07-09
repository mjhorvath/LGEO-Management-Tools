/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3005p04: Brick 1 x 1 with Minecraft Micromob Creeper Face Pattern        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20121226 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3005p04)
#else
#include "lg_3005.inc"
#declare LENGTH = 1;
#declare WIDTH = 1;
#declare GRID_X = -LG_BRICK_WIDTH/8-(LG_CORNER_SPACE/8);
#declare GRID_Y = -LG_BRICK_HEIGHT/10-(LG_CORNER_SPACE/10);
#declare LG_PRINT = 0.0001;
#declare lg_3005p04_print =
union {
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 1*GRID_X, 3*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 3*GRID_X, 5*GRID_Y>
  }
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 5*GRID_X, 3*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 7*GRID_X, 5*GRID_Y>
  }
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 3*GRID_X, 5*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 5*GRID_X, 7*GRID_Y>
  }
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 2*GRID_X, 6*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 6*GRID_X, 8*GRID_Y>
  }
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 2*GRID_X, 7*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 3*GRID_X, 9*GRID_Y>
  }
  box {
    <LENGTH*LG_BRICK_WIDTH-LG_E, 5*GRID_X, 7*GRID_Y>,
    <LENGTH*LG_BRICK_WIDTH+LG_PRINT, 6*GRID_X, 9*GRID_Y>
  }
  translate <0.5*-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
}

#declare lg_3005p04 = 
union {
  object { 
    lg_3005
  }
  object {
    lg_3005p04_print
    texture { lg_black }
  }
}

#declare lg_3005p04_clear = 
merge {
  object { 
    lg_3005_clear
  }
  object {
    lg_3005p04_print
    texture { lg_black }
  }
}
 
#end
