/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_99008: Technic Axle 4 with Middle Cylindrical Stop                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-01 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_99008)
#else
#declare LENGTH = 4;
#declare lg_99008 =
union {
  difference {
    union {
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
        LG_KNOB_RADIUS
      }
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
        LG_KNOB_RADIUS-0.08
      }
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
      }
      cylinder {
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
        LG_KNOB_RADIUS-0.08
      }
    }
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      box {
        <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
        <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
        rotate <0, 90*ROT, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_CORNER_SPACE, 0>
  }
  cylinder {
    <0, -LG_CORNER_SPACE, 0>,
    <0, -LENGTH/4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, -LENGTH/4*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
}

#declare lg_99008_clear =
merge {
  difference {
    merge {
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
        LG_KNOB_RADIUS
      }
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
        LG_KNOB_RADIUS-0.08
      }
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
      }
      cylinder {
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
        LG_KNOB_RADIUS-0.08
      }
    }
    merge {
      #declare ROT = 0;
      #while (ROT < 4)
      box {
        <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
        <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
        rotate <0, 90*ROT, 0>
      }
      #declare ROT = ROT + 1;
      #end
    }
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_CORNER_SPACE, 0>
  }
  cylinder {
    <0, -LG_CORNER_SPACE, 0>,
    <0, -LENGTH/4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, -LENGTH/4*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
}

#end
