/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30367c: Cylinder 2 x 2 with Dome Top with Axle Hole and Hollow Stud      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-12 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30367c)
#else
#declare lg_30367c =
union {
  difference {
    union {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
        LG_BRICK_WIDTH
      }
      intersection {
        sphere {
          <0, 0, LG_PLATE_HEIGHT>,
          LG_BRICK_WIDTH
          scale <1, 1, 0.9135>
        }
        box {
          <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
        }
      }
    }
    box {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_HEIGHT+2*LG_E>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_E>
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    sphere {
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
      scale <1, 1, 0.9135>
    }
  }
  difference {
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
      <0, 0, LG_BRICK_HEIGHT-LG_E>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT-LG_WALL_WIDTH> 
        }
        box {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT-LG_WALL_WIDTH> 
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
          LG_CROSSAXLE_WIDTH/2
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS+LG_E
    }
  }
  object {
    lg_tech_knob_logo
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  difference {
    intersection {
      union {
        box {
          <-LG_BRICK_WIDTH, -LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH, LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
        }
        box {
          <-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
          <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
        }
      }
      sphere {
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_E
        scale <1, 1, 0.9135>
      }
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_CYLINDER_RADIUS-LG_E
    }
  }
  object {
    lg_brick_cylinder
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_30367c_clear =
merge {
  difference {
    merge {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
        LG_BRICK_WIDTH
      }
      intersection {
        sphere {
          <0, 0, LG_PLATE_HEIGHT>,
          LG_BRICK_WIDTH
          scale <1, 1, 0.9135>
        }
        box {
          <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
        }
      }
    }
    box {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_HEIGHT+2*LG_E>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_E>
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT-2.5*LG_E>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    sphere {
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
      scale <1, 1, 0.9135>
    }
  }
  difference {
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
      <0, 0, LG_BRICK_HEIGHT-LG_E>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  intersection {
    merge {
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT-LG_WALL_WIDTH> 
        }
        box {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT-LG_WALL_WIDTH> 
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
          LG_CROSSAXLE_WIDTH/2
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS+LG_E
    }
  }
  object {
    lg_tech_knob_logo_clear
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  difference {
    intersection {
      merge {
        box {
          <-LG_BRICK_WIDTH, -LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH, LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_HEIGHT>
        }
        box {
          <-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
          <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
        }
      }
      sphere {
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_E
        scale <1, 1, 0.9135>
      }
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_CYLINDER_RADIUS-LG_E
    }
  }
  object {
    lg_brick_cylinder_clear
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
