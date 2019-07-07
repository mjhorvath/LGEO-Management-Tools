/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30285: Wheel Hub 14.8 x 16.8 with Centre Groove                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30285)
#else
#include "lg_macro.inc"
#local LG_RADIUS_OUTER = 0.84;
#local LG_RADIUS_INNER = 0.76;
#declare lg_30285 =
union {
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.28-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <0.28, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0.28-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      object {
        lego_logo_text
        scale 1.05
        rotate <90, 0, 90>
        translate <0.28, 0, 0>
      }
    }
    object {
      lg_tech_hole
      translate <-LG_BRICK_WIDTH, 0, 0>
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, 0>,
      <-0.08+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-0.08, 0, 0>,
      <0, 0, 0>,
      LG_TECH_HOLE_RADIUS
    }
    sphere {
      <0.28+0.05, 0, 0>,
      0.08
    }
  }
  #local ROT = 0;
  #while (ROT < 4)
  union {
    cylinder {
      <0.24-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>,
      <0.24-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_RADIUS_INNER>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.24-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>,
      <0.24-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_RADIUS_INNER>,
      LG_CORNER_SPACE
    }
    box {
      <0.16, 0.08-LG_CORNER_SPACE, 0>,
      <0.24, -0.08+LG_CORNER_SPACE, LG_RADIUS_INNER+LG_CORNER_SPACE>
    }
    box {
      <0.16-LG_E, 0.08, 0>,
      <0.24-LG_CORNER_SPACE, -0.08, LG_RADIUS_INNER>
    }
    rotate <90*ROT, 0, 0>
  }
  #local ROT = ROT + 1;
  #end
  torus {
    LG_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.68+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.68+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.16-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.16+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.68-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.68-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-0.68, 0, 0>,
        <-0.16, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <-0.68+LG_CORNER_SPACE, 0, 0>,
        <-0.16-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER
      }
      lg_connect_tori_union (
        <-0.16-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE,
        <-0.08, 0, 0>,
        LG_BRICK_WIDTH/2
      )
      lg_connect_tori_union (
        <0.08, 0, 0>,
        LG_BRICK_WIDTH/2,
        <0.16+LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      )
      cylinder {
        <0.16, 0, 0>,
        <0.68, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0.16+LG_CORNER_SPACE, 0, 0>,
        <0.68-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER
      }
    }
    cylinder {
      <-0.68-LG_E, 0, 0>,
      <-0.68+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <-0.68, 0, 0>,
      <-0.16, 0, 0>,
      LG_RADIUS_INNER
    }
    cylinder {
      <-0.16, 0, 0>,
      <LG_E, 0, 0>,
      LG_TECH_HOLE_RADIUS+LG_E
    }
    torus {
      0.56,
      LG_CORNER_SPACE
      rotate z*90
      translate <0.16, 0, 0>
    }
    torus {
      LG_RADIUS_INNER-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate z*90
      translate <0.24+LG_CORNER_SPACE, 0, 0>
    }
    lg_connect_tori_union (
      <0.16, 0, 0>,
      0.56,
      <0.24+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_INNER-LG_CORNER_SPACE
    )
    cylinder {
      <0.24, 0, 0>,
      <0.68-LG_E, 0, 0>,
      LG_RADIUS_INNER-LG_CORNER_SPACE
    }
    cylinder {
      <0.24+LG_CORNER_SPACE, 0, 0>,
      <0.68, 0, 0>,
      LG_RADIUS_INNER
    }
    cylinder {
      <0.68-LG_CORNER_SPACE, 0, 0>,
      <0.68+LG_E, 0, 0>,
      LG_RADIUS_INNER+LG_CORNER_SPACE
    }
  }
}

#declare lg_30285_clear =
merge {
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.28-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH, 0, 0>,
        <0.28, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0.28-LG_CORNER_SPACE, 0, 0>,
        LG_BRICK_WIDTH/2
      }
      object {
        lego_logo_text
        scale 1.05
        rotate <90, 0, 90>
        translate <0.28, 0, 0>
      }
    }
    object {
      lg_tech_hole
      translate <-LG_BRICK_WIDTH, 0, 0>
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, 0>,
      <-0.08+LG_E, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-0.08, 0, 0>,
      <0, 0, 0>,
      LG_TECH_HOLE_RADIUS
    }
    sphere {
      <0.28+0.05, 0, 0>,
      0.08
    }
  }
  #local ROT = 0;
  #while (ROT < 4)
  merge {
    cylinder {
      <0.24-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>,
      <0.24-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_RADIUS_INNER>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.24-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>,
      <0.24-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_RADIUS_INNER>,
      LG_CORNER_SPACE
    }
    box {
      <0.16, 0.08-LG_CORNER_SPACE, 0>,
      <0.24, -0.08+LG_CORNER_SPACE, LG_RADIUS_INNER+LG_CORNER_SPACE>
    }
    box {
      <0.16-LG_E, 0.08, 0>,
      <0.24-LG_CORNER_SPACE, -0.08, LG_RADIUS_INNER>
    }
    rotate <90*ROT, 0, 0>
  }
  #local ROT = ROT + 1;
  #end
  torus {
    LG_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.68+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.68+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.16-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.16+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.68-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.68-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-0.68, 0, 0>,
        <-0.16, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <-0.68+LG_CORNER_SPACE, 0, 0>,
        <-0.16-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER
      }
      lg_connect_tori_merge (
        <-0.16-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE,
        <-0.08, 0, 0>,
        LG_BRICK_WIDTH/2
      )
      lg_connect_tori_merge (
        <0.08, 0, 0>,
        LG_BRICK_WIDTH/2,
        <0.16+LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      )
      cylinder {
        <0.16, 0, 0>,
        <0.68, 0, 0>,
        LG_RADIUS_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0.16+LG_CORNER_SPACE, 0, 0>,
        <0.68-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_OUTER
      }
    }
    cylinder {
      <-0.68-LG_E, 0, 0>,
      <-0.68+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <-0.68, 0, 0>,
      <-0.16, 0, 0>,
      LG_RADIUS_INNER
    }
    cylinder {
      <-0.16, 0, 0>,
      <LG_E, 0, 0>,
      LG_TECH_HOLE_RADIUS+LG_E
    }
    torus {
      0.56,
      LG_CORNER_SPACE
      rotate z*90
      translate <0.16, 0, 0>
    }
    torus {
      LG_RADIUS_INNER-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate z*90
      translate <0.24+LG_CORNER_SPACE, 0, 0>
    }
    lg_connect_tori_merge (
      <0.16, 0, 0>,
      0.56,
      <0.24+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_INNER-LG_CORNER_SPACE
    )
    cylinder {
      <0.24, 0, 0>,
      <0.68-LG_E, 0, 0>,
      LG_RADIUS_INNER-LG_CORNER_SPACE
    }
    cylinder {
      <0.24+LG_CORNER_SPACE, 0, 0>,
      <0.68, 0, 0>,
      LG_RADIUS_INNER
    }
    cylinder {
      <0.68-LG_CORNER_SPACE, 0, 0>,
      <0.68+LG_E, 0, 0>,
      LG_RADIUS_INNER+LG_CORNER_SPACE
    }
  }
}

#end
