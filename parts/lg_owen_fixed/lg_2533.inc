/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2533: ~Minifig Cannon Shooting Barrel                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2533)
#else
#include "lg_macro.inc"
#declare LG_CANNON_BASE_POINT = -1.9;
#declare LG_CANNON_BASE_RADIUS = 0.624;
#declare LG_CANNON_MUZZLE_POINT = 2.792;
#declare LG_CANNON_MUZZLE_RADIUS = 0.5252;
#declare LG_CANNON_MUZZLE_SWELL_RADIUS = 0.1;
#declare lg_2533 = 
union {
  torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.246-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.62-LG_CORNER_SPACE, 0>
  }
  torus {
    0.246-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.62+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_MUZZLE_POINT-LG_CORNER_SPACE, 0, 0>
  }
  // BARREL
  difference {
    union {
      sphere {
        <0, 1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      sphere {
        <0, -1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 1.04, 0>,
        <0, -1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 0.62, 0>,
        <0, -0.62, 0>,
        0.246-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0.62-LG_CORNER_SPACE, 0>,
        <0, -0.62+LG_CORNER_SPACE, 0>,
        0.246
      }
      lg_connect_tori_union (
        <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>,
        LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
        <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>,
        0.502
      )
      cylinder {
        <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>,
        <LG_CANNON_MUZZLE_POINT, 0, 0>
        LG_CANNON_MUZZLE_RADIUS
      }
      torus {
        LG_CANNON_MUZZLE_RADIUS,
        LG_CANNON_MUZZLE_SWELL_RADIUS
        rotate <0, 0, 90>
        translate <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>
      }
    }
    cylinder {
      <LG_CANNON_BASE_POINT-LG_E, 0, 0>,
      <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>,
      0.48+LG_CORNER_SPACE
    }
    cylinder {
      <LG_CANNON_BASE_POINT, 0, 0>,
      <LG_CANNON_BASE_POINT+LG_BRICK_WIDTH, 0, 0>,
      0.48
    }
    cylinder {
      <-1.52, LG_CANNON_BASE_RADIUS+LG_E, 0>,
      <-1.52, -LG_CANNON_BASE_RADIUS-LG_E, 0>,
      0.1
    }
    cylinder {
      <LG_CANNON_BASE_POINT+LG_BRICK_WIDTH-LG_E, 0, 0>,
      <-1.22, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <-1.22-LG_E, 0, 0>,
      <LG_CANNON_MUZZLE_POINT, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <LG_CANNON_MUZZLE_POINT-LG_CORNER_SPACE, 0, 0>,
      <LG_CANNON_MUZZLE_POINT+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
  }
  // INTERNAL PIN
  torus {
    0.076-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <2.516-LG_CORNER_SPACE, 0, 0>
  }
  lg_connect_tori_union (
    <0.3-LG_E, 0, 0>,
    0.132,
    <2.516-LG_CORNER_SPACE, 0, 0>,
    0.076-LG_CORNER_SPACE
  )
  difference {
    cylinder {
      <-0.42, 0, 0>,
      <0.3, 0, 0>,
      LG_BRICK_WIDTH/2+LG_E
    }
    box {
      <-0.42-LG_E, 0.2, -LG_CANNON_BASE_RADIUS>,
      <0.3+LG_E, -0.2, -0.232>
    }
    box {
      <-0.42-LG_E, 0.2, 0.232>,
      <0.3+LG_E, -0.2, LG_CANNON_BASE_RADIUS>
    }
  }
  // SIDE LOGO
  #declare ROT = 0;
  #while (ROT < 2)
  union {
    sphere {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <-0.2, -0.48+LG_E, -0.12+LG_CORNER_SPACE>,
      <0.2, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>
    }
    box {
      <-0.2+LG_CORNER_SPACE, -0.48, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02, 0.12-LG_CORNER_SPACE>
    }
    box {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_E, -0.12>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12>
    }
    object {
      lego_logo_text
      rotate x*90
      translate <0, -LG_CANNON_BASE_RADIUS+0.02, 0>
    }
    rotate <0, 0, 180*ROT>
    translate <-0.76, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_2533_clear = 
merge {
  torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.246-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.62-LG_CORNER_SPACE, 0>
  }
  torus {
    0.246-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.62+LG_CORNER_SPACE, 0>
  }
  torus {
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CANNON_MUZZLE_POINT-LG_CORNER_SPACE, 0, 0>
  }
  // BARREL
  difference {
    merge {
      sphere {
        <0, 1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      sphere {
        <0, -1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 1.04, 0>,
        <0, -1.04, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 0.62, 0>,
        <0, -0.62, 0>,
        0.246-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0.62-LG_CORNER_SPACE, 0>,
        <0, -0.62+LG_CORNER_SPACE, 0>,
        0.246
      }
      lg_connect_tori_merge (
        <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>,
        LG_CANNON_BASE_RADIUS-LG_CORNER_SPACE,
        <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>,
        0.502
      )
      cylinder {
        <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>,
        <LG_CANNON_MUZZLE_POINT, 0, 0>
        LG_CANNON_MUZZLE_RADIUS
      }
      torus {
        LG_CANNON_MUZZLE_RADIUS,
        LG_CANNON_MUZZLE_SWELL_RADIUS
        rotate <0, 0, 90>
        translate <LG_CANNON_MUZZLE_POINT-LG_CANNON_MUZZLE_SWELL_RADIUS, 0, 0>
      }
    }
    cylinder {
      <LG_CANNON_BASE_POINT-LG_E, 0, 0>,
      <LG_CANNON_BASE_POINT+LG_CORNER_SPACE, 0, 0>,
      0.48+LG_CORNER_SPACE
    }
    cylinder {
      <LG_CANNON_BASE_POINT, 0, 0>,
      <LG_CANNON_BASE_POINT+LG_BRICK_WIDTH, 0, 0>,
      0.48
    }
    cylinder {
      <-1.52, LG_CANNON_BASE_RADIUS+LG_E, 0>,
      <-1.52, -LG_CANNON_BASE_RADIUS-LG_E, 0>,
      0.1
    }
    cylinder {
      <LG_CANNON_BASE_POINT+LG_BRICK_WIDTH-LG_E, 0, 0>,
      <-1.22, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <-1.22-LG_E, 0, 0>,
      <LG_CANNON_MUZZLE_POINT, 0, 0>,
      LG_BRICK_WIDTH/2
    }
    cylinder {
      <LG_CANNON_MUZZLE_POINT-LG_CORNER_SPACE, 0, 0>,
      <LG_CANNON_MUZZLE_POINT+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
  }
  // INTERNAL PIN
  torus {
    0.076-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <2.516-LG_CORNER_SPACE, 0, 0>
  }
  lg_connect_tori_merge (
    <0.3-LG_E, 0, 0>,
    0.132,
    <2.516-LG_CORNER_SPACE, 0, 0>,
    0.076-LG_CORNER_SPACE
  )
  difference {
    cylinder {
      <-0.42, 0, 0>,
      <0.3, 0, 0>,
      LG_BRICK_WIDTH/2+LG_E
    }
    box {
      <-0.42-LG_E, 0.2, -LG_CANNON_BASE_RADIUS>,
      <0.3+LG_E, -0.2, -0.232>
    }
    box {
      <-0.42-LG_E, 0.2, 0.232>,
      <0.3+LG_E, -0.2, LG_CANNON_BASE_RADIUS>
    }
  }
  // SIDE LOGO
  #declare ROT = 0;
  #while (ROT < 2)
  merge {
    sphere {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -0.48+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-0.2+LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <-0.2, -0.48+LG_E, -0.12+LG_CORNER_SPACE>,
      <0.2, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12-LG_CORNER_SPACE>
    }
    box {
      <-0.2+LG_CORNER_SPACE, -0.48, -0.12+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02, 0.12-LG_CORNER_SPACE>
    }
    box {
      <-0.2+LG_CORNER_SPACE, -0.48+LG_E, -0.12>,
      <0.2-LG_CORNER_SPACE, -LG_CANNON_BASE_RADIUS+0.02+LG_CORNER_SPACE, 0.12>
    }
    object {
      lego_logo_text_clear
      rotate x*90
      translate <0, -LG_CANNON_BASE_RADIUS+0.02, 0>
    }
    rotate <0, 0, 180*ROT>
    translate <-0.76, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
