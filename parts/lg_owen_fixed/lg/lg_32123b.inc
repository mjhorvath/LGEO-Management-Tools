/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32123b: Technic Bush 1/2 Smooth with Axle Hole                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-04-05 Owen Burgoyne based on lg_32123                                  */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32123b)
#else
#declare lg_32123b =
union {
  difference {
    union {
      cylinder {
        <LG_BRICK_WIDTH/4, 0, 0>,
        <-LG_BRICK_WIDTH/4, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
    }
    union {
      cylinder {
        <LG_BRICK_WIDTH/4, 0, 0>,
        <-LG_BRICK_WIDTH/4, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        0.06
        rotate <0, 0, 90>
      }
    }
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.06+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.06-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
  }
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08
        }
        cylinder {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08-LG_CORNER_SPACE
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        box {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
}

#declare lg_32123b_clear =
merge {
  difference {
    merge {
      cylinder {
        <LG_BRICK_WIDTH/4, 0, 0>,
        <-LG_BRICK_WIDTH/4, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
    }
    merge {
      cylinder {
        <LG_BRICK_WIDTH/4, 0, 0>,
        <-LG_BRICK_WIDTH/4, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        0.06
        rotate <0, 0, 90>
      }
    }
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.06+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.06-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
  }
  intersection {
    merge {
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08
        }
        cylinder {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08-LG_CORNER_SPACE
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        box {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
}

#end
