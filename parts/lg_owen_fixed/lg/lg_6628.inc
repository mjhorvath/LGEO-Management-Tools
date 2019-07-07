/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_6628: Technic Pin Towball with Friction                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2000-11-11 Lutz Uhlmann                                                     */
/* 2007-10-14 Lutz Uhlmann moved from lg_0050 to lg_6628                       */
/* 2013-06-28 Owen Burgoyne fixed position and orientation                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_6628)
#else
#declare lg_6628 =
union {
 difference {
  union {
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, LG_BRICK_WIDTH-0.04, 0>
   }
   cylinder {
    <0, LG_WALL_WIDTH/2, 0>,
    <0, 0, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  rotate <0, 0, 180>
 }
 union {
  cylinder {
   <0, -0.6, -0.48>,
   <0, -0.2, -0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.6, -0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.2, -0.48>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.6, 0.48>,
   <0, -0.2, 0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.6, 0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.2, 0.48>,
   LG_CORNER_SPACE
  }
  scale <1, 1, 1/2>
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_E, 0>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 0.5*LG_BRICK_WIDTH, 0>,
  0.3
 }
 rotate <0, 90, 0>
}

#declare lg_6628_clear =
merge {
 difference {
  merge {
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, LG_BRICK_WIDTH-0.04, 0>
   }
   cylinder {
    <0, LG_WALL_WIDTH/2, 0>,
    <0, 0, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  rotate <0, 0, 180>
 }
 union {
  cylinder {
   <0, -0.6, -0.48>,
   <0, -0.2, -0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.6, -0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.2, -0.48>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.6, 0.48>,
   <0, -0.2, 0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.6, 0.48>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.2, 0.48>,
   LG_CORNER_SPACE
  }
  scale <1, 1, 1/2>
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_E, 0>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 0.5*LG_BRICK_WIDTH, 0>,
  0.3
 }
 rotate <0, 90, 0>
}

#end
