/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_33176: Finial Round (Decoration Ball)                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_33176)
#else
#declare lg_33176 =
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
        <0, 0, 0.72>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.72-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      sphere {
        <0, 0, 0.72>,
        0.556
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 0.4>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0.4-LG_E>,
      <0, 0, 0.96>,
      0.2
    }
    sphere {
      <0, 0, 0.96>,
      0.2
    }
  }
}

#declare lg_33176_clear =
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
        <0, 0, 0.72>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.72-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      sphere {
        <0, 0, 0.72>,
        0.556
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, 0.4>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0.4-LG_E>,
      <0, 0, 0.96>,
      0.2
    }
    sphere {
      <0, 0, 0.96>,
      0.2
    }
  }
}

#end
