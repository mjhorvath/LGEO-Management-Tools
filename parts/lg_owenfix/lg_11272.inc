/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_11272: Technic Axle Connector 2 x 3 Quadruple                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-29 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_11272)
#else
#declare lg_11272 = 
union {
  intersection { // INNER AXLE TEETH
    union {
      #declare AXLE = 0;
      #while (AXLE < 4)
      union {
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        cylinder {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08
        }
        box {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        rotate <90*AXLE, 0, 0>
      }
      #declare AXLE = AXLE + 1;
      #end
    }
    cylinder {
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
        0.3
      }
      cylinder {
        <LG_BRICK_WIDTH, 0, 0>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
    }
    union {
      cylinder {
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, 0, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <-LG_WALL_WIDTH-0.045, 0, LG_BRICK_WIDTH/2>,
        <-LG_WALL_WIDTH-0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, -0.045, LG_BRICK_WIDTH/2>,
        <-LG_WALL_WIDTH-0.045, 0.045, -LG_BRICK_WIDTH/2>
      }
      cylinder {
        <LG_WALL_WIDTH+0.045, 0, LG_BRICK_WIDTH/2>,
        <LG_WALL_WIDTH+0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <LG_WALL_WIDTH+0.045, -0.045, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0.045, -LG_BRICK_WIDTH/2>
      }
    }
  }
  // SIDE CONNECTOR
  #declare ROT = 0;
  #while (ROT < 2)
  union {
    intersection { // INNER AXLE TEETH
      union {
        #declare AXLE = 0;
        #while (AXLE < 4)
        union {
          torus {
            0.08-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
          }
          torus {
            0.08-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            0.08-LG_CORNER_SPACE
          }
          cylinder {
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
            LG_CORNER_SPACE
          }
          cylinder {
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
            LG_CORNER_SPACE
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          box {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          box {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <0.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            0.08
          }
          box {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          box {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          rotate <90*AXLE, 0, 0>
        }
        #declare AXLE = AXLE + 1;
        #end
      }
      cylinder {
        <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
        <0.5*LG_BRICK_WIDTH+LG_E, 0, 0>
        LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
      translate <0, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    difference {
      union {
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          0.3
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_E, 0, -0.25*LG_BEAM_WIDTH/2>,
          <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0.5*LG_BEAM_WIDTH/2>
        }
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0>,
        <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH-0.045, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH+0.045, -LG_BRICK_WIDTH/2>
      }
    }
    rotate <180*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_11272_clear = 
merge {
  intersection { // INNER AXLE TEETH
    merge {
      #declare AXLE = 0;
      #while (AXLE < 4)
      merge {
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
        }
        cylinder {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        cylinder {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
          0.08
        }
        box {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
        }
        rotate <90*AXLE, 0, 0>
      }
      #declare AXLE = AXLE + 1;
      #end
    }
    cylinder {
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>
      LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, 0>,
        0.3
      }
      cylinder {
        <LG_BRICK_WIDTH, 0, 0>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
    }
    merge {
      cylinder {
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, 0, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <-LG_WALL_WIDTH-0.045, 0, LG_BRICK_WIDTH/2>,
        <-LG_WALL_WIDTH-0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.045, -0.045, LG_BRICK_WIDTH/2>,
        <-LG_WALL_WIDTH-0.045, 0.045, -LG_BRICK_WIDTH/2>
      }
      cylinder {
        <LG_WALL_WIDTH+0.045, 0, LG_BRICK_WIDTH/2>,
        <LG_WALL_WIDTH+0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <LG_WALL_WIDTH+0.045, -0.045, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_WALL_WIDTH-0.045, 0.045, -LG_BRICK_WIDTH/2>
      }
    }
  }
  // SIDE CONNECTOR
  #declare ROT = 0;
  #while (ROT < 2)
  merge {
    intersection { // INNER AXLE TEETH
      merge {
        #declare AXLE = 0;
        #while (AXLE < 4)
        merge {
          torus {
            0.08-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
          }
          torus {
            0.08-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            0.08-LG_CORNER_SPACE
          }
          cylinder {
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
            LG_CORNER_SPACE
          }
          cylinder {
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
            LG_CORNER_SPACE
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          box {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          box {
            <-0.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
            <0.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          cylinder {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
            0.08
          }
          box {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          box {
            <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
            <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
          }
          rotate <90*AXLE, 0, 0>
        }
        #declare AXLE = AXLE + 1;
        #end
      }
      cylinder {
        <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
        <0.5*LG_BRICK_WIDTH+LG_E, 0, 0>
        LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
      translate <0, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>
    }
    difference {
      merge {
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          0.3
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        torus {
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0>
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE>,
          <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE>
        }
        box {
          <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BEAM_WIDTH/2>
        }
        box {
          <-LG_BRICK_WIDTH/2+LG_E, 0, -0.25*LG_BEAM_WIDTH/2>,
          <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0.5*LG_BEAM_WIDTH/2>
        }
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0>,
        <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        0.045
      }
      cylinder {
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        0.045
      }
      box {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.045, LG_BRICK_WIDTH-0.045, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.045, LG_BRICK_WIDTH+0.045, -LG_BRICK_WIDTH/2>
      }
    }
    rotate <180*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
