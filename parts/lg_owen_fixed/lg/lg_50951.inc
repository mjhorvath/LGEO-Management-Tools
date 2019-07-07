/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_50951: Tyre 6/30 x 11                                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-11-23 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_50951)
#else
#local LG_TYRE_RADIUS_EDGE = 0.04;
#local LG_TYRE_RADIUS_INNER_GROOVE = 0.48;
#local LG_TYRE_RADIUS_INNER = 0.56;
#local LG_TYRE_RADIUS_OUTER = 0.76;
#local LG_TYRE_WIDTH = 0.64;
#declare lg_50951 =
union {
  torus {
    LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_TYRE_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <LG_TYRE_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE,
    LG_TYRE_RADIUS_EDGE
    rotate z*90
    translate <-LG_TYRE_WIDTH/2+LG_TYRE_RADIUS_EDGE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE,
    LG_TYRE_RADIUS_EDGE
    rotate z*90
    translate <LG_TYRE_WIDTH/2-LG_TYRE_RADIUS_EDGE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_TYRE_WIDTH/2+LG_TYRE_RADIUS_EDGE, 0, 0>,
        <LG_TYRE_WIDTH/2-LG_TYRE_RADIUS_EDGE, 0, 0>,
        LG_TYRE_RADIUS_OUTER
      }
      cylinder {
        <-LG_TYRE_WIDTH/2, 0, 0>,
        <LG_TYRE_WIDTH/2, 0, 0>,
        LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE
      }
    }
    cylinder {
      <-LG_TYRE_WIDTH/2-LG_E, 0, 0>,
      <-LG_TYRE_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_TYRE_WIDTH, 0, 0>,
      <-0.16, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cone {
      <-0.16-LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER,
      <-0.04, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE
    }
    cylinder {
      <-0.04-LG_E, 0, 0>,
      <0.04+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE
    }
    cone {
      <0.04, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE,
      <0.16+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cylinder {
      <0.16, 0, 0>,
      <LG_TYRE_WIDTH/2, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cylinder {
      <LG_TYRE_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_TYRE_WIDTH/2+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE
    }
  }
}

#declare lg_50951_clear =
merge {
  torus {
    LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-LG_TYRE_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <LG_TYRE_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE,
    LG_TYRE_RADIUS_EDGE
    rotate z*90
    translate <-LG_TYRE_WIDTH/2+LG_TYRE_RADIUS_EDGE, 0, 0>
  }
  torus {
    LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE,
    LG_TYRE_RADIUS_EDGE
    rotate z*90
    translate <LG_TYRE_WIDTH/2-LG_TYRE_RADIUS_EDGE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_TYRE_WIDTH/2+LG_TYRE_RADIUS_EDGE, 0, 0>,
        <LG_TYRE_WIDTH/2-LG_TYRE_RADIUS_EDGE, 0, 0>,
        LG_TYRE_RADIUS_OUTER
      }
      cylinder {
        <-LG_TYRE_WIDTH/2, 0, 0>,
        <LG_TYRE_WIDTH/2, 0, 0>,
        LG_TYRE_RADIUS_OUTER-LG_TYRE_RADIUS_EDGE
      }
    }
    cylinder {
      <-LG_TYRE_WIDTH/2-LG_E, 0, 0>,
      <-LG_TYRE_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_TYRE_WIDTH, 0, 0>,
      <-0.16, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cone {
      <-0.16-LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER,
      <-0.04, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE
    }
    cylinder {
      <-0.04-LG_E, 0, 0>,
      <0.04+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE
    }
    cone {
      <0.04, 0, 0>,
      LG_TYRE_RADIUS_INNER_GROOVE,
      <0.16+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cylinder {
      <0.16, 0, 0>,
      <LG_TYRE_WIDTH/2, 0, 0>,
      LG_TYRE_RADIUS_INNER
    }
    cylinder {
      <LG_TYRE_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_TYRE_WIDTH/2+LG_E, 0, 0>,
      LG_TYRE_RADIUS_INNER+LG_CORNER_SPACE
    }
  }
}

#end
