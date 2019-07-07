/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_45590: Technic Axle Joiner Double Flexible                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_45590)
#else
#declare LG_NEGATIVE_CYLINDER = LG_BEAM_WIDTH/2;  // Radius of new cylinder to use for cutting
#declare R1 = LG_BEAM_WIDTH/2;                    // Radius of visible cylinder
#declare R2 = LG_NEGATIVE_CYLINDER;               // [Radius of new cylinder to use for cutting]
#declare C1 = <0, LG_BRICK_WIDTH/2, 0>;           // Centre of visible cylinder
#declare Y2 = sqrt(pow(R1+R2,2)-pow(C1.y,2));     // Position on the Y axis - UP [+], DOWN [-]
#declare C2 = <0, 0, Y2>;                         // Centre of new cylinder
#declare YT = C1.y*R1/(R1+R2);                    // Tangent on the Y axis - UP [+], DOWN [-]
#declare ZT = C2.z*R2/(R1+R2);                    // Tangent on the Z axis - LEFT [+], RIGHT [-]
#declare T = <0, ZT, YT>;                         // Combined tangent point
#declare lg_45590 = 
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      box {
        <-LG_BRICK_WIDTH/2, T.z, -T.y>,
        <LG_BRICK_WIDTH/2, -T.z, T.y>
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, -Y2>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, -Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, -Y2>,
      LG_NEGATIVE_CYLINDER
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, -Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, Y2>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, Y2>,
      LG_NEGATIVE_CYLINDER
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
  }
  intersection {
    union {
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, Y2>
      }
    }
    box {
      <-LG_BRICK_WIDTH/2, T.z, -T.y>,
      <LG_BRICK_WIDTH/2, -T.z, T.y>
    }
  }
  #declare AXLE_X = 0;
  #while (AXLE_X < 2)
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    torus {
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    torus {
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      LG_CROSSAXLE_WIDTH/2
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE
    }
    box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    rotate <90*ROT, 0, 0>
    translate <0, AXLE_X*-LG_BRICK_WIDTH+LG_BRICK_WIDTH/2, 0>
  }
  #declare ROT = ROT + 1;
  #end
  #declare AXLE_X = AXLE_X + 1;
  #end
  translate <0, -LG_BRICK_WIDTH/2, 0>
}

#declare lg_45590_clear = 
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
      box {
        <-LG_BRICK_WIDTH/2, T.z, -T.y>,
        <LG_BRICK_WIDTH/2, -T.z, T.y>
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, -Y2>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, -Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, -Y2>,
      LG_NEGATIVE_CYLINDER
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, -Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, Y2>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, Y2>,
      LG_NEGATIVE_CYLINDER
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, Y2>,
      <LG_BRICK_WIDTH/2+LG_E, 0, Y2>,
      LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE
    }
  }
  intersection {
    merge {
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -Y2>
      }
      torus {
        LG_NEGATIVE_CYLINDER+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, Y2>
      }
    }
    box {
      <-LG_BRICK_WIDTH/2, T.z, -T.y>,
      <LG_BRICK_WIDTH/2, -T.z, T.y>
    }
  }
  #declare AXLE_X = 0;
  #while (AXLE_X < 2)
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    torus {
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    torus {
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      LG_CROSSAXLE_WIDTH/2
    }
    cylinder {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>,
      LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE
    }
    box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, -LG_CROSSAXLE_WIDTH>
    }
    rotate <90*ROT, 0, 0>
    translate <0, AXLE_X*-LG_BRICK_WIDTH+LG_BRICK_WIDTH/2, 0>
  }
  #declare ROT = ROT + 1;
  #end
  #declare AXLE_X = AXLE_X + 1;
  #end
  translate <0, -LG_BRICK_WIDTH/2, 0>
}

#end
