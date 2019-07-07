/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2535: ~Minifig Cannon Shooting Breech                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2535)
#else
#declare LG_CANNON_BASE_POINT = -1.9;
#declare LG_CANNON_BASE_RADIUS = 0.624;
#declare lg_2535 = 
union {
  torus {
    LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.38, 0.56-LG_CORNER_SPACE, 0>
  }
  torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.38, -0.56+LG_CORNER_SPACE, 0>
  }
  torus {
    0.48-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      difference {
        sphere {
          <0, 0, 0>,
          LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE
          scale <0.9, 1, 1>
        }
        box {
          <0, LG_CANNON_BASE_RADIUS, -LG_CANNON_BASE_RADIUS>,
          <LG_CANNON_BASE_RADIUS, -LG_CANNON_BASE_RADIUS, LG_CANNON_BASE_RADIUS>
        }
      }
      difference {
        sphere {
          <0, 0, 0>,
          LG_CANNON_BASE_RADIUS
          translate <-LG_CORNER_SPACE, 0, 0>
          scale <0.9, 1, 1>
        }
        box {
          <-LG_CORNER_SPACE, LG_CANNON_BASE_RADIUS+LG_E, -LG_CANNON_BASE_RADIUS-LG_E>,
          <LG_CANNON_BASE_RADIUS+LG_E, -LG_CANNON_BASE_RADIUS-LG_E, LG_CANNON_BASE_RADIUS+LG_E>
        }
      }
      cylinder {
        <0.38, 0.56-LG_CORNER_SPACE, 0>,
        <0.38, -0.56+LG_CORNER_SPACE, 0>,
        0.1
      }
      cylinder {
        <0.38, 0.56, 0>,
        <0.38, -0.56, 0>,
        0.1-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0.8-LG_CORNER_SPACE, 0, 0>,
        0.48
      }
      cylinder {
        <-LG_E, 0, 0>,
        <0.8, 0, 0>,
        0.48-LG_CORNER_SPACE
      }
    }
    difference {
      cylinder {
        <-0.6, 0, 0>,
        <-0.5267+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-0.5267+LG_CORNER_SPACE, 0, 0>
      }
    }
    cylinder {
      <-0.6, 0, 0>,
      <-0.44+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cone {
      <-0.44, 0, 0>, LG_KNOB_RADIUS,
      <-0.3+LG_E, 0, 0>, LG_BRICK_WIDTH/2
    }
    cylinder {
      <-0.3, 0, 0>,
      <LG_BRICK_WIDTH, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
  }
  translate <LG_CANNON_BASE_POINT, 0, 0>
}

#declare lg_2535_clear = 
merge {
  torus {
    LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.38, 0.56-LG_CORNER_SPACE, 0>
  }
  torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.38, -0.56+LG_CORNER_SPACE, 0>
  }
  torus {
    0.48-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      difference {
        sphere {
          <0, 0, 0>,
          LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE
          scale <0.9, 1, 1>
        }
        box {
          <0, LG_CANNON_BASE_RADIUS, -LG_CANNON_BASE_RADIUS>,
          <LG_CANNON_BASE_RADIUS, -LG_CANNON_BASE_RADIUS, LG_CANNON_BASE_RADIUS>
        }
      }
      difference {
        sphere {
          <0, 0, 0>,
          LG_CANNON_BASE_RADIUS
          translate <-LG_CORNER_SPACE, 0, 0>
          scale <0.9, 1, 1>
        }
        box {
          <-LG_CORNER_SPACE, LG_CANNON_BASE_RADIUS+LG_E, -LG_CANNON_BASE_RADIUS-LG_E>,
          <LG_CANNON_BASE_RADIUS+LG_E, -LG_CANNON_BASE_RADIUS-LG_E, LG_CANNON_BASE_RADIUS+LG_E>
        }
      }
      cylinder {
        <0.38, 0.56-LG_CORNER_SPACE, 0>,
        <0.38, -0.56+LG_CORNER_SPACE, 0>,
        0.1
      }
      cylinder {
        <0.38, 0.56, 0>,
        <0.38, -0.56, 0>,
        0.1-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0.8-LG_CORNER_SPACE, 0, 0>,
        0.48
      }
      cylinder {
        <-LG_E, 0, 0>,
        <0.8, 0, 0>,
        0.48-LG_CORNER_SPACE
      }
    }
    difference {
      cylinder {
        <-0.6, 0, 0>,
        <-0.5267+LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      torus {
        LG_KNOB_RADIUS+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-0.5267+LG_CORNER_SPACE, 0, 0>
      }
    }
    cylinder {
      <-0.6, 0, 0>,
      <-0.44+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cone {
      <-0.44, 0, 0>, LG_KNOB_RADIUS,
      <-0.3+LG_E, 0, 0>, LG_BRICK_WIDTH/2
    }
    cylinder {
      <-0.3, 0, 0>,
      <LG_BRICK_WIDTH, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
  }
  translate <LG_CANNON_BASE_POINT, 0, 0>
}

#end
