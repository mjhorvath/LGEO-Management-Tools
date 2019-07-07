/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4592: Hinge Control Stick Base                                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 1998-03-19 Lutz Uhlmann                                                     */
/* 2007-10-30 Lutz Uhlmann moved from lg_4592 to lg_4592                       */
/* 2012-08-11 Owen Burgoyne rewrote part to appear more accurate               */
/* 2014-01-18 Owen Burgoyne minor fix due to issue with 2014-01-16 update      */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4592)
#else
#declare lg_4592 =
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
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.24-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.24>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, -0.24>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 0.24+LG_E>,
      LG_KNOB_RADIUS
    }
  }
  #local LG_RAD_DIF_H = 0.007;
  #local LG_RAD_DIF_V = 0.0145;
  intersection {
    difference {
      union {
        difference {
          sphere {
            <0, 0, 0.24>,
            LG_CYLINDER_RADIUS
          }
          box {
            <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.32-LG_CORNER_SPACE>,
            <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.24+LG_CYLINDER_RADIUS>
          }
        }
        cylinder {
          <0, 0, 0.32-LG_CORNER_SPACE>,
          <0, 0, 0.32>,
          LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_H
        }
        torus {
          LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_H,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 0, 0.32-LG_CORNER_SPACE>
        }
      }
      box {
        <-0.2, 0.08+LG_E, 0>,
        <0.2, -0.08-LG_E, 0.32+LG_E>
      }
    }
    box {
      <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.24>,
      <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.32+LG_E>
    }
  }
  intersection {
    union {
      difference {
        sphere {
          <0, 0, 0.24>,
          LG_CYLINDER_RADIUS
        }
        box {
          <-LG_CYLINDER_RADIUS, 0.08+LG_CORNER_SPACE, 0>,
          <LG_CYLINDER_RADIUS, -0.08-LG_CORNER_SPACE, 0.24+LG_CYLINDER_RADIUS>
        }
      }
      intersection {
        union {
          torus {
            LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V,
            LG_CORNER_SPACE
            translate <0, 0.08+LG_CORNER_SPACE, 0.24>
          }
          torus {
            LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V,
            LG_CORNER_SPACE
            translate <0, -0.08-LG_CORNER_SPACE, 0.24>
          }
        }
        box {
          <-LG_CYLINDER_RADIUS, 0.08+LG_CORNER_SPACE, 0.24>,
          <LG_CYLINDER_RADIUS, -0.08-LG_CORNER_SPACE, 0.24+LG_CYLINDER_RADIUS>
        }
      }
      cylinder {
        <0, 0.08+LG_CORNER_SPACE, 0.24>,
        <0, 0.08, 0.24>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V
      }
      cylinder {
        <0, -0.08, 0.24>,
        <0, -0.08-LG_CORNER_SPACE, 0.24>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V
      }
    }
    box {
      <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.32-LG_CORNER_SPACE>,
      <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.24+LG_CYLINDER_RADIUS>
    }
  }
  sphere {
    <0, 0, 0.4>,
    0.12
    scale <1, 0.3, 1>
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  sphere {
    <0, 0, 0.4>,
    0.12
    scale <1, 0.3, 1>
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_4592_clear =
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
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.24-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.24>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, -0.24>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 0.24+LG_E>,
      LG_KNOB_RADIUS
    }
  }
  #local LG_RAD_DIF_H = 0.007;
  #local LG_RAD_DIF_V = 0.0145;
  intersection {
    difference {
      merge {
        difference {
          sphere {
            <0, 0, 0.24>,
            LG_CYLINDER_RADIUS
          }
          box {
            <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.32-LG_CORNER_SPACE>,
            <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.24+LG_CYLINDER_RADIUS>
          }
        }
        cylinder {
          <0, 0, 0.32-LG_CORNER_SPACE>,
          <0, 0, 0.32>,
          LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_H
        }
        torus {
          LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_H,
          LG_CORNER_SPACE
          rotate <90, 0, 0>
          translate <0, 0, 0.32-LG_CORNER_SPACE>
        }
      }
      box {
        <-0.2, 0.08+LG_E, 0>,
        <0.2, -0.08-LG_E, 0.32+LG_E>
      }
    }
    box {
      <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.24>,
      <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.32+LG_E>
    }
  }
  intersection {
    merge {
      difference {
        sphere {
          <0, 0, 0.24>,
          LG_CYLINDER_RADIUS
        }
        box {
          <-LG_CYLINDER_RADIUS, 0.08+LG_CORNER_SPACE, 0>,
          <LG_CYLINDER_RADIUS, -0.08-LG_CORNER_SPACE, 0.24+LG_CYLINDER_RADIUS>
        }
      }
      intersection {
        merge {
          torus {
            LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V,
            LG_CORNER_SPACE
            translate <0, 0.08+LG_CORNER_SPACE, 0.24>
          }
          torus {
            LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V,
            LG_CORNER_SPACE
            translate <0, -0.08-LG_CORNER_SPACE, 0.24>
          }
        }
        box {
          <-LG_CYLINDER_RADIUS, 0.08+LG_CORNER_SPACE, 0.24>,
          <LG_CYLINDER_RADIUS, -0.08-LG_CORNER_SPACE, 0.24+LG_CYLINDER_RADIUS>
        }
      }
      cylinder {
        <0, 0.08+LG_CORNER_SPACE, 0.24>,
        <0, 0.08, 0.24>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V
      }
      cylinder {
        <0, -0.08, 0.24>,
        <0, -0.08-LG_CORNER_SPACE, 0.24>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE-LG_RAD_DIF_V
      }
    }
    box {
      <-LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 0.32-LG_CORNER_SPACE>,
      <LG_CYLINDER_RADIUS, -LG_CYLINDER_RADIUS, 0.24+LG_CYLINDER_RADIUS>
    }
  }
  sphere {
    <0, 0, 0.4>,
    0.12
    scale <1, 0.3, 1>
    translate <0, 0.08+LG_CORNER_SPACE, 0>
  }
  sphere {
    <0, 0, 0.4>,
    0.12
    scale <1, 0.3, 1>
    translate <0, -0.08-LG_CORNER_SPACE, 0>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
