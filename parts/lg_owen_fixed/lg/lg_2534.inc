/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2534: ~Minifig Cannon Shooting Plunger                                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2534)
#else
#include "lg_macro.inc"
#declare lg_2534 = 
union {
  sphere {
    <-3.288, 0, 0>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <-3.288, 0, 0>,
    <-2.8, 0, 0>,
    0.15
  }
  lg_connect_tori_union (
    <-2.8, 0, 0>,
    0.15-LG_CORNER_SPACE,
    <-2.4028+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
  )
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2.4028+LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-2.4028, 0, 0>,
        <-0.48-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <-2.4028+LG_CORNER_SPACE, 0, 0>,
        <-0.48, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <-2.228, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2>,
      <-0.48+LG_E, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    0.28-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.58-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
  }
  lg_connect_tori_union (
    <-0.58-LG_CORNER_SPACE, 0, 0>,
    0.28-LG_CORNER_SPACE,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    0.38-LG_CORNER_SPACE,
  )
  torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.43, 0, 0>
  }
  cylinder {
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    <-0.43, 0, 0>,
    0.38
  }
  cylinder {
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    <-0.43+LG_CORNER_SPACE, 0, 0>,
    0.38-LG_CORNER_SPACE
  }
  difference {
    union {
      torus {
        0.38-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <1.472-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <-0.43, 0, 0>,
        <1.472-LG_CORNER_SPACE, 0, 0>
        0.38
      }
      cylinder {
        <-0.43+LG_CORNER_SPACE, 0, 0>,
        <1.472, 0, 0>
        0.38-LG_CORNER_SPACE
      }
    }
    union {
      box {
        <0-LG_E, 0.2, -0.38-LG_E>,
        <3*LG_BRICK_WIDTH, 0.38+LG_E, 0.38+LG_E>
        rotate <0, 0, -1.5>
      }
      box {
        <0-LG_E, 0.38+LG_E, -0.23>,
        <3*LG_BRICK_WIDTH, -0.38-LG_E, 0.23>
      }
      box {
        <0-LG_E, -0.2, -0.38-LG_E>,
        <3*LG_BRICK_WIDTH, -0.38-LG_E, 0.38+LG_E>
        rotate <0, 0, 1.5>
      }
      translate <-0.43, 0, 0>
    }
  }
}

#declare lg_2534_clear = 
merge {
  sphere {
    <-3.288, 0, 0>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <-3.288, 0, 0>,
    <-2.8, 0, 0>,
    0.15
  }
  lg_connect_tori_merge (
    <-2.8, 0, 0>,
    0.15-LG_CORNER_SPACE,
    <-2.4028+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
  )
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2.4028+LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-2.4028, 0, 0>,
        <-0.48-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <-2.4028+LG_CORNER_SPACE, 0, 0>,
        <-0.48, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
      <-2.228, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2>,
      <-0.48+LG_E, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    0.28-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.58-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
  }
  lg_connect_tori_merge (
    <-0.58-LG_CORNER_SPACE, 0, 0>,
    0.28-LG_CORNER_SPACE,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    0.38-LG_CORNER_SPACE,
  )
  torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.43, 0, 0>
  }
  cylinder {
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    <-0.43, 0, 0>,
    0.38
  }
  cylinder {
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    <-0.43+LG_CORNER_SPACE, 0, 0>,
    0.38-LG_CORNER_SPACE
  }
  difference {
    merge {
      torus {
        0.38-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <1.472-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <-0.43, 0, 0>,
        <1.472-LG_CORNER_SPACE, 0, 0>
        0.38
      }
      cylinder {
        <-0.43+LG_CORNER_SPACE, 0, 0>,
        <1.472, 0, 0>
        0.38-LG_CORNER_SPACE
      }
    }
    merge {
      box {
        <0-LG_E, 0.2, -0.38-LG_E>,
        <3*LG_BRICK_WIDTH, 0.38+LG_E, 0.38+LG_E>
        rotate <0, 0, -1.5>
      }
      box {
        <0-LG_E, 0.38+LG_E, -0.23>,
        <3*LG_BRICK_WIDTH, -0.38-LG_E, 0.23>
      }
      box {
        <0-LG_E, -0.2, -0.38-LG_E>,
        <3*LG_BRICK_WIDTH, -0.38-LG_E, 0.38+LG_E>
        rotate <0, 0, 1.5>
      }
      translate <-0.43, 0, 0>
    }
  }
}

#end
