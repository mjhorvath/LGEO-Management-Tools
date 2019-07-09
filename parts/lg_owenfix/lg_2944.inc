/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2944: Technic Pneumatic Cylinder 1 x 1 Piston Rod                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2944)
#else
#declare LENGTH = 2;
#declare lg_2944 = 
union {
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
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    union {
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
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH, 0>,
      <0, -0.5*LG_BRICK_WIDTH, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH, 0>,
      <0, 0.5*LG_BRICK_WIDTH-0.08, 0>,
      0.3
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH+LG_E, 0>,
      <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <0, -0.5*LG_BRICK_WIDTH, 0>,
      <0, -0.5*LG_BRICK_WIDTH+0.08, 0>,
      0.3
    }
    cylinder {
      <0, -0.5*LG_BRICK_WIDTH-LG_E, 0>,
      <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.5*LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH+LG_E, 0>,
      <0, -0.5*LG_BRICK_WIDTH-LG_E, 0>,
      LG_BRICK_WIDTH/2-LG_E
    }
  }
  cylinder {
    <0, 0, -0.5*LG_BRICK_WIDTH+LG_E>,
    <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.5*LG_BRICK_WIDTH+LG_E>,
    <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
}

#declare lg_2944_clear = 
merge {
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
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  difference {
    merge {
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
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH, 0>,
      <0, -0.5*LG_BRICK_WIDTH, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH, 0>,
      <0, 0.5*LG_BRICK_WIDTH-0.08, 0>,
      0.3
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH+LG_E, 0>,
      <0, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <0, -0.5*LG_BRICK_WIDTH, 0>,
      <0, -0.5*LG_BRICK_WIDTH+0.08, 0>,
      0.3
    }
    cylinder {
      <0, -0.5*LG_BRICK_WIDTH-LG_E, 0>,
      <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.5*LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0.5*LG_BRICK_WIDTH+LG_E, 0>,
      <0, -0.5*LG_BRICK_WIDTH-LG_E, 0>,
      LG_BRICK_WIDTH/2-LG_E
    }
  }
  cylinder {
    <0, 0, -0.5*LG_BRICK_WIDTH+LG_E>,
    <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.5*LG_BRICK_WIDTH+LG_E>,
    <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -(LENGTH+0.35)*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
}

#end
