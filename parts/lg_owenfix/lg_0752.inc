/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_752: Hose Flexible End 1 x 1 x 0.667 without Tabs                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-06-28 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_752)
#else
#include "shapes.inc"
#declare lg_752 = 
union {
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.75*-LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    0.12+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0.75*-LG_BRICK_HEIGHT>,
        <0, 0, 0.33*-LG_BRICK_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.75*-LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 0.33*-LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      object {
        Round_Cone_Union(<0, 0, 0.33*-LG_BRICK_HEIGHT-2*LG_CORNER_SPACE>, LG_CYLINDER_RADIUS+0.475*LG_CORNER_SPACE, <0, 0, 0>, 0.195, LG_CORNER_SPACE)
      }
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT-LG_E>,
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1*LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1*LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1.5*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1.5*LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 0>
      0.12
    }
    cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.12+LG_CORNER_SPACE
    }
  }
}

#declare lg_752_clear = 
merge {
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.75*-LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    0.12+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0.75*-LG_BRICK_HEIGHT>,
        <0, 0, 0.33*-LG_BRICK_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0.75*-LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 0.33*-LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
      object {
        Round_Cone_Merge(<0, 0, 0.33*-LG_BRICK_HEIGHT-2*LG_CORNER_SPACE>, LG_CYLINDER_RADIUS+0.475*LG_CORNER_SPACE, <0, 0, 0>, 0.195, LG_CORNER_SPACE)
      }
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT-LG_E>,
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1*LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1*LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1.5*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, 0.75*-LG_BRICK_HEIGHT+1.5*LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 0>
      0.12
    }
    cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.12+LG_CORNER_SPACE
    }
  }
}

#end
