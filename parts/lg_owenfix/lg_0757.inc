/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_757: ~Hose Flexible 12L Top 1 x 1 x 0.667 with Stud                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/* 2014-01-16 Owen Burgoyne updated with "lg_connect_tori" macro               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_757)
#else
#include "lg_macro.inc"
#declare lg_757 =
union {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.36>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.12+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    union {
      lg_connect_tori_union (
        <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        <0, 0, -0.36>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      )
      cylinder {
        <0, 0, -0.36>,
        <0, 0, -0.12>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, -0.12>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.12+LG_CORNER_SPACE>,
        <0, 0, -LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT>,
      <0, 0, LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  difference {
    union {
      torus {
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 2*-LG_PLATE_HEIGHT>,
        <0, 0, -0.36-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, -0.36>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, -0.36+LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <0.08, 0.08, 2*-LG_PLATE_HEIGHT-LG_E>,
      <LG_CYLINDER_RADIUS+LG_E, LG_CYLINDER_RADIUS+LG_E, -0.36+LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_tech_knob
  }
}

#declare lg_757_clear =
merge {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.36>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.12+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    merge {
      lg_connect_tori_merge (
        <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        <0, 0, -0.36>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      )
      cylinder {
        <0, 0, -0.36>,
        <0, 0, -0.12>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, -0.12>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -0.12+LG_CORNER_SPACE>,
        <0, 0, -LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT>,
      <0, 0, LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  difference {
    merge {
      torus {
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 2*-LG_PLATE_HEIGHT>,
        <0, 0, -0.36-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, -0.36>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, -0.36+LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <0.08, 0.08, 2*-LG_PLATE_HEIGHT-LG_E>,
      <LG_CYLINDER_RADIUS+LG_E, LG_CYLINDER_RADIUS+LG_E, -0.36+LG_E>
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_tech_knob_clear
  }
}

#end
