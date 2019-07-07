/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32013: Technic Angle Connector #1                                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 1998-10-14 Lutz Uhlmann                                                     */
/* 2014-11-23 Owen Burgoyne fixed axlehole teeth showing in Technic hole       */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32013)
#else
#include "lg_macro.inc"
#declare lg_32013 =
union {
  union {
    difference {
      intersection {
        union {
          difference {
            cylinder {
              <1.5*LG_BRICK_WIDTH, 0, 0>,
              <0, 0, 0>,
              LG_BRICK_WIDTH/2+LG_E
            }
            union {
              #declare ROT = 0;
              #while (ROT < 4)
              union {
                cylinder {
                  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  LG_KNOB_RADIUS
                }
                cylinder {
                  <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  LG_KNOB_RADIUS+LG_CORNER_SPACE
                }
                rotate <90*ROT, 0, 0>
              }
              #declare ROT = ROT + 1;
              #end
            }
          }
          #declare ROT = 0;
          #while (ROT < 4)
          torus {
            LG_KNOB_RADIUS+LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
            rotate <90*ROT, 0, 0>
          }
          #declare ROT = ROT + 1;
          #end
        }
        union {
          difference {
            union {
              cylinder {
                <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
                <0, 0, 0>,
                LG_BRICK_WIDTH/2
              }
              cylinder {
                <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                <0, 0, 0>,
                LG_BRICK_WIDTH/2-LG_CORNER_SPACE
              }
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
              <LG_E, 0, 0>,
              LG_KNOB_RADIUS
            }
          }
          torus {
            LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
          }
        }
      }
      cylinder {
        <0, LG_BRICK_WIDTH/2, 0>,
        <0, -LG_BRICK_WIDTH/2, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
    }
    object {
      lg_tech_axlehole_reduced_union (0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)
    }
  }
  union {
    torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
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
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
      0.3+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    difference {
      union {
        cylinder {
          <LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2, 0, 0>,
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          LG_BRICK_WIDTH/2
        }
      }
      union {
        cylinder {
          <LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2, 0, 0>,
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
        cylinder {
          <-LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
          0.3
        }
        cylinder {
          <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          0.3+LG_CORNER_SPACE
        }
      }
    }
    rotate <0, 0, 90>
  }
}

#declare lg_32013_clear =
merge {
  merge {
    difference {
      intersection {
        merge {
          difference {
            cylinder {
              <1.5*LG_BRICK_WIDTH, 0, 0>,
              <0, 0, 0>,
              LG_BRICK_WIDTH/2+LG_E
            }
            merge {
              #declare ROT = 0;
              #while (ROT < 4)
              merge {
                cylinder {
                  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  LG_KNOB_RADIUS
                }
                cylinder {
                  <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
                  LG_KNOB_RADIUS+LG_CORNER_SPACE
                }
                rotate <90*ROT, 0, 0>
              }
              #declare ROT = ROT + 1;
              #end
            }
          }
          #declare ROT = 0;
          #while (ROT < 4)
          torus {
            LG_KNOB_RADIUS+LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
            rotate <90*ROT, 0, 0>
          }
          #declare ROT = ROT + 1;
          #end
        }
        merge {
          difference {
            merge {
              cylinder {
                <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
                <0, 0, 0>,
                LG_BRICK_WIDTH/2
              }
              cylinder {
                <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                <0, 0, 0>,
                LG_BRICK_WIDTH/2-LG_CORNER_SPACE
              }
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
              <LG_E, 0, 0>,
              LG_KNOB_RADIUS
            }
          }
          torus {
            LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
          }
        }
      }
      cylinder {
        <0, LG_BRICK_WIDTH/2, 0>,
        <0, -LG_BRICK_WIDTH/2, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
    }
    object {
      lg_tech_axlehole_reduced_merge (0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)
    }
  }
  merge {
    torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
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
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
    }
    torus {
      0.3+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    difference {
      merge {
        cylinder {
          <LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2, 0, 0>,
          LG_BRICK_WIDTH/2-LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          LG_BRICK_WIDTH/2
        }
      }
      merge {
        cylinder {
          <LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2, 0, 0>,
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
        cylinder {
          <-LG_BRICK_WIDTH/2, 0, 0>,
          <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
          0.3
        }
        cylinder {
          <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          0.3+LG_CORNER_SPACE
        }
      }
    }
    rotate <0, 0, 90>
  }
}

#end
