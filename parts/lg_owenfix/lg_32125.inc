/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32125: Technic Rotor 3 Blade with 6 Studs                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-06 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32125)
#else
#declare lg_32125 =
union {
  difference {
    union {
      #declare ROT = 0;
      #while (ROT < 3)
      union {
        box {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_CORNER_SPACE>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.63*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.63*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        rotate <0, 0, 90+120*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      cylinder {
        <0, 0, -LG_TOP_HEIGHT+LG_E>,
        <0, 0, -LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH/2-0.04
      }
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    box {
      <0, -0.04, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0.04, -LG_PLATE_HEIGHT-LG_E>
    }
    cylinder {
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0, -LG_PLATE_HEIGHT-LG_E>,
      0.04
    }
  }
  difference {
    union {
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
    }
    box {
      <0, -0.04, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0.04, -LG_PLATE_HEIGHT-LG_E>
    }
  }
  // ROTOR ENDS AND STUDS
  #declare ROT = 0;
  #while (ROT < 3)
  union {
    difference {
      union {
        cylinder {
          <0, 2*LG_BRICK_WIDTH, 0>,
          <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_BRICK_WIDTH/2
        }
        torus {
          LG_KNOB_RADIUS+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
        }
        torus {
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
        }
        torus {
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        }
      }
      box {
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
      }
      cylinder {
        <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
        <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        LG_KNOB_RADIUS
      }
    }
    object {
      lg_tech_knob_logo
      translate <0, LG_BRICK_WIDTH, 0>
    }
    object {
      lg_tech_knob_logo
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_column
      translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90+120*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  // HOLE FOR TECHNIC AXLE
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.08
    }
    cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08-LG_CORNER_SPACE
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
    }
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_32125_clear =
merge {
  difference {
    merge {
      #declare ROT = 0;
      #while (ROT < 3)
      merge {
        box {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_CORNER_SPACE>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.63*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.63*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        rotate <0, 0, 90+120*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      cylinder {
        <0, 0, -LG_TOP_HEIGHT+LG_E>,
        <0, 0, -LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH/2-0.04
      }
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    box {
      <0, -0.04, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0.04, -LG_PLATE_HEIGHT-LG_E>
    }
    cylinder {
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0, -LG_PLATE_HEIGHT-LG_E>,
      0.04
    }
  }
  difference {
    merge {
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
    }
    box {
      <0, -0.04, LG_E>,
      <-0.5*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2+0.04, 0.04, -LG_PLATE_HEIGHT-LG_E>
    }
  }
  // ROTOR ENDS AND STUDS
  #declare ROT = 0;
  #while (ROT < 3)
  merge {
    difference {
      merge {
        cylinder {
          <0, 2*LG_BRICK_WIDTH, 0>,
          <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
          <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
          LG_BRICK_WIDTH/2
        }
        torus {
          LG_KNOB_RADIUS+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
        }
        torus {
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
        }
        torus {
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        }
      }
      box {
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
      }
      cylinder {
        <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
        <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
        LG_KNOB_RADIUS
      }
    }
    object {
      lg_tech_knob_logo_clear
      translate <0, LG_BRICK_WIDTH, 0>
    }
    object {
      lg_tech_knob_logo_clear
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
    object {
      lg_plate_column_clear
      translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90+120*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  // HOLE FOR TECHNIC AXLE
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.08
    }
    cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08-LG_CORNER_SPACE
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
    }
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
