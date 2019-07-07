/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32123a: Technic Bush 1/2 Smooth with Axle Hole Reduced                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2008-01-13 Lutz Uhlmann                                                     */
/* 2013-04-05 Owen Burgoyne renamed from lg_32123 to lg_32123a                 */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32123a)
#else
#declare lg_32123a =
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
      #while (ROT < 2)
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
        union {
          torus {
            0.04,
            0.04
            translate <LG_BRICK_WIDTH/4-0.08, 0, LG_KNOB_RADIUS-0.04>
          }
          torus {
            0.04,
            0.04
            translate <-LG_BRICK_WIDTH/4+0.08, 0, LG_KNOB_RADIUS-0.04>
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.08, 0.04, LG_KNOB_RADIUS-0.04>,
            <LG_BRICK_WIDTH/4-0.08, -0.04, LG_KNOB_RADIUS-0.04>,
            0.04
          }
          cylinder {
            <-LG_BRICK_WIDTH/4+0.08, 0.04, LG_KNOB_RADIUS-0.04>,
            <-LG_BRICK_WIDTH/4+0.08, -0.04, LG_KNOB_RADIUS-0.04>,
            0.04
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.08, 0, LG_KNOB_RADIUS-0.08>,
            <-LG_BRICK_WIDTH/4+0.08, 0, LG_KNOB_RADIUS-0.08>,
            0.04
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.04, 0, LG_KNOB_RADIUS-0.04>,
            <LG_BRICK_WIDTH/4-0.04, 0, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
            0.04
          }
          cylinder {
            <-LG_BRICK_WIDTH/4+0.04, 0, LG_KNOB_RADIUS-0.04>,
            <-LG_BRICK_WIDTH/4+0.04, 0, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
            0.04
          }
          box {
            <LG_BRICK_WIDTH/4-0.08, 0.04, LG_KNOB_RADIUS-0.08>,
            <-LG_BRICK_WIDTH/4+0.08, -0.04, LG_KNOB_RADIUS+LG_CORNER_SPACE>
          }
          rotate <45, 0, 0>
        }
        rotate <180*ROT, 0, 0>
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

#declare lg_32123a_clear =
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
      #while (ROT < 2)
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
        merge {
          torus {
            0.04,
            0.04
            translate <LG_BRICK_WIDTH/4-0.08, 0, LG_KNOB_RADIUS-0.04>
          }
          torus {
            0.04,
            0.04
            translate <-LG_BRICK_WIDTH/4+0.08, 0, LG_KNOB_RADIUS-0.04>
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.08, 0.04, LG_KNOB_RADIUS-0.04>,
            <LG_BRICK_WIDTH/4-0.08, -0.04, LG_KNOB_RADIUS-0.04>,
            0.04
          }
          cylinder {
            <-LG_BRICK_WIDTH/4+0.08, 0.04, LG_KNOB_RADIUS-0.04>,
            <-LG_BRICK_WIDTH/4+0.08, -0.04, LG_KNOB_RADIUS-0.04>,
            0.04
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.08, 0, LG_KNOB_RADIUS-0.08>,
            <-LG_BRICK_WIDTH/4+0.08, 0, LG_KNOB_RADIUS-0.08>,
            0.04
          }
          cylinder {
            <LG_BRICK_WIDTH/4-0.04, 0, LG_KNOB_RADIUS-0.04>,
            <LG_BRICK_WIDTH/4-0.04, 0, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
            0.04
          }
          cylinder {
            <-LG_BRICK_WIDTH/4+0.04, 0, LG_KNOB_RADIUS-0.04>,
            <-LG_BRICK_WIDTH/4+0.04, 0, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
            0.04
          }
          box {
            <LG_BRICK_WIDTH/4-0.08, 0.04, LG_KNOB_RADIUS-0.08>,
            <-LG_BRICK_WIDTH/4+0.08, -0.04, LG_KNOB_RADIUS+LG_CORNER_SPACE>
          }
          rotate <45, 0, 0>
        }
        rotate <180*ROT, 0, 0>
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
