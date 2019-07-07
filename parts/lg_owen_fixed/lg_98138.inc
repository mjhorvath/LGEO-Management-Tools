/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_98138: Tile 1 x 1 Round with Groove                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2012-06-06 Owen Burgoyne                                                    */
/* 2013-01-10 Owen Burgoyne increased roundness of top edge                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_98138)
#else
#declare LG_TOP_EDGE = 0.032;
#declare lg_98138 = 
union {
  torus {
    LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE+0.04>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_TOP_EDGE,
    LG_TOP_EDGE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.04>,
        LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.04>,
        LG_BRICK_WIDTH/2-0.04
      }
      cylinder {
        <0, 0, 0.04+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0, 0, 0.04>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2-LG_TOP_EDGE
      }
    }
    cylinder {
      <0, 0, -LG_E>
      <0, 0, LG_PLATE_INNER_HEIGHT>
      LG_KNOB_RADIUS
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_98138_clear = 
merge {
  torus {
    LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE+0.04>
  }
  torus {
    LG_BRICK_WIDTH/2-LG_TOP_EDGE,
    LG_TOP_EDGE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, 0.04>,
        LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, 0.04>,
        LG_BRICK_WIDTH/2-0.04
      }
      cylinder {
        <0, 0, 0.04+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2
      }
      cylinder {
        <0, 0, 0.04>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT-LG_TOP_EDGE>,
        LG_BRICK_WIDTH/2-LG_TOP_EDGE
      }
    }
    cylinder {
      <0, 0, -LG_E>
      <0, 0, LG_PLATE_INNER_HEIGHT>
      LG_KNOB_RADIUS
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end