/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4255: Technic Shock Absorber 6.5L Cylinder                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4255)
#else
#declare lg_4255 = 
union {
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2.32+LG_CORNER_SPACE>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2.32+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  difference {
    union {
      cylinder {
        <0, 0, -2.32>,
        <0, 0, -LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -2.32+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -2.32-LG_E>,
      <0, 0, -2.32+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -2.32>,
      <0, 0, -2.32+0.08>,
      0.3
    }
    difference {
      cylinder {
        <0, 0, -2.32+LG_E>,
        <0, 0, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -2.32>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.52>
      }
      box {
        <-LG_CROSSAXLE_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -2.32>,
        <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -1.52>
      }
    }
    box {
      <-LG_BRICK_WIDTH/2, -0.08, -1.52>,
      <LG_BRICK_WIDTH/2, 0.08, 0>
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_BRICK_WIDTH/2-LG_E
    }
  }
}

#declare lg_4255_clear = 
merge {
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2.32+LG_CORNER_SPACE>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2.32+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  difference {
    merge {
      cylinder {
        <0, 0, -2.32>,
        <0, 0, -LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -2.32+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, -2.32-LG_E>,
      <0, 0, -2.32+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -2.32>,
      <0, 0, -2.32+0.08>,
      0.3
    }
    difference {
      cylinder {
        <0, 0, -2.32+LG_E>,
        <0, 0, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -2.32>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.52>
      }
      box {
        <-LG_CROSSAXLE_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -2.32>,
        <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -1.52>
      }
    }
    box {
      <-LG_BRICK_WIDTH/2, -0.08, -1.52>,
      <LG_BRICK_WIDTH/2, 0.08, 0>
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_BRICK_WIDTH/2-LG_E
    }
  }
}

#end
