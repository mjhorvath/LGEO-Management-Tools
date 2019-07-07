/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_10288: Technic Angle Connector (3 x 120 degree)                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-13 Owen Burgoyne                                                    */
/* 2013-01-29 Owen Burgoyne updated to use LG_BEAM_WIDTH measurement and       */
/*            lg_tech_tube primtive                                            */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_10288)
#else
#declare lg_10288 = 
union {
  union {
    #declare ARM = 0;
    #while (ARM < 3)
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
                  LG_BEAM_WIDTH/2
                }
                cylinder {
                  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                  <0, 0, 0>,
                  LG_BEAM_WIDTH/2-LG_CORNER_SPACE
                }
              }
              cylinder {
                <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                <LG_E, 0, 0>,
                LG_KNOB_RADIUS
              }
            }
            torus {
              LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
              LG_CORNER_SPACE
              rotate <0, 0, 90>
              translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
            }
          }
        }
        cylinder {
          <0, LG_BRICK_WIDTH/2+LG_E, 0>,
          <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
      }
      intersection {
        cylinder {
          <0.4*LG_BRICK_WIDTH, 0, 0>,
          <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
          LG_KNOB_RADIUS+LG_E
        }
        union { // INNER AXLE HOLE TEETH
          #declare ROT = 0;
          #while (ROT < 4)
          union {
            torus {
              0.08-LG_CORNER_SPACE,
              LG_CORNER_SPACE
              rotate <0, 0, 90>
              translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              0.08-LG_CORNER_SPACE
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
              LG_CORNER_SPACE
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            box {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            box {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              0.08
            }
            box {
              <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            box {
              <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            rotate <90*ROT, 0, 0>
          }
          #declare ROT = ROT + 1;
          #end
        }
      }
      rotate <0, 120*ARM, 0>
    }
    #declare ARM = ARM + 1;
    #end
  }
  object {
    lg_tech_tube
  }
  rotate <90, 0, 180>
}

#declare lg_10288_clear = 
merge {
  merge {
    #declare ARM = 0;
    #while (ARM < 3)
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
                  LG_BEAM_WIDTH/2
                }
                cylinder {
                  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                  <0, 0, 0>,
                  LG_BEAM_WIDTH/2-LG_CORNER_SPACE
                }
              }
              cylinder {
                <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
                <LG_E, 0, 0>,
                LG_KNOB_RADIUS
              }
            }
            torus {
              LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
              LG_CORNER_SPACE
              rotate <0, 0, 90>
              translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
            }
          }
        }
        cylinder {
          <0, LG_BRICK_WIDTH/2+LG_E, 0>,
          <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
      }
      intersection {
        cylinder {
          <0.4*LG_BRICK_WIDTH, 0, 0>,
          <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
          LG_KNOB_RADIUS+LG_E
        }
        merge { // INNER AXLE HOLE TEETH
          #declare ROT = 0;
          #while (ROT < 4)
          merge {
            torus {
              0.08-LG_CORNER_SPACE,
              LG_CORNER_SPACE
              rotate <0, 0, 90>
              translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              0.08-LG_CORNER_SPACE
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
              LG_CORNER_SPACE
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              LG_CORNER_SPACE
            }
            box {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            box {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
              <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            cylinder {
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
              0.08
            }
            box {
              <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            box {
              <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
              <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
            }
            rotate <90*ROT, 0, 0>
          }
          #declare ROT = ROT + 1;
          #end
        }
      }
      rotate <0, 120*ARM, 0>
    }
    #declare ARM = ARM + 1;
    #end
  }
  object {
    lg_tech_tube_clear
  }
  rotate <90, 0, 180>
}

#end
