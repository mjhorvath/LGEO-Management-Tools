/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30219: Bar 16L with Hollow Studs, Towball and Slit                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30219)
#else
#declare lg_30219 =
union {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <4.16-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_KNOB_HEIGHT>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      sphere {
        <-8.32, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <-8.32, 0, 0>,
        <3.92, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      sphere {
        <0, 0, 0>,
        LG_CYLINDER_RADIUS
        scale <0.85, 1, >
        translate <3.92, 0, 0>
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
    }
    cylinder {
      <0, 0,-LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
    }
    box {
      <-8.48-LG_E, 0.06, -LG_KNOB_INNER_RADIUS-LG_E>,
      <-8.08, -0.06, LG_KNOB_INNER_RADIUS+LG_E>
    }
    cylinder {
      <-8.08, 0, -LG_KNOB_INNER_RADIUS-LG_E>,
      <-8.08, 0, LG_KNOB_INNER_RADIUS+LG_E>,
      0.06
    }
    box {
      <4.16, LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS>,
      <4.24, -LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS>
    }
    cylinder {
      <4.16-LG_CORNER_SPACE, 0, 0>,
      <4.16+LG_E, 0, 0>,
      0.08+LG_CORNER_SPACE
    }
    cylinder {
      <3.92, 0, 0>,
      <4.16, 0, 0>,
      0.08
    }
  }
}

#declare lg_30219_clear =
merge {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <4.16-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2>,
        <0, 0, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>,
        <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, -LG_KNOB_HEIGHT>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      sphere {
        <-8.32, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <-8.32, 0, 0>,
        <3.92, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      sphere {
        <0, 0, 0>,
        LG_CYLINDER_RADIUS
        scale <0.85, 1, >
        translate <3.92, 0, 0>
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_KNOB_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
    }
    cylinder {
      <0, 0,-LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_KNOB_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
    }
    box {
      <-8.48-LG_E, 0.06, -LG_KNOB_INNER_RADIUS-LG_E>,
      <-8.08, -0.06, LG_KNOB_INNER_RADIUS+LG_E>
    }
    cylinder {
      <-8.08, 0, -LG_KNOB_INNER_RADIUS-LG_E>,
      <-8.08, 0, LG_KNOB_INNER_RADIUS+LG_E>,
      0.06
    }
    box {
      <4.16, LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS>,
      <4.24, -LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS>
    }
    cylinder {
      <4.16-LG_CORNER_SPACE, 0, 0>,
      <4.16+LG_E, 0, 0>,
      0.08+LG_CORNER_SPACE
    }
    cylinder {
      <3.92, 0, 0>,
      <4.16, 0, 0>,
      0.08
    }
  }
}

#end
