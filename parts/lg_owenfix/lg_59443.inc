/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_59443: Technic Axle Joiner Inline Smooth                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-11-23 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_59443)
#else
#include "lg_macro.inc"
#local LG_RADIUS_INDENT = 0.27;
#declare lg_59443 =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  intersection {
    union {
      #local ROT = 0;
      #while (ROT < 4)
      union {
        torus {
          LG_RADIUS_INDENT+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate z*90
          translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>
        }
        torus {
          LG_RADIUS_INDENT+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate z*90
          translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>
        }
        rotate x*90*ROT
      }
      #local ROT = ROT + 1;
      #end
      difference {
        cylinder {
          <-LG_BRICK_WIDTH, 0, 0>,
          <LG_BRICK_WIDTH, 0, 0>,
          LG_BEAM_WIDTH/2+LG_E
        }
        #local ROT = 0;
        #while (ROT < 4)
        union {
          cylinder {
            <-LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT+LG_CORNER_SPACE
          }
          cylinder {
            <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT
          }
          cylinder {
            <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <LG_BRICK_WIDTH+LG_E, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT+LG_CORNER_SPACE
          }
          rotate x*90*ROT
        }
        #local ROT = ROT + 1;
        #end
        cylinder {
          <-LG_BRICK_WIDTH-LG_E, 0, 0>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH, 0, 0>,
          <LG_BRICK_WIDTH, 0, 0>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
          <LG_BRICK_WIDTH+LG_E, 0, 0>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
      }
    }
    union {
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
  }
  difference {
    cylinder {
      <-0.008, 0, 0>,
      <0.008, 0, 0>,
      LG_KNOB_RADIUS+LG_E
    }
    cylinder {
      <-0.008-LG_E, 0, 0>,
      <0.008+LG_E, 0, 0>,
      0.056
    }
  }
  object {
    lg_tech_axlehole_union (-LG_BRICK_WIDTH, LG_BRICK_WIDTH)
  }
}

#declare lg_59443_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  intersection {
    merge {
      #local ROT = 0;
      #while (ROT < 4)
      merge {
        torus {
          LG_RADIUS_INDENT+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate z*90
          translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>
        }
        torus {
          LG_RADIUS_INDENT+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate z*90
          translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>
        }
        rotate x*90*ROT
      }
      #local ROT = ROT + 1;
      #end
      difference {
        cylinder {
          <-LG_BRICK_WIDTH, 0, 0>,
          <LG_BRICK_WIDTH, 0, 0>,
          LG_BEAM_WIDTH/2+LG_E
        }
        #local ROT = 0;
        #while (ROT < 4)
        merge {
          cylinder {
            <-LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT+LG_CORNER_SPACE
          }
          cylinder {
            <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT
          }
          cylinder {
            <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            <LG_BRICK_WIDTH+LG_E, 0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH>,
            LG_RADIUS_INDENT+LG_CORNER_SPACE
          }
          rotate x*90*ROT
        }
        #local ROT = ROT + 1;
        #end
        cylinder {
          <-LG_BRICK_WIDTH-LG_E, 0, 0>,
          <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH, 0, 0>,
          <LG_BRICK_WIDTH, 0, 0>,
          LG_KNOB_RADIUS
        }
        cylinder {
          <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
          <LG_BRICK_WIDTH+LG_E, 0, 0>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
      }
    }
    merge {
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH-LG_E, 0, 0>,
        <LG_BRICK_WIDTH+LG_E, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
  }
  difference {
    cylinder {
      <-0.008, 0, 0>,
      <0.008, 0, 0>,
      LG_KNOB_RADIUS+LG_E
    }
    cylinder {
      <-0.008-LG_E, 0, 0>,
      <0.008+LG_E, 0, 0>,
      0.056
    }
  }
  object {
    lg_tech_axlehole_merge (-LG_BRICK_WIDTH, LG_BRICK_WIDTH)
  }
}

#end
