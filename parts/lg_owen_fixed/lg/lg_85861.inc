/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_85861: Plate 1 x 1 Round with Open Stud (based on lg_4073.inc)           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120828 Owen Burgoyne                                                      */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_85861)
#else
#declare lg_85861 =
union {
 object {
  lg_tech_knob
  translate <0,0, LG_PLATE_HEIGHT>
  rotate <0,0,0>
 }
 union {
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, LG_CORNER_SPACE>,
    (LG_CYLINDER_RADIUS) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+2*LG_E>,
    <0, 0, 0>,
    (LG_KNOB_RADIUS)
   }
  }
  difference {
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  torus {
   (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
   (LG_KNOB_RADIUS+LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
   <0, 0, LG_PLATE_HEIGHT+LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_85861_clear =
merge {
 object {
  lg_tech_knob
  translate <0,0, LG_PLATE_HEIGHT>
  rotate <0,0,0>
 }
 union {
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, LG_CORNER_SPACE>,
    (LG_CYLINDER_RADIUS) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+2*LG_E>,
    <0, 0, 0>,
    (LG_KNOB_RADIUS)
   }
  }
  difference {
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  torus {
   (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
   (LG_KNOB_RADIUS+LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
   <0, 0, LG_PLATE_HEIGHT+LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
