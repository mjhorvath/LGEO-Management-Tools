/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_15460: Technic Steering Arm with 3 Ball Joints with 1L Arm Side Conn...  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_15460)
#else
#include "lg_macro.inc"
#declare lg_15460 =
union {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, LG_BRICK_WIDTH/2>,
        <0, -LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate <0, 0, 90>
    }
  }
  #local ROT = 0;
  #while (ROT < 3)
  union {
    cylinder {
      <0, 0, LG_KNOB_RADIUS>,
      <0, 0, LG_BRICK_WIDTH>,
      0.14
    }
    sphere {
      <0, 0, LG_BRICK_WIDTH>,
      0.32
    }
    rotate <0, 90*ROT, 0>
  }
  #local ROT = ROT + 1;
  #end
}

#declare lg_15460_clear =
merge {
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, LG_BRICK_WIDTH/2>,
        <0, -LG_BRICK_WIDTH/2>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        LG_BEAM_WIDTH/2
      }
    }
    object {
      lg_tech_hole_group (1, 1)
      rotate <0, 0, 90>
    }
  }
  #local ROT = 0;
  #while (ROT < 3)
  merge {
    cylinder {
      <0, 0, LG_KNOB_RADIUS>,
      <0, 0, LG_BRICK_WIDTH>,
      0.14
    }
    sphere {
      <0, 0, LG_BRICK_WIDTH>,
      0.32
    }
    rotate <0, 90*ROT, 0>
  }
  #local ROT = ROT + 1;
  #end
}

#end
