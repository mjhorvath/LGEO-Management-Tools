/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_62462: Technic Pin Joiner Round with Slot                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_62462)
#else
#include "lg_macro.inc"
#declare LENGTH = 2;
#declare LG_ANGLE = 11.25;
#declare lg_62462 = 
union {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    union {
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, 0.08+LG_CORNER_SPACE, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, 0.08, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      difference {
        cylinder {
          <0, 0.08+LG_CORNER_SPACE, 0>,
          <0, -0.08-LG_CORNER_SPACE, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <0, LENGTH/4*LG_BRICK_WIDTH, 0>,
          <0, LENGTH/4*-LG_BRICK_WIDTH, 0>,
          LG_TECH_HOLE_RADIUS
        }
        box {
          <-LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <LG_TECH_HOLE_RADIUS, -0.1, LG_BEAM_WIDTH/2+LG_E>
        }
        box {
          <LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <0, -0.1, LG_BEAM_WIDTH/2+LG_E>
          rotate <0, -LG_ANGLE, 0>
          translate <-LG_TECH_HOLE_RADIUS, 0, 0>
        }
        box {
          <-LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <0, -0.1, LG_BEAM_WIDTH/2+LG_E>
          rotate <0, LG_ANGLE, 0>
          translate <LG_TECH_HOLE_RADIUS, 0, 0>
        }
      }
      cylinder {
        <0, -0.08-LG_CORNER_SPACE, 0>,
        <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, -0.08, 0>,
        <0, LENGTH/2*-LG_BRICK_WIDTH, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    object {
      lg_tech_hole_group (2, 1)
      rotate <0, 0, 90>
    }
    cylinder {
      <0, 0.08+LG_CORNER_SPACE, 0>,
      <0, -0.08-LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
}

#declare lg_62462_clear = 
merge {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    merge {
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, 0.08+LG_CORNER_SPACE, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, 0.08, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      difference {
        cylinder {
          <0, 0.08+LG_CORNER_SPACE, 0>,
          <0, -0.08-LG_CORNER_SPACE, 0>,
          LG_BEAM_WIDTH/2
        }
        cylinder {
          <0, LENGTH/4*LG_BRICK_WIDTH, 0>,
          <0, LENGTH/4*-LG_BRICK_WIDTH, 0>,
          LG_TECH_HOLE_RADIUS
        }
        box {
          <-LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <LG_TECH_HOLE_RADIUS, -0.1, LG_BEAM_WIDTH/2+LG_E>
        }
        box {
          <LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <0, -0.1, LG_BEAM_WIDTH/2+LG_E>
          rotate <0, -LG_ANGLE, 0>
          translate <-LG_TECH_HOLE_RADIUS, 0, 0>
        }
        box {
          <-LG_TECH_HOLE_RADIUS, 0.1, 0>,
          <0, -0.1, LG_BEAM_WIDTH/2+LG_E>
          rotate <0, LG_ANGLE, 0>
          translate <LG_TECH_HOLE_RADIUS, 0, 0>
        }
      }
      cylinder {
        <0, -0.08-LG_CORNER_SPACE, 0>,
        <0, LENGTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, -0.08, 0>,
        <0, LENGTH/2*-LG_BRICK_WIDTH, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    object {
      lg_tech_hole_group (2, 1)
      rotate <0, 0, 90>
    }
    cylinder {
      <0, 0.08+LG_CORNER_SPACE, 0>,
      <0, -0.08-LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
}

#end
