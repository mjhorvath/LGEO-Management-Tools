/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_41531: Technic Cylinder 4 x 4 x 2 with 3 Pin Holes and Center Bar        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_41531)
#else
#include "lg_macro.inc"
#declare LG_OUTER_RADIUS = 1.6;
#declare LG_EDGE_RADIUS = 1.536;
#declare LG_INNER_RADIUS = 1.44;
#declare lg_41531 = 
union {
  torus {
    LG_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_EDGE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.3+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_EDGE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_OUTER_RADIUS-0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_OUTER_RADIUS+0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  // OUTER CYLINDER
  difference {
    union {
      lg_connect_tori_union (
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>, LG_EDGE_RADIUS-LG_CORNER_SPACE,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>, LG_OUTER_RADIUS-LG_CORNER_SPACE
      )
      cylinder {
        <-0.3-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS
      }
      cylinder {
        <-0.3, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS-LG_CORNER_SPACE
      }
      difference {
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
          LG_OUTER_RADIUS
        }
        box {
          <-LG_BRICK_WIDTH/2-LG_E, LG_OUTER_RADIUS-0.08, -LG_OUTER_RADIUS>,
          <LG_BRICK_WIDTH/2+LG_E, LG_OUTER_RADIUS+LG_E, LG_OUTER_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH/2-LG_E, -LG_OUTER_RADIUS+0.08, -LG_OUTER_RADIUS>,
          <LG_BRICK_WIDTH/2+LG_E, -LG_OUTER_RADIUS-LG_E, LG_OUTER_RADIUS>
        }
      }
      cylinder {
        <0.3, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0.3+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS
      }
      lg_connect_tori_union (
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>, LG_OUTER_RADIUS-LG_CORNER_SPACE,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>, LG_EDGE_RADIUS-LG_CORNER_SPACE
      )
    }
    cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      LG_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_INNER_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, LG_OUTER_RADIUS-0.08, 0>,
      <0, -LG_OUTER_RADIUS+0.08, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, LG_OUTER_RADIUS, 0>,
      <0, LG_OUTER_RADIUS-0.08-LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, -LG_OUTER_RADIUS, 0>,
      <0, -LG_OUTER_RADIUS+0.08+LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  // CENTRAL TECHNIC HOLE
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
    }
  }
  // CENTRAL BAR
  intersection {
    difference {
      union {
        cylinder {
          <0, LG_OUTER_RADIUS, 0>,
          <0, -LG_OUTER_RADIUS, 0>,
          LG_BRICK_WIDTH/2
        }
        box {
          <0, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
        box {
          <0, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2>
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
      }
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <LG_BRICK_WIDTH, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      box {
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -0.24>,
        <0, LG_BRICK_WIDTH, 0.24>
      }
      cylinder {
        <0, -LG_BRICK_WIDTH, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        0.24
      }
      box {
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.08, -LG_PLATE_HEIGHT>,
        <0, -LG_BRICK_WIDTH-0.08, LG_PLATE_HEIGHT>
      }
      box {
        <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -LG_PLATE_HEIGHT>,
        <0, LG_BRICK_WIDTH+0.08, LG_PLATE_HEIGHT>
      }
      cylinder {
        <0, -LG_BRICK_WIDTH-0.08, 0>,
        <0, -LG_BRICK_WIDTH+0.08, 0>,
        LG_PLATE_HEIGHT
      }
      cylinder {
        <0, LG_BRICK_WIDTH-0.08, 0>,
        <0, LG_BRICK_WIDTH+0.08, 0>,
        LG_PLATE_HEIGHT
      }
      cylinder {
        <0, -LG_OUTER_RADIUS+0.08, 0>,
        <0, LG_OUTER_RADIUS-0.08, 0>,
        LG_KNOB_RADIUS
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, 0>,
      <LG_BRICK_WIDTH, 0, 0>,
      LG_INNER_RADIUS
    }
  }
}

#declare lg_41531_clear = 
merge {
  torus {
    LG_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_EDGE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.3+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_OUTER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_EDGE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_OUTER_RADIUS-0.08-LG_CORNER_SPACE, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_OUTER_RADIUS+0.08+LG_CORNER_SPACE, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  // OUTER CYLINDER
  difference {
    merge {
      lg_connect_tori_merge (
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>, LG_EDGE_RADIUS-LG_CORNER_SPACE,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>, LG_OUTER_RADIUS-LG_CORNER_SPACE
      )
      cylinder {
        <-0.3-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS
      }
      cylinder {
        <-0.3, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS-LG_CORNER_SPACE
      }
      difference {
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
          <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
          LG_OUTER_RADIUS
        }
        box {
          <-LG_BRICK_WIDTH/2-LG_E, LG_OUTER_RADIUS-0.08, -LG_OUTER_RADIUS>,
          <LG_BRICK_WIDTH/2+LG_E, LG_OUTER_RADIUS+LG_E, LG_OUTER_RADIUS>
        }
        box {
          <-LG_BRICK_WIDTH/2-LG_E, -LG_OUTER_RADIUS+0.08, -LG_OUTER_RADIUS>,
          <LG_BRICK_WIDTH/2+LG_E, -LG_OUTER_RADIUS-LG_E, LG_OUTER_RADIUS>
        }
      }
      cylinder {
        <0.3, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0.3+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_OUTER_RADIUS
      }
      lg_connect_tori_merge (
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>, LG_OUTER_RADIUS-LG_CORNER_SPACE,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>, LG_EDGE_RADIUS-LG_CORNER_SPACE
      )
    }
    cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      LG_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH-LG_E, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_INNER_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, LG_OUTER_RADIUS-0.08, 0>,
      <0, -LG_OUTER_RADIUS+0.08, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, LG_OUTER_RADIUS, 0>,
      <0, LG_OUTER_RADIUS-0.08-LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, -LG_OUTER_RADIUS, 0>,
      <0, -LG_OUTER_RADIUS+0.08+LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  // CENTRAL TECHNIC HOLE
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
    }
  }
  // CENTRAL BAR
  intersection {
    difference {
      merge {
        cylinder {
          <0, LG_OUTER_RADIUS, 0>,
          <0, -LG_OUTER_RADIUS, 0>,
          LG_BRICK_WIDTH/2
        }
        box {
          <0, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
        box {
          <0, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2>
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_OUTER_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_OUTER_RADIUS, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
      }
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <LG_BRICK_WIDTH, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      box {
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -0.24>,
        <0, LG_BRICK_WIDTH, 0.24>
      }
      cylinder {
        <0, -LG_BRICK_WIDTH, 0>,
        <0, LG_BRICK_WIDTH, 0>,
        0.24
      }
      box {
        <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.08, -LG_PLATE_HEIGHT>,
        <0, -LG_BRICK_WIDTH-0.08, LG_PLATE_HEIGHT>
      }
      box {
        <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -LG_PLATE_HEIGHT>,
        <0, LG_BRICK_WIDTH+0.08, LG_PLATE_HEIGHT>
      }
      cylinder {
        <0, -LG_BRICK_WIDTH-0.08, 0>,
        <0, -LG_BRICK_WIDTH+0.08, 0>,
        LG_PLATE_HEIGHT
      }
      cylinder {
        <0, LG_BRICK_WIDTH-0.08, 0>,
        <0, LG_BRICK_WIDTH+0.08, 0>,
        LG_PLATE_HEIGHT
      }
      cylinder {
        <0, -LG_OUTER_RADIUS+0.08, 0>,
        <0, LG_OUTER_RADIUS-0.08, 0>,
        LG_KNOB_RADIUS
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, 0>,
      <LG_BRICK_WIDTH, 0, 0>,
      LG_INNER_RADIUS
    }
  }
}

#end
