/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_57585: Technic Bush with Three Axles                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-04-05 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_57585)
#else
#declare lg_57585 = 
union {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  intersection { // INNER AXLE TEETH
    union {
      #declare AXLE = 0;
      #while (AXLE < 2)
      union {
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
          0.08-LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2>
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2>
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          0.08
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        union {
          torus {
            0.04,
            0.04
            translate <LG_KNOB_RADIUS-0.04, 0, LG_BRICK_WIDTH/2-0.08>
          }
          torus {
            0.04,
            0.04
            translate <LG_KNOB_RADIUS-0.04, 0, -LG_BRICK_WIDTH/2+0.08>
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0.04, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS-0.04, -0.04, LG_BRICK_WIDTH/2-0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0.04, -LG_BRICK_WIDTH/2+0.08>,
            <LG_KNOB_RADIUS-0.04, -0.04, -LG_BRICK_WIDTH/2+0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.08, 0, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS-0.08, 0, -LG_BRICK_WIDTH/2+0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0, LG_BRICK_WIDTH/2-0.04>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-0.04>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0, -LG_BRICK_WIDTH/2+0.04>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+0.04>,
            0.04
          }
          box {
            <LG_KNOB_RADIUS-0.08, 0.04, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, -0.04, -LG_BRICK_WIDTH/2+0.08>
          }
          rotate <0, 0, 135>
        }
        rotate <0, 0, 180*AXLE>
      }
      #declare AXLE = AXLE + 1;
      #end
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH-LG_E>,
      <0, 0, LG_BRICK_WIDTH+LG_E>
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
  #declare ROT = 0;
  #while (ROT < 3)
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
      }
      difference {
        union {
          cylinder {
            <0.5*-LG_BRICK_WIDTH, 0, 0>,
            <1.5*-LG_BRICK_WIDTH+0.08, 0, 0>,
            LG_KNOB_RADIUS
          }
          cylinder {
            <0.5*-LG_BRICK_WIDTH, 0, 0>,
            <1.5*-LG_BRICK_WIDTH, 0, 0>,
            LG_KNOB_RADIUS-0.08
          }
          torus {
            LG_KNOB_RADIUS-0.08,
            0.08
            rotate <0, 0, 90>
            translate <1.5*-LG_BRICK_WIDTH+0.08, 0, 0>
          }
        }
        #declare AXLE = 0;
        #while (AXLE < 4)
        box {
          <0, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2>,
          <1.5*-LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          rotate <90*AXLE, 0, 0>
        }
        #declare AXLE = AXLE + 1;
        #end
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_BEAM_WIDTH/2-LG_E
    }
    rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_57585_clear = 
merge {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  intersection { // INNER AXLE TEETH
    merge {
      #declare AXLE = 0;
      #while (AXLE < 2)
      merge {
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
          0.08-LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2>
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2>
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          0.08
        }
        box {
          <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        merge {
          torus {
            0.04,
            0.04
            translate <LG_KNOB_RADIUS-0.04, 0, LG_BRICK_WIDTH/2-0.08>
          }
          torus {
            0.04,
            0.04
            translate <LG_KNOB_RADIUS-0.04, 0, -LG_BRICK_WIDTH/2+0.08>
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0.04, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS-0.04, -0.04, LG_BRICK_WIDTH/2-0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0.04, -LG_BRICK_WIDTH/2+0.08>,
            <LG_KNOB_RADIUS-0.04, -0.04, -LG_BRICK_WIDTH/2+0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.08, 0, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS-0.08, 0, -LG_BRICK_WIDTH/2+0.08>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0, LG_BRICK_WIDTH/2-0.04>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-0.04>,
            0.04
          }
          cylinder {
            <LG_KNOB_RADIUS-0.04, 0, -LG_BRICK_WIDTH/2+0.04>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+0.04>,
            0.04
          }
          box {
            <LG_KNOB_RADIUS-0.08, 0.04, LG_BRICK_WIDTH/2-0.08>,
            <LG_KNOB_RADIUS+LG_CORNER_SPACE, -0.04, -LG_BRICK_WIDTH/2+0.08>
          }
          rotate <0, 0, 135>
        }
        rotate <0, 0, 180*AXLE>
      }
      #declare AXLE = AXLE + 1;
      #end
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH-LG_E>,
      <0, 0, LG_BRICK_WIDTH+LG_E>
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
  #declare ROT = 0;
  #while (ROT < 3)
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
      }
      difference {
        merge {
          cylinder {
            <0.5*-LG_BRICK_WIDTH, 0, 0>,
            <1.5*-LG_BRICK_WIDTH+0.08, 0, 0>,
            LG_KNOB_RADIUS
          }
          cylinder {
            <0.5*-LG_BRICK_WIDTH, 0, 0>,
            <1.5*-LG_BRICK_WIDTH, 0, 0>,
            LG_KNOB_RADIUS-0.08
          }
          torus {
            LG_KNOB_RADIUS-0.08,
            0.08
            rotate <0, 0, 90>
            translate <1.5*-LG_BRICK_WIDTH+0.08, 0, 0>
          }
        }
        #declare AXLE = 0;
        #while (AXLE < 4)
        box {
          <0, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2>,
          <1.5*-LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          rotate <90*AXLE, 0, 0>
        }
        #declare AXLE = AXLE + 1;
        #end
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_BEAM_WIDTH/2-LG_E
    }
    rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
