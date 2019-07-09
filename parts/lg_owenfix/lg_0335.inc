/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_335: ~Technic Pneumatic Cylinder 2 x 2 x 5                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_335)
#else
#local LG_HEIGHT_CYLINDER_BASE = 0;
#local LG_HEIGHT_CYLINDER_CAP = 4.88;
#local LG_RADIUS_CYLINDER_OUTER = 0.76;
#local LG_RADIUS_CYLINDER_INNER = 0.72;
#declare lg_335 =
union {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_HEIGHT_CYLINDER_CAP>
}

#declare lg_335_clear =
merge {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE-LG_E>,
      <0, 0, LG_HEIGHT_CYLINDER_BASE+LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_BASE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_CAP-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_CAP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_HEIGHT_CYLINDER_CAP>
}

#end
