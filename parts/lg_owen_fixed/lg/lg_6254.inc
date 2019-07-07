/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_6254: Minifig Food Ice Cream Scoops                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_6254)
#else
#declare lg_6254 = 
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT+0.04-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_INNER_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT+0.04>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT+0.04-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+0.04>, 0.24
        <0, 0, LG_PLATE_HEIGHT+0.04+0.48>, 0.12
      }
      #declare ROT = 0;
      #while (ROT < 3)
      sphere {
        <0.24, 0, LG_PLATE_HEIGHT+0.288>,
        0.248
        rotate <0, 0, 120*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      sphere {
        <0, 0, LG_PLATE_HEIGHT+0.72>,
        0.248
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, 2*LG_PLATE_HEIGHT-0.04>,
      LG_KNOB_INNER_RADIUS
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_6254_clear = 
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT+0.04-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_INNER_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT+0.04>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT+0.04-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+0.04>, 0.24
        <0, 0, LG_PLATE_HEIGHT+0.04+0.48>, 0.12
      }
      #declare ROT = 0;
      #while (ROT < 3)
      sphere {
        <0.24, 0, LG_PLATE_HEIGHT+0.288>,
        0.248
        rotate <0, 0, 120*ROT>
      }
      #declare ROT = ROT + 1;
      #end
      sphere {
        <0, 0, LG_PLATE_HEIGHT+0.72>,
        0.248
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_E>,
      <0, 0, 2*LG_PLATE_HEIGHT-0.04>,
      LG_KNOB_INNER_RADIUS
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
