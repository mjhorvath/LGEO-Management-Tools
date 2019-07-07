/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_91049: Plate 1.5 × 1.5 × 0.667 Round                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_91049)
#else
#declare lg_91049 =
union {
  torus {
    LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.20+LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.20+LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.48-LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.48-LG_CORNER_SPACE>
  }
  torus {
    0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, 1*LG_PLATE_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 1*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, 1*LG_PLATE_HEIGHT>,
        <0, 0, 2*LG_PLATE_HEIGHT>,
        0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 1*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        0.5*LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, 0.28-LG_INNER_CORNER_SPACE>,
        <0, 0, 0.28+LG_E>,
        LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.40-LG_E>,
        <0, 0, 0.40+LG_INNER_CORNER_SPACE>,
        0.5*LG_BRICK_WIDTH+LG_INNER_CORNER_SPACE
      }
    }
    difference {
      union {
        cylinder {
          <0, 0, -LG_E>,
          <0, 0, LG_KNOB_CORNER_SPACE>,
          LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE
        }
        cylinder {
          <0, 0, 0>,
          <0, 0, 0.52>,
          LG_KNOB_RADIUS
        }
        torus {
          LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE,
          LG_INNER_CORNER_SPACE
          rotate x*90
          translate <0, 0, 0.28-LG_INNER_CORNER_SPACE>
        }
        torus {
          0.5*LG_BRICK_WIDTH+LG_INNER_CORNER_SPACE,
          LG_INNER_CORNER_SPACE
          rotate x*90
          translate <0, 0, 0.40+LG_INNER_CORNER_SPACE>
        }
      }
      #local ROT = 0;
      #while (ROT < 3)
      box {
        <-0.04, -LG_KNOB_INNER_RADIUS, LG_KNOB_HEIGHT>,
        <0.04, -LG_KNOB_RADIUS-LG_E, 0.52+LG_E>
        rotate <0, 0, 120*ROT>
      }
      #local ROT = ROT + 1;
      #end
    }
  }
  difference {
    union {
      cylinder {
        <0, 0, 0.20>,
        <0, 0, 0.48>,
        0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.20+LG_CORNER_SPACE>,
        <0, 0, 0.48-LG_CORNER_SPACE>,
        0.75*LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, 0.20-LG_E>,
      <0, 0, 0.20+LG_CORNER_SPACE>,
      0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0.20>,
      <0, 0, 0.28-LG_INNER_CORNER_SPACE>,
      0.75*LG_BRICK_WIDTH-0.04
    }
    cylinder {
      <0, 0, 0.20>,
      <0, 0, 0.28>,
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE
    }
    torus {
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate x*90
      translate <0, 0, 0.28-LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 2*LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS+LG_E
    }
    torus {
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate x*90
      translate <0, 0, 0.40+LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0.40>,
      <0, 0, 0.48>,
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0.40+LG_INNER_CORNER_SPACE>,
      <0, 0, 0.48>,
      0.75*LG_BRICK_WIDTH-0.04
    }
    cylinder {
      <0, 0, 0.48-LG_CORNER_SPACE>,
      <0, 0, 0.48+LG_E>,
      0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE
    }
  }
  object {
    lg_knob
    translate <0, 0, 2*LG_PLATE_HEIGHT>
  }
  translate <0, 0, 2*-LG_PLATE_HEIGHT>
}

#declare lg_91049_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.20+LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.20+LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.48-LG_CORNER_SPACE>
  }
  torus {
    0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 0.48-LG_CORNER_SPACE>
  }
  torus {
    0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, 1*LG_PLATE_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 1*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, 1*LG_PLATE_HEIGHT>,
        <0, 0, 2*LG_PLATE_HEIGHT>,
        0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 1*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        0.5*LG_BRICK_WIDTH
      }
      cylinder {
        <0, 0, 0.28-LG_INNER_CORNER_SPACE>,
        <0, 0, 0.28+LG_E>,
        LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.40-LG_E>,
        <0, 0, 0.40+LG_INNER_CORNER_SPACE>,
        0.5*LG_BRICK_WIDTH+LG_INNER_CORNER_SPACE
      }
    }
    difference {
      merge {
        cylinder {
          <0, 0, -LG_E>,
          <0, 0, LG_KNOB_CORNER_SPACE>,
          LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE
        }
        cylinder {
          <0, 0, 0>,
          <0, 0, 0.52>,
          LG_KNOB_RADIUS
        }
        torus {
          LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE,
          LG_INNER_CORNER_SPACE
          rotate x*90
          translate <0, 0, 0.28-LG_INNER_CORNER_SPACE>
        }
        torus {
          0.5*LG_BRICK_WIDTH+LG_INNER_CORNER_SPACE,
          LG_INNER_CORNER_SPACE
          rotate x*90
          translate <0, 0, 0.40+LG_INNER_CORNER_SPACE>
        }
      }
      #local ROT = 0;
      #while (ROT < 3)
      box {
        <-0.04, -LG_KNOB_INNER_RADIUS, LG_KNOB_HEIGHT>,
        <0.04, -LG_KNOB_RADIUS-LG_E, 0.52+LG_E>
        rotate <0, 0, 120*ROT>
      }
      #local ROT = ROT + 1;
      #end
    }
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0.20>,
        <0, 0, 0.48>,
        0.75*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.20+LG_CORNER_SPACE>,
        <0, 0, 0.48-LG_CORNER_SPACE>,
        0.75*LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, 0.20-LG_E>,
      <0, 0, 0.20+LG_CORNER_SPACE>,
      0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0.20>,
      <0, 0, 0.28-LG_INNER_CORNER_SPACE>,
      0.75*LG_BRICK_WIDTH-0.04
    }
    cylinder {
      <0, 0, 0.20>,
      <0, 0, 0.28>,
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE
    }
    torus {
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate x*90
      translate <0, 0, 0.28-LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 2*LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS+LG_E
    }
    torus {
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate x*90
      translate <0, 0, 0.40+LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, 0.40>,
      <0, 0, 0.48>,
      0.75*LG_BRICK_WIDTH-0.04-LG_INNER_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0.40+LG_INNER_CORNER_SPACE>,
      <0, 0, 0.48>,
      0.75*LG_BRICK_WIDTH-0.04
    }
    cylinder {
      <0, 0, 0.48-LG_CORNER_SPACE>,
      <0, 0, 0.48+LG_E>,
      0.75*LG_BRICK_WIDTH-0.04+LG_CORNER_SPACE
    }
  }
  object {
    lg_knob_clear
    translate <0, 0, 2*LG_PLATE_HEIGHT>
  }
  translate <0, 0, 2*-LG_PLATE_HEIGHT>
}

#end
