/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30027a: Wheel 8 x 8 Hub                                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */ 
/* 19990113 Lutz Uhlmann                                                       */
/* 20120811 Owen Burgoyne created "a" variant with correct LDraw orientation   */
/*          and LEGO logo                                                      */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30027a)
#else
#declare lg_30027a =
union {
 difference {
  union {
   difference {
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0.04, 0, 0>,
      0.4
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.04, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.32
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    union {
     cylinder {
      <-0.2, 0, 0>,
      <0, 0, 0>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.24
     }
    }
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <-0.2-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <0.6-LG_CORNER_SPACE, 0, 0>,
      <0.36, 0, 0>,
      0.4
     }
     cylinder {
      <0.6, 0, 0>,
      <0.36, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.36, 0, 0>,
      <0.04, 0, 0>,
      0.34
     }
     cone {
      <0.36, 0, 0>, 0.4
      <0.30, 0, 0>, 0.34
     }
     cone {
      <0.04, 0, 0>, 0.4
      <0.1, 0, 0>, 0.34
     }
    }
    union {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.32
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.32+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.32
      <0.23, 0, 0>, 0.2
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.16, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.24, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 cylinder {
  <0.45, 0, 0>,
  <0.28, 0, 0>,
  0.16
 }
 box {
  <0.45, 0.06, 0.32>,
  <0.28, -0.06, -0.32>
 }
 box {
  <0.45, 0.32, 0.06>,
  <0.28, -0.32, -0.06>
 }
 #if (lg_quality > 2)
 object {
  lego_logo_text
  rotate <90, 0, 90>
  scale <1, 0.7, 0.7>
  translate <0.45, 0, 0>
 }
 #end
 translate <-LG_BRICK_WIDTH/4, 0, 0>
}

#declare lg_30027a_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0.04, 0, 0>,
      0.4
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.04, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.32
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    merge {
     cylinder {
      <-0.2, 0, 0>,
      <0, 0, 0>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.24
     }
    }
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <-0.2-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <0.6-LG_CORNER_SPACE, 0, 0>,
      <0.36, 0, 0>,
      0.4
     }
     cylinder {
      <0.6, 0, 0>,
      <0.36, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.36, 0, 0>,
      <0.04, 0, 0>,
      0.34
     }
     cone {
      <0.36, 0, 0>, 0.4
      <0.30, 0, 0>, 0.34
     }
     cone {
      <0.04, 0, 0>, 0.4
      <0.1, 0, 0>, 0.34
     }
    }
    union {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.32
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.32+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.32
      <0.23, 0, 0>, 0.2
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.16, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.24, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 cylinder {
  <0.45, 0, 0>,
  <0.28, 0, 0>,
  0.16
 }
 box {
  <0.45, 0.06, 0.32>,
  <0.28, -0.06, -0.32>
 }
 box {
  <0.45, 0.32, 0.06>,
  <0.28, -0.32, -0.06>
 }
 #if (lg_quality > 2)
 object {
  lego_logo_text_clear
  rotate <90, 0, 90>
  scale <1, 0.7, 0.7>
  translate <0.45, 0, 0>
 }
 #end
 translate <-LG_BRICK_WIDTH/4, 0, 0>
}

#end
