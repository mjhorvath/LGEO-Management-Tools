/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_61184: Technic Pin 1/2 with Bar 2L                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-06 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_61184)
#else
#declare lg_61184 =
union {
  difference {
    union {
      torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
      }
      torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_CORNER_SPACE, 0>
      }
      torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <1/2, 1, 1/2>
        translate <0, LG_BRICK_WIDTH-0.04, 0>
      }
      cylinder {
        <0, LG_WALL_WIDTH/2, 0>,
        <0, 0, 0>,
        0.3-LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, LG_CORNER_SPACE, 0>,
        0.3
      }
      cylinder {
        <0, LG_BRICK_WIDTH, 0>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 3*LG_BRICK_WIDTH, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
      }
    }
    cylinder {
      <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
      <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
      0.04
    }
    box {
      <LG_CYLINDER_RADIUS, 0.56, 0.04>,
      <-LG_CYLINDER_RADIUS, 1.1, -0.04>
    }
    cylinder {
      <LG_KNOB_RADIUS+LG_E, 1.1, 0>,
      <-LG_KNOB_RADIUS-LG_E, 1.1, 0>,
      0.04
    }
  }
  object {
    lg_tech_knob_logo
    rotate <90, 90, 0>
  }
}

#declare lg_61184_clear =
merge {
  difference {
    merge {
      torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
      }
      torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_CORNER_SPACE, 0>
      }
      torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <1/2, 1, 1/2>
        translate <0, LG_BRICK_WIDTH-0.04, 0>
      }
      cylinder {
        <0, LG_WALL_WIDTH/2, 0>,
        <0, 0, 0>,
        0.3-LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, LG_CORNER_SPACE, 0>,
        0.3
      }
      cylinder {
        <0, LG_BRICK_WIDTH, 0>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 3*LG_BRICK_WIDTH, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        LG_KNOB_INNER_RADIUS
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
      }
    }
    cylinder {
      <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
      <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
      0.04
    }
    box {
      <LG_CYLINDER_RADIUS, 0.56, 0.04>,
      <-LG_CYLINDER_RADIUS, 1.1, -0.04>
    }
    cylinder {
      <LG_KNOB_RADIUS+LG_E, 1.1, 0>,
      <-LG_KNOB_RADIUS-LG_E, 1.1, 0>,
      0.04
    }
  }
  object {
    lg_tech_knob_logo_clear
    rotate <90, 90, 0>
  }
}

#end
