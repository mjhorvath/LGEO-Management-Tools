/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_85975: Minifig Hat Fez                                                   */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120916 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_85975)
#else
#declare lg_85975 =
union {
  object {
    lg_tech_knob
  }
  torus {
    LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  difference {
    union {
      cone {
        <0, 0, 0>, LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
        <0, 0, 2*-LG_PLATE_HEIGHT>, LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE
      }
      cone {
        <0, 0, -LG_CORNER_SPACE/1.05>, LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8),
        <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)
      }
    }
    cylinder {
      <0, 0, -LG_WALL_WIDTH>,
      <0, 0, 2*-LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-(LG_PLATE_HEIGHT/4)>,
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_WALL_WIDTH/2
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    box {
      <LG_WALL_WIDTH/2, LG_KNOB_RADIUS, 2*-LG_PLATE_HEIGHT>,
      <-LG_WALL_WIDTH/2, LG_KNOB_RADIUS+LG_WALL_WIDTH/2, 0>
    }
    box {
      <LG_WALL_WIDTH/2, LG_KNOB_RADIUS-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-(LG_PLATE_HEIGHT/4)>,
      <-LG_WALL_WIDTH/2, LG_KNOB_RADIUS+LG_WALL_WIDTH/2, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_85975_clear =
merge {
  object {
    lg_tech_knob_clear
  }
  torus {
    LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  difference {
    merge {
      cone {
        <0, 0, 0>, LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE,
        <0, 0, 2*-LG_PLATE_HEIGHT>, LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)-LG_CORNER_SPACE
      }
      cone {
        <0, 0, -LG_CORNER_SPACE/1.05>, LG_BRICK_WIDTH/2-((LG_BRICK_WIDTH/2)/8),
        <0, 0, 2*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_BRICK_WIDTH/2+((LG_BRICK_WIDTH/2)/8)
      }
    }
    cylinder {
      <0, 0, -LG_WALL_WIDTH>,
      <0, 0, 2*-LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-(LG_PLATE_HEIGHT/4)>,
      <0, 0, 2*-LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_WALL_WIDTH/2
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    box {
      <LG_WALL_WIDTH/2, LG_KNOB_RADIUS, 2*-LG_PLATE_HEIGHT>,
      <-LG_WALL_WIDTH/2, LG_KNOB_RADIUS+LG_WALL_WIDTH/2, 0>
    }
    box {
      <LG_WALL_WIDTH/2, LG_KNOB_RADIUS-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-(LG_PLATE_HEIGHT/4)>,
      <-LG_WALL_WIDTH/2, LG_KNOB_RADIUS+LG_WALL_WIDTH/2, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
