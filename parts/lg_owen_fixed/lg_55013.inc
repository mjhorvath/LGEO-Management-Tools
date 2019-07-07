/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_55013: Technic Axle 8 with Stop                                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-01 Owen Burgoyne                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_55013)
#else
#declare LENGTH = 8;
#declare lg_55013 =
union {
  difference {
    union {
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
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
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
  }
  cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
    0.3-LG_CORNER_SPACE
  }
  cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>,
    0.3
  }
  torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
}

#declare lg_55013_clear =
merge {
  difference {
    merge {
      torus {
        LG_KNOB_RADIUS-0.08,
        0.08
        translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
        <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
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
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
  }
  cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
    0.3-LG_CORNER_SPACE
  }
  cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>,
    0.3
  }
  torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
}

#end
