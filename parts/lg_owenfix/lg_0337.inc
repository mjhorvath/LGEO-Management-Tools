/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_337: ~Technic Pneumatic Cylinder 2 x 2 Piston Rod 4L                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-16 Owen Burgoyne                                                    */
/* 2014-01-16 Owen Burgoyne updated with "lg_tech_hole_group" macro            */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_337)
#else
#include "lg_macro.inc"
#local LG_HEIGHT_AXLE_BASE = -4.24;
#declare lg_337 =
union {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    union {
      cylinder {
        <0, 0, -LG_BRICK_HEIGHT/2>,
        <0, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0.5*LG_BRICK_WIDTH, 0>,
        <0, -0.5*LG_BRICK_WIDTH, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
        LG_BRICK_WIDTH/2
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate <0, 0, 90>
    }
  }
  difference {
    union {
      torus {
        LG_KNOB_RADIUS-0.08
        0.08
        rotate <90, 0, 0>
        translate <0, 0, LG_HEIGHT_AXLE_BASE+0.08>
      }
      cylinder {
        <0, 0, LG_HEIGHT_AXLE_BASE+0.08>,
        <0, 0, -LG_BRICK_HEIGHT/2+LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, LG_HEIGHT_AXLE_BASE>,
        <0, 0, -LG_BRICK_HEIGHT>,
        LG_KNOB_RADIUS-0.08
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_HEIGHT_AXLE_BASE-LG_E>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
}

#declare lg_337_clear =
merge {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    merge {
      cylinder {
        <0, 0, -LG_BRICK_HEIGHT/2>,
        <0, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <0, 0.5*LG_BRICK_WIDTH, 0>,
        <0, -0.5*LG_BRICK_WIDTH, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
        LG_BRICK_WIDTH/2
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate <0, 0, 90>
    }
  }
  difference {
    merge {
      torus {
        LG_KNOB_RADIUS-0.08
        0.08
        rotate <90, 0, 0>
        translate <0, 0, LG_HEIGHT_AXLE_BASE+0.08>
      }
      cylinder {
        <0, 0, LG_HEIGHT_AXLE_BASE+0.08>,
        <0, 0, -LG_BRICK_HEIGHT/2+LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, LG_HEIGHT_AXLE_BASE>,
        <0, 0, -LG_BRICK_HEIGHT>,
        LG_KNOB_RADIUS-0.08
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_HEIGHT_AXLE_BASE-LG_E>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
}

#end
