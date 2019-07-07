/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4288: Tyre Balloon (Needs work)                                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-04-05 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4288)
#else
#declare WIDTH = 0.6;
#declare BAND_WIDTH = LG_CYLINDER_WALL_WIDTH/4;
#declare lg_4288 =
union {
  difference {
    union {
      cylinder {
        <-WIDTH+LG_CORNER_SPACE, 0, 0>,
        <WIDTH-LG_CORNER_SPACE, 0, 0>
        0.6
      }
      cylinder {
        <-WIDTH, 0, 0>,
        <WIDTH, 0, 0>
        0.6-LG_CORNER_SPACE
      }
      intersection {
        union {
          torus {
            0.4,
            0.45
            rotate <0, 0, 90>
            scale <1.463, 1, 1>
          }
          difference {
            torus {
              0.4,
              0.6
              rotate <0, 0, 90>
              scale <1.052, 1, 1>
            }
            #declare MIR = 0;
            #while (MIR < 2)
            union {
              #declare ROT = 0;
              #while (ROT < 15)
              box {
                <0.035, -0.075, 0>,
                <0.7, 0.075, 1>
                rotate <ROT*24, 0, 0>
              }
              #declare ROT = ROT + 1;
              #end
              #if (MIR = 1)
              scale <-1, 1, 1>
              rotate <12, 0, 0>
              #end
            }
            #declare MIR = MIR + 1;
            #end
          }
        }
        cylinder {
          <-0.6, 0, 0>,
          <0.6, 0, 0>,
          1
        }
      }
    }
    cylinder {
      <-0.6-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <-LG_E, 0, 0>,
      <0.6+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-0.6-LG_E, 0, 0>,
      <-0.6+0.07, 0, 0>,
      LG_BRICK_WIDTH/2+0.07
    }
  }
  torus {
    LG_BRICK_WIDTH/2+0.07,
    0.07
    rotate <0, 0, 90>
    translate <-0.6+0.07, 0, 0>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.6+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6, 0, 0>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    cylinder {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
    }
    cylinder {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <WIDTH, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    cylinder {
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    cylinder {
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_4288_clear =
merge {
  difference {
    merge {
      cylinder {
        <-WIDTH+LG_CORNER_SPACE, 0, 0>,
        <WIDTH-LG_CORNER_SPACE, 0, 0>
        0.6
      }
      cylinder {
        <-WIDTH, 0, 0>,
        <WIDTH, 0, 0>
        0.6-LG_CORNER_SPACE
      }
      intersection {
        merge {
          torus {
            0.4,
            0.45
            rotate <0, 0, 90>
            scale <1.463, 1, 1>
          }
          difference {
            torus {
              0.4,
              0.6
              rotate <0, 0, 90>
              scale <1.052, 1, 1>
            }
            #declare MIR = 0;
            #while (MIR < 2)
            merge {
              #declare ROT = 0;
              #while (ROT < 15)
              box {
                <0.035, -0.075, 0>,
                <0.7, 0.075, 1>
                rotate <ROT*24, 0, 0>
              }
              #declare ROT = ROT + 1;
              #end
              #if (MIR = 1)
              scale <-1, 1, 1>
              rotate <12, 0, 0>
              #end
            }
            #declare MIR = MIR + 1;
            #end
          }
        }
        cylinder {
          <-0.6, 0, 0>,
          <0.6, 0, 0>,
          1
        }
      }
    }
    cylinder {
      <-0.6-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <-LG_E, 0, 0>,
      <0.6+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-0.6-LG_E, 0, 0>,
      <-0.6+0.07, 0, 0>,
      LG_BRICK_WIDTH/2+0.07
    }
  }
  torus {
    LG_BRICK_WIDTH/2+0.07,
    0.07
    rotate <0, 0, 90>
    translate <-0.6+0.07, 0, 0>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.6+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6, 0, 0>
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    cylinder {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
    }
    cylinder {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
    }
    torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <WIDTH, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    cylinder {
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    box {
      <0, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
    }
    cylinder {
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#end

// 4288 Tyre Balloon
// Twice the width of 3641 0.3 (0.6)
// Same radius as 6015 (0.84)
// Ridge is radius of LG_BRICK_WIDTH/2