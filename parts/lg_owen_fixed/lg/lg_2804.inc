/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2804: ~Technic Pneumatic Cylinder 2 x 2 x 1 Cap without Port Slot        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2804)
#else
#local LG_RADIUS_CYLINDER_OUTER = LG_BRICK_WIDTH;
#local LG_RADIUS_CYLINDER_MID = 0.68;
#local LG_HEIGHT_SIDE_SNAP = 0.60;
#local LG_RADIUS_SIDE_SNAP = 0.20;
#declare lg_2804 =
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
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  torus {
    0.48-LG_CORNER_SPACE,
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
        0.48+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.08>,
        0.48-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
        0.48
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
      0.32
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.08+LG_E>,
      0.32+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_RADIUS_CYLINDER_OUTER-LG_E, 0, LG_HEIGHT_SIDE_SNAP>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, 0, LG_HEIGHT_SIDE_SNAP>,
      LG_RADIUS_SIDE_SNAP
    }
    torus {
      0.48+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
  }
  translate <0, 0, -LG_BRICK_HEIGHT-0.08>
}

#declare lg_2804_clear =
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
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>
  }
  torus {
    0.48-LG_CORNER_SPACE,
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
        0.48+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT>,
        <0, 0, LG_BRICK_HEIGHT+0.08>,
        0.48-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
        0.48
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
      0.32
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT+0.08-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+0.08+LG_E>,
      0.32+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_RADIUS_CYLINDER_OUTER-LG_E, 0, LG_HEIGHT_SIDE_SNAP>,
      <LG_RADIUS_CYLINDER_OUTER+LG_E, 0, LG_HEIGHT_SIDE_SNAP>,
      LG_RADIUS_SIDE_SNAP
    }
    torus {
      0.48+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
  }
  translate <0, 0, -LG_BRICK_HEIGHT-0.08>
}

#end
