/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_64644: Minifig Telescope                                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120828 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_64644)
#else
#declare lg_64644 =
union {
 // EDGES
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 // WALLS
 difference {
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_PLATE_HEIGHT>,
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, LG_PLATE_HEIGHT>,
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    <0, 0, 5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>,
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    <0, 0, 5*LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_CORNER_SPACE>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CYLINDER_WALL_WIDTH>,
   LG_CYLINDER_RADIUS-LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, 5*LG_PLATE_HEIGHT+LG_E>,
   LG_CYLINDER_WALL_WIDTH
  }
 }
 object {
  lg_tech_knob
  translate <0, 0, 5*LG_PLATE_HEIGHT>
 }
 translate <0, 0, 5*-LG_PLATE_HEIGHT>
}

#declare lg_64644_clear =
merge {
 // EDGES
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 // WALLS
 difference {
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_PLATE_HEIGHT>,
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, LG_PLATE_HEIGHT>,
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    <0, 0, 5*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH+LG_CORNER_SPACE>,
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, 5*LG_PLATE_HEIGHT-LG_CYLINDER_WALL_WIDTH>,
    <0, 0, 5*LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_CORNER_SPACE>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, LG_BRICK_HEIGHT-LG_CYLINDER_WALL_WIDTH-LG_CYLINDER_WALL_WIDTH>,
   LG_CYLINDER_RADIUS-LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, 5*LG_PLATE_HEIGHT+LG_E>,
   LG_CYLINDER_WALL_WIDTH
  }
 }
 object {
  lg_tech_knob
  translate <0, 0, 5*LG_PLATE_HEIGHT>
 }
 translate <0, 0, 5*-LG_PLATE_HEIGHT>
}

#end
