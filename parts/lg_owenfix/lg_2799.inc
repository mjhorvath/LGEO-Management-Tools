/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2799: ~Technic Pneumatic Cylinder 2 x 2 Piston with Large Knob Handle    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2799)
#else
#local LG_RADIUS_CYLINDER = 0.76;
#local LG_RADIUS_SLOT = 0.08;
#local LG_HEIGHT_PLUNGER = -3.44;
#declare lg_2799 =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>
  }
  intersection {
    union {
      torus {
        LG_RADIUS_CYLINDER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_RADIUS_CYLINDER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      }
      difference {
        union {
          cylinder {
            <0, 0, 0>,
            <0, 0, LG_BRICK_HEIGHT>,
            LG_RADIUS_CYLINDER-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, LG_CORNER_SPACE>,
            <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
            LG_RADIUS_CYLINDER
          }
        }
        cylinder {
          <0, LG_RADIUS_CYLINDER+LG_E, LG_BRICK_HEIGHT/2>,
          <0, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        cylinder {
          <0, LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
          <0, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <0, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>,
          <0, -LG_RADIUS_CYLINDER-LG_E, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        difference {
          union {
            cylinder {
              <-0.40, 0.32, 0.16>,
              <-0.40, 0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.40, 0.32+LG_RADIUS_SLOT, 0.16>,
              <0.40, 0.32-LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.40, 0.32, 0.16>,
              <0.40, 0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            cylinder {
              <-0.52, 0, 0.16>,
              <-0.52, 0, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.52, LG_RADIUS_SLOT, 0.16>,
              <0.52, -LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.52, 0, 0.16>,
              <0.52, 0, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            cylinder {
              <-0.40, -0.32, 0.16>,
              <-0.40, -0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.40, -0.32+LG_RADIUS_SLOT, 0.16>,
              <0.40, -0.32-LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.40, -0.32, 0.16>,
              <0.40, -0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
          }
          cylinder {
            <0, LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
            <0, LG_RADIUS_SLOT-LG_E, LG_BRICK_HEIGHT/2>,
            0.32
          }
          box {
            <-0.32, LG_RADIUS_CYLINDER, 0>,
            <0.32, LG_RADIUS_SLOT-LG_E, LG_BRICK_HEIGHT/2>
          }
          cylinder {
            <0, -LG_RADIUS_SLOT+LG_E, LG_BRICK_HEIGHT/2>,
            <0, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
            0.32
          }
          box {
            <0.32, -LG_RADIUS_SLOT+LG_E, 0>,
            <-0.32, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>
          }
        }
      }
    }
    union {
      box {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, -LG_E>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT+LG_E>
      }
      cylinder {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
    }
  }
  // BOTTOM STOPPER & AXLE
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_PLUNGER+LG_CORNER_SPACE>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_PLUNGER+0.08-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, LG_HEIGHT_PLUNGER>,
    <0, 0, LG_HEIGHT_PLUNGER+0.08>,
    0.6-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_HEIGHT_PLUNGER+LG_CORNER_SPACE>,
    <0, 0, LG_HEIGHT_PLUNGER+0.08-LG_CORNER_SPACE>,
    0.6
  }
  difference {
    cylinder {
      <0, 0, LG_HEIGHT_PLUNGER+0.08>,
      <0, 0, 0>,
      0.32
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_HEIGHT_PLUNGER+0.08-LG_E>,
      <0.32+LG_E, 0.32+LG_E, LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  translate <0, 0, -0.48>
}

#declare lg_2799_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>
  }
  intersection {
    merge {
      torus {
        LG_RADIUS_CYLINDER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_RADIUS_CYLINDER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      }
      difference {
        merge {
          cylinder {
            <0, 0, 0>,
            <0, 0, LG_BRICK_HEIGHT>,
            LG_RADIUS_CYLINDER-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, LG_CORNER_SPACE>,
            <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
            LG_RADIUS_CYLINDER
          }
        }
        cylinder {
          <0, LG_RADIUS_CYLINDER+LG_E, LG_BRICK_HEIGHT/2>,
          <0, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        cylinder {
          <0, LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
          <0, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <0, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT/2>,
          <0, -LG_RADIUS_CYLINDER-LG_E, LG_BRICK_HEIGHT/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        difference {
          merge {
            cylinder {
              <-0.40, 0.32, 0.16>,
              <-0.40, 0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.40, 0.32+LG_RADIUS_SLOT, 0.16>,
              <0.40, 0.32-LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.40, 0.32, 0.16>,
              <0.40, 0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            cylinder {
              <-0.52, 0, 0.16>,
              <-0.52, 0, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.52, LG_RADIUS_SLOT, 0.16>,
              <0.52, -LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.52, 0, 0.16>,
              <0.52, 0, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            cylinder {
              <-0.40, -0.32, 0.16>,
              <-0.40, -0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
            box {
              <-0.40, -0.32+LG_RADIUS_SLOT, 0.16>,
              <0.40, -0.32-LG_RADIUS_SLOT, LG_BRICK_HEIGHT+LG_E>
            }
            cylinder {
              <0.40, -0.32, 0.16>,
              <0.40, -0.32, LG_BRICK_HEIGHT+LG_E>,
              LG_RADIUS_SLOT
            }
          }
          cylinder {
            <0, LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
            <0, LG_RADIUS_SLOT-LG_E, LG_BRICK_HEIGHT/2>,
            0.32
          }
          box {
            <-0.32, LG_RADIUS_CYLINDER, 0>,
            <0.32, LG_RADIUS_SLOT-LG_E, LG_BRICK_HEIGHT/2>
          }
          cylinder {
            <0, -LG_RADIUS_SLOT+LG_E, LG_BRICK_HEIGHT/2>,
            <0, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>,
            0.32
          }
          box {
            <0.32, -LG_RADIUS_SLOT+LG_E, 0>,
            <-0.32, -LG_RADIUS_CYLINDER, LG_BRICK_HEIGHT/2>
          }
        }
      }
    }
    merge {
      box {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, -LG_E>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT+LG_E>
      }
      cylinder {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, LG_RADIUS_CYLINDER-0.08-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH, -LG_RADIUS_CYLINDER+0.08+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
    }
  }
  // BOTTOM STOPPER & AXLE
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_PLUNGER+LG_CORNER_SPACE>
  }
  torus {
    0.6-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_PLUNGER+0.08-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, LG_HEIGHT_PLUNGER>,
    <0, 0, LG_HEIGHT_PLUNGER+0.08>,
    0.6-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_HEIGHT_PLUNGER+LG_CORNER_SPACE>,
    <0, 0, LG_HEIGHT_PLUNGER+0.08-LG_CORNER_SPACE>,
    0.6
  }
  difference {
    cylinder {
      <0, 0, LG_HEIGHT_PLUNGER+0.08>,
      <0, 0, 0>,
      0.32
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_HEIGHT_PLUNGER+0.08-LG_E>,
      <0.32+LG_E, 0.32+LG_E, LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  translate <0, 0, -0.48>
}

#end
