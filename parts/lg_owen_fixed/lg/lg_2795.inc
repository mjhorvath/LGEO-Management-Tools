/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2795: ~Technic Pneumatic Cylinder 2 x 2 x 1 Cap with Port Slot           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2795)
#else
#local LG_RADIUS_CYLINDER_OUTER = 0.76;
#local LG_RADIUS_CYLINDER_MID = 0.68;
#local LG_HEIGHT_NOZZLE = 0.56;
#local LG_HEIGHT_SIDE_SNAP = 0.60;
#local LG_RADIUS_SIDE_SNAP = 0.20;
#declare lg_2795 =
union {
  difference {
    union {
      torus {
        LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
    }
    box {
      <0, 0.2, -LG_E>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, -0.2, LG_HEIGHT_NOZZLE>
    }
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    0.40-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_BRICK_HEIGHT>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_E>,
        <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        0.40+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.08>,
        0.40-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
        0.40
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT-0.08>,
      LG_RADIUS_CYLINDER_MID
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-0.08-LG_E>,
      <0, 0, LG_BRICK_HEIGHT+0.08>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.08+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    torus {
      0.40+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <0, LG_RADIUS_CYLINDER_OUTER+LG_E, LG_HEIGHT_SIDE_SNAP>,
      <0, -LG_RADIUS_CYLINDER_OUTER-LG_E, LG_HEIGHT_SIDE_SNAP>,
      LG_RADIUS_SIDE_SNAP
    }
    box {
      <0, 0.2, -LG_E>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, -0.2, LG_HEIGHT_NOZZLE>
    }
    cylinder {
      <0, 0, LG_HEIGHT_NOZZLE>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, 0, LG_HEIGHT_NOZZLE>,
      0.2
    }
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_2795_clear =
merge {
  difference {
    merge {
      torus {
        LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
    }
    box {
      <0, 0.2, -LG_E>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, -0.2, LG_HEIGHT_NOZZLE>
    }
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    0.40-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_BRICK_HEIGHT>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_E>,
        <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        0.40+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.08>,
        0.40-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
        0.40
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT-0.08>,
      LG_RADIUS_CYLINDER_MID
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-0.08-LG_E>,
      <0, 0, LG_BRICK_HEIGHT+0.08>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.08+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    torus {
      0.40+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
      <0, LG_RADIUS_CYLINDER_OUTER+LG_E, LG_HEIGHT_SIDE_SNAP>,
      <0, -LG_RADIUS_CYLINDER_OUTER-LG_E, LG_HEIGHT_SIDE_SNAP>,
      LG_RADIUS_SIDE_SNAP
    }
    box {
      <0, 0.2, -LG_E>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, -0.2, LG_HEIGHT_NOZZLE>
    }
    cylinder {
      <0, 0, LG_HEIGHT_NOZZLE>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, 0, LG_HEIGHT_NOZZLE>,
      0.2
    }
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
