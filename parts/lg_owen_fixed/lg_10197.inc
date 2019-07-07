/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_10197: Technic Axle and Pin Connector Hub with 2 Axles at 90 Degrees     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-13 Owen Burgoyne                                                    */
/* 2013-01-29 Owen Burgoyne updated to use LG_BEAM_WIDTH measurement and       */
/*            lg_tech_tube primtive                                            */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_10197)
#else
#declare lg_10197 = 
union {
  object {
    lg_tech_tube
    rotate <0, 0, 90>
  }
  #declare AXLE = 0;
  #while (AXLE < 2)
  union {
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    difference {
      union {
        cylinder {
          <0, 0, 0>,
          <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <0, 0, 0>,
          <0, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
        <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
        LG_BEAM_WIDTH/2-LG_E
      }
    }
    difference {
      union {
        cylinder {
          <0, 0.5*LG_BRICK_WIDTH-LG_E, 0>,
          <0, 1.5*LG_BRICK_WIDTH-0.08, 0>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <0, 0.5*LG_BRICK_WIDTH-LG_E, 0>,
          <0, 1.5*LG_BRICK_WIDTH, 0>,
          LG_KNOB_RADIUS-0.08
        }
        torus {
          LG_KNOB_RADIUS-0.08
          0.08
          translate <0, 1.5*LG_BRICK_WIDTH-0.08, 0>
        }
      }
      #declare ROT = 0;
      #while (ROT < 4)
      box {
        <LG_CROSSAXLE_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
        <LG_KNOB_RADIUS, 0, LG_KNOB_RADIUS>
        rotate <0, 90*ROT, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
    rotate <90*AXLE, 0, 0>
  }
  #declare AXLE = AXLE + 1;
  #end
  rotate <0, 0, -90>
}

#declare lg_10197_clear = 
merge {
  object {
    lg_tech_tube_clear
    rotate <0, 0, 90>
  }
  #declare AXLE = 0;
  #while (AXLE < 2)
  merge {
    torus {
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    difference {
      merge {
        cylinder {
          <0, 0, 0>,
          <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <0, 0, 0>,
          <0, 0.5*LG_BRICK_WIDTH, 0>,
          LG_BEAM_WIDTH/2-LG_CORNER_SPACE
        }
      }
      cylinder {
        <0.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
        <-0.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
        LG_BEAM_WIDTH/2-LG_E
      }
    }
    difference {
      merge {
        cylinder {
          <0, 0.5*LG_BRICK_WIDTH-LG_E, 0>,
          <0, 1.5*LG_BRICK_WIDTH-0.08, 0>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <0, 0.5*LG_BRICK_WIDTH-LG_E, 0>,
          <0, 1.5*LG_BRICK_WIDTH, 0>,
          LG_KNOB_RADIUS-0.08
        }
        torus {
          LG_KNOB_RADIUS-0.08
          0.08
          translate <0, 1.5*LG_BRICK_WIDTH-0.08, 0>
        }
      }
      #declare ROT = 0;
      #while (ROT < 4)
      box {
        <LG_CROSSAXLE_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
        <LG_KNOB_RADIUS, 0, LG_KNOB_RADIUS>
        rotate <0, 90*ROT, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
    rotate <90*AXLE, 0, 0>
  }
  #declare AXLE = AXLE + 1;
  #end
  rotate <0, 0, -90>
}

#end
