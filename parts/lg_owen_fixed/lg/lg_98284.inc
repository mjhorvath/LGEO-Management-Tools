/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_98284: Plate 2 x 2 Round with Hole and 4 Vertical Bars                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-01 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_98284)
#else
#declare lg_98284 =
union {
  torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    union {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, -LG_PLATE_HEIGHT>,
        <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
    }
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, -LG_PLATE_HEIGHT-LG_E>,
        LG_BRICK_WIDTH-LG_WALL_WIDTH
      }
      box {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
      }
    }
  }
  difference {
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_TOP_HEIGHT>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
    union {
      intersection {
        cylinder {
          <0, 0, LG_E>,
          <0, 0, -LG_TOP_HEIGHT-LG_E>,
          LG_BRICK_WIDTH-LG_WALL_WIDTH
        }
        union {
          object {
            lg_knob_inner_space
            translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
        }
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        cylinder {
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
          LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
          LG_KNOB_RADIUS
        }
        torus {
          LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
          LG_KNOB_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
        }
        #if (lg_quality > 2)
        object {
          lego_logo_text
          rotate <0, 0, -90*ROT>
          translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
        }
        #end
      rotate <0, 0, 90*ROT>
      }
    #declare ROT = ROT + 1;
    #end
    }
    union {
      cylinder {
        <0, 0, LG_KNOB_HEIGHT+LG_E>,
        <0, 0, -LG_CORNER_SPACE-LG_E>,
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
        <0, 0, -LG_CORNER_SPACE-LG_E>,
        LG_BRICK_WIDTH
      }
      torus {
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
        LG_KNOB_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
      }
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    cylinder {
      <0, -1*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      LG_KNOB_INNER_RADIUS
    }
    sphere {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
    }
    torus {
      LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  object {
    lg_plate_cylinder
    translate <0, 0, -LG_PLATE_HEIGHT>
  }
}

#declare lg_98284_clear =
merge {
  torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    merge {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, -LG_PLATE_HEIGHT>,
        <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
    }
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, -LG_PLATE_HEIGHT-LG_E>,
        LG_BRICK_WIDTH-LG_WALL_WIDTH
      }
      box {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
      }
    }
  }
  difference {
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_TOP_HEIGHT>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
    merge {
      intersection {
        cylinder {
          <0, 0, LG_E>,
          <0, 0, -LG_TOP_HEIGHT-LG_E>,
          LG_BRICK_WIDTH-LG_WALL_WIDTH
        }
        merge {
          object {
            lg_knob_inner_space
            translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
          object {
            lg_knob_inner_space
            translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
          }
        }
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  intersection {
    merge {
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        cylinder {
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
          LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
          LG_KNOB_RADIUS
        }
        torus {
          LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
          LG_KNOB_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
        }
        #if (lg_quality > 2)
        object {
          lego_logo_text_clear
          rotate <0, 0, -90*ROT>
          translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
        }
        #end
      rotate <0, 0, 90*ROT>
      }
    #declare ROT = ROT + 1;
    #end
    }
    merge {
      cylinder {
        <0, 0, LG_KNOB_HEIGHT+LG_E>,
        <0, 0, -LG_CORNER_SPACE-LG_E>,
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
        <0, 0, -LG_CORNER_SPACE-LG_E>,
        LG_BRICK_WIDTH
      }
      torus {
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
        LG_KNOB_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
      }
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    cylinder {
      <0, -1*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      LG_KNOB_INNER_RADIUS
    }
    sphere {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>,
      <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
    }
    torus {
      LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 1.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  object {
    lg_plate_cylinder_clear
    translate <0, 0, -LG_PLATE_HEIGHT>
  }
}

#end
