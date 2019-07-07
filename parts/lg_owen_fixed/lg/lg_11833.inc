/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_11833: Plate 4 x 4 Round with Hole 2 x 2                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_11833)
#else
#declare WIDTH = 4;
#declare lg_11833 = 
union {
  torus {
    (WIDTH/2*LG_BRICK_WIDTH)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      torus {
        (WIDTH/2*LG_BRICK_WIDTH)-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        WIDTH/2*LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    union {
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <2.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -45>
      }
      cylinder {
        <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    (LG_BRICK_WIDTH)+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  difference {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        object {
          lg_plate_cylinder
          translate <0, LG_BRICK_WIDTH, 0>
        }
        object {
          lg_plate_cylinder
          translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_11833_clear = 
merge {
  torus {
    (WIDTH/2*LG_BRICK_WIDTH)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      torus {
        (WIDTH/2*LG_BRICK_WIDTH)-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        WIDTH/2*LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    merge {
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <0, -LG_KNOB_RADIUS, -LG_E>,
        <2.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
        rotate <0, 0, -45>
      }
      cylinder {
        <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    (LG_BRICK_WIDTH)+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    object {
      lg_knob_clear
      rotate <0, 0, -90*ROT>
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  difference {
    merge {
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        object {
          lg_plate_cylinder_clear
          translate <0, LG_BRICK_WIDTH, 0>
        }
        object {
          lg_plate_cylinder_clear
          translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
