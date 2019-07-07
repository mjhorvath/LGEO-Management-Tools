/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_ls40: LSynth Technic Flexible Axle - End Piece                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_ls40)
#else
#declare LG_E = 0.001;
#declare lg_ls40 = 
union {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -1.60+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.80+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -1.60>,
    <0, 0, -0.80>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -1.60+LG_CORNER_SPACE>,
    <0, 0, -0.80+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    union {
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -0.80>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.80+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    union {
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.66>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.50>
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.36>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.20>
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_E>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.08>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
}

#declare lg_ls40_clear = 
merge {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -1.60+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.80+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -1.60>,
    <0, 0, -0.80>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -1.60+LG_CORNER_SPACE>,
    <0, 0, -0.80+LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    merge {
      cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -0.80>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, -0.80+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    merge {
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.66>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.50>
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.36>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.20>
      }
      box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_E>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -0.08>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
}

#end
