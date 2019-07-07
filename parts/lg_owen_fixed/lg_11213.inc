/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_11213: Plate 6 x 6 Round with Hole and Snapstud                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_11213)
#else
#declare WIDTH = 6;
#declare lg_plate_cylinder_half = 
merge {
  difference {
    object {
      lg_plate_cylinder_clear
    }
    box {
      <0, -LG_CYLINDER_RADIUS-LG_E, -LG_E>,
      <LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS+LG_E, LG_PLATE_INNER_HEIGHT>
    }
  }
  #declare MIR = 0;
  #while (MIR < 2)
  merge {
    sphere {
      <LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
    }
    cylinder {
      <0, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_INNER_HEIGHT+LG_E>,
      LG_CYLINDER_WALL_WIDTH/2
    }
    box {
      <0, -LG_CYLINDER_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <LG_CYLINDER_WALL_WIDTH/2, -LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH, LG_PLATE_INNER_HEIGHT+LG_E>
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH/2, 0, LG_CYLINDER_WALL_WIDTH/2>,
      <LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
    }
    box {
      <LG_CYLINDER_WALL_WIDTH/2-LG_CYLINDER_WALL_WIDTH/2, 0, LG_CYLINDER_WALL_WIDTH/2>,
      <LG_CYLINDER_WALL_WIDTH/2+LG_CYLINDER_WALL_WIDTH/2, -LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_INNER_HEIGHT+LG_E>
    }
    #if (MIR = 1)
    scale <1, -1, 1>
    #end
  }
  #declare MIR = MIR + 1;
  #end
}

#declare lg_11213 = 
union {
  difference { // SNAP STUD
    union {
      torus {
        LG_CYLINDER_RADIUS-0.04,
        0.04
        rotate <90, 0, 0>
        translate <0, 0, 0.04>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-0.04
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
      LG_KNOB_RADIUS
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <0, -0.04, -LG_E>,
      <LG_CYLINDER_RADIUS+LG_E, 0.04, 0.14>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  difference {  // PLATE
    union {
      torus {
        WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        WIDTH*LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      WIDTH*LG_BRICK_WIDTH/2-LG_WALL_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    union {
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH/2+LG_E, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -30.95>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH/2+LG_E, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -59.05>
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union { // STUDS
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  #declare ROT = 0;
  #while (ROT < 4)
  union {  // UNDERSIDE STUDS
    object {
      lg_plate_cylinder
      translate <0, 1*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder
      translate <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder
      translate <2*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
    }
    intersection {
      object {
        lg_plate_cylinder
        translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        WIDTH*LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2
      }
    }
    object {
      lg_plate_cylinder_half
      rotate <0, 0, 45>
      translate <1*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder_half
      rotate <0, 0, 270>
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_11213_clear = 
merge {
  difference { // SNAP STUD
    merge {
      torus {
        LG_CYLINDER_RADIUS-0.04,
        0.04
        rotate <90, 0, 0>
        translate <0, 0, 0.04>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-0.04
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
      LG_KNOB_RADIUS
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <0, -0.04, -LG_E>,
      <LG_CYLINDER_RADIUS+LG_E, 0.04, 0.14>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  difference {  // PLATE
    merge {
      torus {
        WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        WIDTH*LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      WIDTH*LG_BRICK_WIDTH/2-LG_WALL_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    merge {
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH/2+LG_E, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -30.95>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH/2+LG_E, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -59.05>
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    WIDTH*LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge { // STUDS
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  #declare ROT = 0;
  #while (ROT < 4)
  merge {  // UNDERSIDE STUDS
    object {
      lg_plate_cylinder_clear
      translate <0, 1*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder_clear
      translate <1*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder_clear
      translate <2*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
    }
    intersection {
      object {
        lg_plate_cylinder_clear
        translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        WIDTH*LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2
      }
    }
    object {
      lg_plate_cylinder_half
      rotate <0, 0, 45>
      translate <1*LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_cylinder_half
      rotate <0, 0, 270>
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
