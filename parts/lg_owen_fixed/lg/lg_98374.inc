/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_98374: Minifig Pot Small with Handle Holders                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_98374)
#else
#declare lg_98374 =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.44+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>
  }
  torus {
    0.52-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      union {
        intersection {
          torus {
            0.4,
            0.28
            rotate <90, 0, 0>
          }
          box {
            <-0.4-0.28, 0.4+0.28, -0.28>,
            <0.4+0.28, -0.4-0.28, 0>
          }
        }
        cylinder {
          <0, 0, -0.28>,
          <0, 0, +LG_E>,
          0.4
        }
        scale <1, 1, 1.5715>
        translate <0, 0, 0.60>
      }
      union {
        intersection {
          torus {
            0.52,
            0.16
            rotate <90, 0, 0>
          }
          box {
            <-0.52-0.16, 0.52+0.16, 0>,
            <0.52+0.16, -0.52-0.16, 0.16>
          }
        }
        cylinder {
          <0, 0, -LG_E>,
          <0, 0, 0.16>,
          0.52
        }
        scale <1, 1, 2.375>
        translate <0, 0, 0.60>
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.24>,
        0.52-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>,
        0.52
      }
      sphere {
        <0, 0.52, LG_BRICK_HEIGHT+0.12>,
        0.06
      }
      sphere {
        <0, -0.52, LG_BRICK_HEIGHT+0.12>,
        0.06
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    torus {
      0.32,
      0.12
      rotate <90, 0, 0>
      translate <0, 0, 0.24+0.12>
    }
    cylinder {
      <0, 0, 0.24>,
      <0, 0, 0.24+0.12>,
      0.12
    }
    cylinder {
      <0, 0, 0.24+0.12>,
      <0, 0, LG_BRICK_HEIGHT+0.24>,
      0.32+0.12
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.24+LG_E>,
      0.44+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_KNOB_HEIGHT>
}

#declare lg_98374_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.44+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>
  }
  torus {
    0.52-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      merge {
        intersection {
          torus {
            0.4,
            0.28
            rotate <90, 0, 0>
          }
          box {
            <-0.4-0.28, 0.4+0.28, -0.28>,
            <0.4+0.28, -0.4-0.28, 0>
          }
        }
        cylinder {
          <0, 0, -0.28>,
          <0, 0, +LG_E>,
          0.4
        }
        scale <1, 1, 1.5715>
        translate <0, 0, 0.60>
      }
      merge {
        intersection {
          torus {
            0.52,
            0.16
            rotate <90, 0, 0>
          }
          box {
            <-0.52-0.16, 0.52+0.16, 0>,
            <0.52+0.16, -0.52-0.16, 0.16>
          }
        }
        cylinder {
          <0, 0, -LG_E>,
          <0, 0, 0.16>,
          0.52
        }
        scale <1, 1, 2.375>
        translate <0, 0, 0.60>
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.24>,
        0.52-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>,
        0.52
      }
      sphere {
        <0, 0.52, LG_BRICK_HEIGHT+0.12>,
        0.06
      }
      sphere {
        <0, -0.52, LG_BRICK_HEIGHT+0.12>,
        0.06
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    torus {
      0.32,
      0.12
      rotate <90, 0, 0>
      translate <0, 0, 0.24+0.12>
    }
    cylinder {
      <0, 0, 0.24>,
      <0, 0, 0.24+0.12>,
      0.12
    }
    cylinder {
      <0, 0, 0.24+0.12>,
      <0, 0, LG_BRICK_HEIGHT+0.24>,
      0.32+0.12
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.24-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.24+LG_E>,
      0.44+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_KNOB_HEIGHT>
}

#end
