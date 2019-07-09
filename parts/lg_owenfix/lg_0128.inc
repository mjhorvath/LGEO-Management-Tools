/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_128: ~Technic Pneumatic Cylinder 2 x 2 Cap                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_128)
#else
#local LG_HEIGHT_CYLINDER_BASE = 0;
#local LG_HEIGHT_CYLINDER_CAP = 0.36;
#local LG_HEIGHT_CYLINDER_CAP_INNER = 0.28;
#local LG_RADIUS_CYLINDER_OUTER = 0.76;
#local LG_RADIUS_CYLINDER_MID = 0.74;
#local LG_RADIUS_CYLINDER_INNER = 0.70;
#declare lg_128 =
union {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>
  }
  torus {
    0.40-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE>,
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        LG_RADIUS_CYLINDER_MID
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_E>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_CORNER_SPACE>,
        0.40+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12>,
        0.40-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>,
        0.40
      }
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP_INNER>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP_INNER-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12>,
      0.24
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12+LG_E>,
      0.24+LG_CORNER_SPACE
    }
    torus {
      0.40+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_CORNER_SPACE>
    }
  }
  translate <0, 0, -LG_HEIGHT_CYLINDER_CAP>
}

#declare lg_128_clear =
merge {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>
  }
  torus {
    0.40-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE>,
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        LG_RADIUS_CYLINDER_MID
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+0.04+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_E>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_CORNER_SPACE>,
        0.40+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12>,
        0.40-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>,
        0.40
      }
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP_INNER>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP_INNER-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12>,
      0.24
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+0.12+LG_E>,
      0.24+LG_CORNER_SPACE
    }
    torus {
      0.40+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_CORNER_SPACE>
    }
  }
  translate <0, 0, -LG_HEIGHT_CYLINDER_CAP>
}

#end
