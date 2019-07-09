/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3876: Minifig Shield Round                                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-04-05 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3876)
#else
#declare lg_3876 = 
union {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_BRICK_HEIGHT-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_HEIGHT-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    LG_BRICK_HEIGHT-LG_CORNER_SPACE
  }
  cylinder {
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_HEIGHT
  }
  torus {
    0.425*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  torus {
    0.625*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  torus {
    0.825*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  object {
    lg_tech_knob_logo
    rotate <90, 0, 90>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
}

#declare lg_3876_clear = 
merge {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 2*-LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_BRICK_HEIGHT-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_HEIGHT-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    LG_BRICK_HEIGHT-LG_CORNER_SPACE
  }
  cylinder {
    <LG_BRICK_WIDTH/2-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_HEIGHT
  }
  torus {
    0.425*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  torus {
    0.625*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  torus {
    0.825*LG_BRICK_HEIGHT,
    0.035
    rotate <0, 0, 90>
    scale <0.5, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
  object {
    lg_tech_knob_logo_clear
    rotate <90, 0, 90>
    translate <LG_BRICK_WIDTH/2, 0, 0>
  }
}

#end
