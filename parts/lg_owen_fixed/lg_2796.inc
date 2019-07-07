/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2796: ~Technic Pneumatic Cylinder 2 x 2 Piston Rod 4L Cylindrical        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-16 Owen Burgoyne                                                    */
/* 2014-01-16 Owen Burgoyne updated with "lg_tech_hole_group" macro            */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2796)
#else
#include "lg_macro.inc"
#local LENGTH = 4;
#declare lg_2796 =
union {
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2.25-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.6*LG_BRICK_WIDTH+LG_CORNER_SPACE>
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
        <0, 0, -1.1*LG_BRICK_WIDTH>,
        <0, 0, -0.6*LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2.25-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2.25
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
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -0.6*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
  }
  union {
    torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, -1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -1.1*LG_BRICK_WIDTH>,
      <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH+LG_CORNER_SPACE>
    }
    texture { lg_chrome }
  }
}

#declare lg_2796_clear =
merge {
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2.25-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.6*LG_BRICK_WIDTH+LG_CORNER_SPACE>
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
        <0, 0, -1.1*LG_BRICK_WIDTH>,
        <0, 0, -0.6*LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_E>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_E>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2.25-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.6*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2.25
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
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -0.6*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
  }
  merge {
    torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, -1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -1.1*LG_BRICK_WIDTH>,
      <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -(LENGTH+0.15)*LG_BRICK_WIDTH+LG_CORNER_SPACE>
    }
    texture { lg_chrome }
  }
}

#end
