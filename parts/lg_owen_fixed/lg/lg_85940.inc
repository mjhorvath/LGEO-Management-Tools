/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_85940: Technic Beam 2 with Angled Bar                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-29 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_85940)
#else
#declare lg_85940 =
union {
  #declare HOLE_X = -1;
  #while (HOLE_X < 1)
  object {
    lg_tech_tube
    rotate <90, 0, 0>
    translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
  #end
  difference {
    union {
      box {
        <0, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>
      }
      box {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04>
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      box {
        <0, -LG_BEAM_WIDTH/2, -0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, 0.04-LG_CORNER_SPACE>
      }
      box {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, 0.04>
      }
      cylinder {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
  }
  difference {
    union {
      torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <0, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <0, 0, 0>,
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <1.5*LG_BRICK_WIDTH, 0, 0>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      rotate <0, 0, -45>
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
  }
}

#declare lg_85940_clear =
merge {
  #declare HOLE_X = -1;
  #while (HOLE_X < 1)
  object {
    lg_tech_tube_clear
    rotate <90, 0, 0>
    translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
  #end
  difference {
    merge {
      box {
        <0, LG_BEAM_WIDTH/2, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>
      }
      box {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04>
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      box {
        <0, -LG_BEAM_WIDTH/2, -0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, 0.04-LG_CORNER_SPACE>
      }
      box {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04>,
        <-LG_BRICK_WIDTH, LG_BEAM_WIDTH/2, 0.04>
      }
      cylinder {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
        <-LG_BRICK_WIDTH, -LG_BEAM_WIDTH/2+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
    cylinder {
      <-LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
  }
  difference {
    merge {
      torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <0, 0, 0>,
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <LG_BRICK_WIDTH/2, 0, 0>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      cylinder {
        <0, 0, 0>,
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, 0, 0>,
        <1.5*LG_BRICK_WIDTH, 0, 0>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      rotate <0, 0, -45>
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2>,
      0.3+LG_CORNER_SPACE+LG_E
    }
  }
}

#end
