/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2815: Technic Wedge Belt Wheel Tyre                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-06-28 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2815)
#else
#declare lg_2815 =
union {
  torus {
    1.5*LG_BRICK_WIDTH,
    LG_WALL_WIDTH/2
    rotate <0, 0, 90>
  }
  torus {
    1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <-LG_WALL_WIDTH, 0, 0>,
        <LG_WALL_WIDTH, 0, 0>,
        1.7*LG_BRICK_WIDTH
      }
      torus {
        1.7*LG_BRICK_WIDTH,
        LG_WALL_WIDTH
        rotate <0, 0, 90>
      }
    }
    cylinder {
      <-LG_WALL_WIDTH, 0, 0>,
      <LG_WALL_WIDTH, 0, 0>,
      1.5*LG_BRICK_WIDTH
    }
    cylinder {
      <-LG_WALL_WIDTH-LG_E, 0, 0>,
      <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH+LG_E, 0, 0>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
  }
}

#declare lg_2815_clear =
merge {
  torus {
    1.5*LG_BRICK_WIDTH,
    LG_WALL_WIDTH/2
    rotate <0, 0, 90>
  }
  torus {
    1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      cylinder {
        <-LG_WALL_WIDTH, 0, 0>,
        <LG_WALL_WIDTH, 0, 0>,
        1.7*LG_BRICK_WIDTH
      }
      torus {
        1.7*LG_BRICK_WIDTH,
        LG_WALL_WIDTH
        rotate <0, 0, 90>
      }
    }
    cylinder {
      <-LG_WALL_WIDTH, 0, 0>,
      <LG_WALL_WIDTH, 0, 0>,
      1.5*LG_BRICK_WIDTH
    }
    cylinder {
      <-LG_WALL_WIDTH-LG_E, 0, 0>,
      <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
      <LG_WALL_WIDTH+LG_E, 0, 0>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
  }
}

#end
