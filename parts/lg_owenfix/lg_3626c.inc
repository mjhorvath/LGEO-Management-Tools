/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3626c: Minifig Head with Closed Hollow Stud                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3626c)
#else
#include "lg_macro.inc"
#declare lg_3626c =
union {
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.10>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.10+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, 0.10>,
        <0, 0, LG_BRICK_HEIGHT>,
        0.35
      }
      cylinder {
        <0, 0, 0.26>,
        <0, 0, LG_BRICK_HEIGHT-0.16>,
        0.51
      }
      torus {
        0.35,
        0.16
        rotate <90, 0, 0>
        translate <0, 0, 0.26>
      }
      torus {
        0.35,
        0.16
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_HEIGHT-0.16>
      }
    }
    union {
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_BRICK_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
    }
  }
  object {
    lg_tech_knob_logo_group_union (1, 1)
    rotate z*90
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_3626c_clear =
merge {
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.10>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.10+LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, 0.10>,
        <0, 0, LG_BRICK_HEIGHT>,
        0.35
      }
      cylinder {
        <0, 0, 0.26>,
        <0, 0, LG_BRICK_HEIGHT-0.16>,
        0.51
      }
      torus {
        0.35,
        0.16
        rotate <90, 0, 0>
        translate <0, 0, 0.26>
      }
      torus {
        0.35,
        0.16
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_HEIGHT-0.16>
      }
    }
    merge {
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_BRICK_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
    }
  }
  object {
    lg_tech_knob_logo_group_merge (1, 1)
    rotate z*90
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
