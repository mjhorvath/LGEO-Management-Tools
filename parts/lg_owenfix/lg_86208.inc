/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_86208: Minifig Torch without Grooves                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_86208)
#else
#include "lg_macro.inc"
#declare lg_86208 =
union {
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate x*90
    translate <0, 0, -0.80+LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate z*90
    translate <-1.04+LG_KNOB_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.32+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.64-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.80-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.80-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <0, 0, -0.80>,
    <0, 0, -LG_E>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.80+LG_KNOB_CORNER_SPACE>,
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <-1.04, 0, 0>,
    <0.32, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <-1.04+LG_KNOB_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    union {
      cylinder {
        <0.32-LG_INNER_CORNER_SPACE, 0, 0>,
        <0.32+LG_E, 0, 0>,
        LG_KNOB_INNER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0.32, 0, 0>,
        <0.64, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0.32+LG_CORNER_SPACE, 0, 0>,
        <0.64-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0.64-LG_E, 0, 0>,
        <0.64+LG_INNER_CORNER_SPACE, 0, 0>,
        LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0.64, 0, 0>,
        <0.80-LG_CORNER_SPACE, 0, 0>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0.64+LG_E, 0, 0>,
        <0.80, 0, 0>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate z*90
      translate <0.32-LG_INNER_CORNER_SPACE, 0, 0>
    }
    torus {
      LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate z*90
      translate <0.64+LG_INNER_CORNER_SPACE, 0, 0>
    }
    cylinder {
      <0.44, 0, 0>,
      <0.80, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0.80-LG_CORNER_SPACE, 0, 0>,
      <0.80+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  lg_tech_axlehole_union ( 0.44-LG_CORNER_SPACE, 0.64 )
}

#declare lg_86208_clear =
merge {
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate x*90
    translate <0, 0, -0.80+LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate z*90
    translate <-1.04+LG_KNOB_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.32+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.64-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.80-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.80-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <0, 0, -0.80>,
    <0, 0, -LG_E>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.80+LG_KNOB_CORNER_SPACE>,
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <-1.04, 0, 0>,
    <0.32, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <-1.04+LG_KNOB_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    merge {
      cylinder {
        <0.32-LG_INNER_CORNER_SPACE, 0, 0>,
        <0.32+LG_E, 0, 0>,
        LG_KNOB_INNER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0.32, 0, 0>,
        <0.64, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0.32+LG_CORNER_SPACE, 0, 0>,
        <0.64-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0.64-LG_E, 0, 0>,
        <0.64+LG_INNER_CORNER_SPACE, 0, 0>,
        LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE
      }
      cylinder {
        <0.64, 0, 0>,
        <0.80-LG_CORNER_SPACE, 0, 0>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0.64+LG_E, 0, 0>,
        <0.80, 0, 0>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
    }
    torus {
      LG_KNOB_INNER_RADIUS+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate z*90
      translate <0.32-LG_INNER_CORNER_SPACE, 0, 0>
    }
    torus {
      LG_CYLINDER_RADIUS+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate z*90
      translate <0.64+LG_INNER_CORNER_SPACE, 0, 0>
    }
    cylinder {
      <0.44, 0, 0>,
      <0.80, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0.80-LG_CORNER_SPACE, 0, 0>,
      <0.80+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  lg_tech_axlehole_merge ( 0.44-LG_CORNER_SPACE, 0.64 )
}

#end
