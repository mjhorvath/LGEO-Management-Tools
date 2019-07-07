/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6542b: Technic Gear 16 Tooth with Clutch Smooth                          */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_6542b)
#else
#declare lg_angle=atan2(1,2);
#declare lg_6542b =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6868-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6868-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2-LG_CORNER_SPACE, 0, 0>
  }
  // TECHNIC TUBE
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  // OUTER CYLINDER
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <0.2-LG_CORNER_SPACE, 0, 0>,
        0.6868
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <0.2, 0, 0>,
        0.6868-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.6+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <0.08, 0, 0>,
      0.6
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
      <0.16, 0, 0>,
      <0.2, 0, 0>,
      0.6
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      0.6+LG_CORNER_SPACE
    }
  }
  // INNER RIBS
  #declare ROT = 0;
  #while (ROT < 4)
  intersection {
    box {
      <0, -0.04, 0>,
      <-0.4, 0.04, 0.08+LG_E>
      rotate <0, 0, 2.5>
    }
    box {
      <0, -0.04, -LG_E>,
      <-0.4, 0.04, 0.08>
      rotate <0, 0, -2.5>
    }
    translate <0.08, 0, -0.6>
    rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
  // TEETH
  #declare ROT = 0;
  #while (ROT < 16)
  union {
    box {
      <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    }
    difference {
      box {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
      }
      union {
        box {
          <0, 0, 0.3>,
          <(LG_WALL_WIDTH)/cos(lg_angle), 0.2, -0.3>
          rotate <0, 0, -lg_angle*180/pi>
          translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
        }
        box {
          <0, 0, 0.3>,
          <(LG_WALL_WIDTH)/cos(lg_angle), -0.2, -0.3>
          rotate <0, 0, lg_angle*180/pi>
          translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
        }
      }
    }
    box {
      <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
    }
    box {
      <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
    }
    cylinder {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
    }
    translate <0.6, 0, 0>
    rotate <0, 0, ROT*22.5>
    rotate <0, 90, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_6542b_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6868-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.6868-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2-LG_CORNER_SPACE, 0, 0>
  }
  // TECHNIC TUBE
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      0.3+LG_CORNER_SPACE
    }
  }
  // OUTER CYLINDER
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <0.2-LG_CORNER_SPACE, 0, 0>,
        0.6868
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, 0, 0>,
        <0.2, 0, 0>,
        0.6868-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.6+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <0.08, 0, 0>,
      0.6
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      LG_BEAM_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
      <0.16, 0, 0>,
      <0.2, 0, 0>,
      0.6
    }
    cylinder {
      <0.2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2, 0, 0>,
      0.6+LG_CORNER_SPACE
    }
  }
  // INNER RIBS
  #declare ROT = 0;
  #while (ROT < 4)
  intersection {
    box {
      <0, -0.04, 0>,
      <-0.4, 0.04, 0.08+LG_E>
      rotate <0, 0, 2.5>
    }
    box {
      <0, -0.04, -LG_E>,
      <-0.4, 0.04, 0.08>
      rotate <0, 0, -2.5>
    }
    translate <0.08, 0, -0.6>
    rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
  #end
  // TEETH
  #declare ROT = 0;
  #while (ROT < 16)
  merge {
    box {
      <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    }
    difference {
      box {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
      }
      merge {
        box {
          <0, 0, 0.3>,
          <(LG_WALL_WIDTH)/cos(lg_angle), 0.2, -0.3>
          rotate <0, 0, -lg_angle*180/pi>
          translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
        }
        box {
          <0, 0, 0.3>,
          <(LG_WALL_WIDTH)/cos(lg_angle), -0.2, -0.3>
          rotate <0, 0, lg_angle*180/pi>
          translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
        }
      }
    }
    box {
      <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
    }
    box {
      <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
    }
    cylinder {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
    }
    translate <0.6, 0, 0>
    rotate <0, 0, ROT*22.5>
    rotate <0, 90, 0>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
