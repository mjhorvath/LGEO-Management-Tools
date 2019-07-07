/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_64451: Technic Link 4 × 6 Bent 53.13°                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_64451)
#else
#include "lg_macro.inc"
#local LG_ANGLE = 53.13;
#declare lg_64451 =
union {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
    union {
      difference {
        union {
          #local MIR = 0;
          #while (MIR < 2)
          union {
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            box {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
            }
            box {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>
            }
            #if (MIR = 1) scale <1, -1, 1> #end
          }
          #local MIR = MIR + 1;
          #end
        }
        box {
          <-LG_BEAM_WIDTH, 0, -LG_BRICK_WIDTH/2>,
          <0, -LG_BEAM_WIDTH, LG_BRICK_WIDTH/2>
          rotate z*LG_ANGLE/2
          translate <5*-LG_BRICK_WIDTH, 0, 0>
        }
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
        <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      box {
        <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_E, -0.1>,
        <0, -LG_BEAM_WIDTH/2+LG_E, 0.1>
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate y*90
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate y*90
      translate <5*-LG_BRICK_WIDTH, 0, 0>
    }
  }
  // ANGLED SECTION
  union {
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate x*90
      translate <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate x*90
      translate <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    difference {
      union {
        difference {
          union {
            #local MIR = 0;
            #while (MIR < 2)
            union {
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              box {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
              }
              box {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>
              }
              #if (MIR = 1) scale <1, -1, 1> #end
            }
            #local MIR = MIR + 1;
            #end
          }
          box {
            <0, 0, -LG_BRICK_WIDTH/2>,
            <LG_BEAM_WIDTH, -LG_BEAM_WIDTH, LG_BRICK_WIDTH/2>
            rotate z*-LG_ANGLE/2
          }
        }
        cylinder {
          <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
          <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_BEAM_WIDTH/2
        }
        box {
          <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_E, -0.1>,
          <0, -LG_BEAM_WIDTH/2+LG_E, 0.1>
        }
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
        <0, 0, LG_BRICK_WIDTH/2+LG_E>,
        LG_BEAM_WIDTH/2-LG_E
      }
      object {
        lg_tech_hole_group (1, 1)
        rotate y*90
        translate <3*-LG_BRICK_WIDTH, 0, 0>
      }
    }
    rotate z*LG_ANGLE
    translate <5*-LG_BRICK_WIDTH, 0, 0>
  }
}

#declare lg_64451_clear =
merge {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
    merge {
      difference {
        merge {
          #local MIR = 0;
          #while (MIR < 2)
          merge {
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            cylinder {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            box {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
              <0, LG_BEAM_WIDTH/2-0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
            }
            box {
              <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>,
              <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>
            }
            #if (MIR = 1) scale <1, -1, 1> #end
          }
          #local MIR = MIR + 1;
          #end
        }
        box {
          <-LG_BEAM_WIDTH, 0, -LG_BRICK_WIDTH/2>,
          <0, -LG_BEAM_WIDTH, LG_BRICK_WIDTH/2>
          rotate z*LG_ANGLE/2
          translate <5*-LG_BRICK_WIDTH, 0, 0>
        }
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
        <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <5*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        <5*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
      box {
        <5*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_E, -0.1>,
        <0, -LG_BEAM_WIDTH/2+LG_E, 0.1>
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate y*90
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate y*90
      translate <5*-LG_BRICK_WIDTH, 0, 0>
    }
  }
  // ANGLED SECTION
  merge {
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate x*90
      translate <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate x*90
      translate <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    difference {
      merge {
        difference {
          merge {
            #local MIR = 0;
            #while (MIR < 2)
            merge {
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              cylinder {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
                LG_CORNER_SPACE
              }
              box {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
                <0, LG_BEAM_WIDTH/2-0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
              }
              box {
                <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>,
                <0, LG_BEAM_WIDTH/2-0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>
              }
              #if (MIR = 1) scale <1, -1, 1> #end
            }
            #local MIR = MIR + 1;
            #end
          }
          box {
            <0, 0, -LG_BRICK_WIDTH/2>,
            <LG_BEAM_WIDTH, -LG_BEAM_WIDTH, LG_BRICK_WIDTH/2>
            rotate z*-LG_ANGLE/2
          }
        }
        cylinder {
          <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
          <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <3*-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <3*-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_BEAM_WIDTH/2
        }
        box {
          <3*-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_E, -0.1>,
          <0, -LG_BEAM_WIDTH/2+LG_E, 0.1>
        }
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
        <0, 0, LG_BRICK_WIDTH/2+LG_E>,
        LG_BEAM_WIDTH/2-LG_E
      }
      object {
        lg_tech_hole_group (1, 1)
        rotate y*90
        translate <3*-LG_BRICK_WIDTH, 0, 0>
      }
    }
    rotate z*LG_ANGLE
    translate <5*-LG_BRICK_WIDTH, 0, 0>
  }
}

#end
