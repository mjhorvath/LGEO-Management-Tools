/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30106: Tile 2 x 2 Round with Globe 2 x 2 x 2 [Crystal Globe]             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30106)
#else
#declare lg_30106 = 
difference {
  union {
    torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_CORNER_SPACE>
    }
    torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_BRICK_WIDTH
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+(0.75*LG_KNOB_HEIGHT)>,
      LG_BRICK_WIDTH-(1.5*LG_WALL_WIDTH)
    }
    torus {
      LG_BRICK_WIDTH-(1.5*LG_WALL_WIDTH),
      0.75*LG_KNOB_HEIGHT/2
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT+(0.75*LG_KNOB_HEIGHT/2)>
    }
    sphere {
      <0, 0, LG_BRICK_HEIGHT+(LG_KNOB_HEIGHT/4)>,
      LG_BRICK_WIDTH
    }
  }
  cylinder {
    <0, 0, -LG_E>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
  #declare ROT = 0;
  #while (ROT < 4)
  union {
    cylinder {
      <0.5*-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
      <0.5*-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    box {
      <0, 0.75*LG_KNOB_RADIUS, -LG_E>,
      <-LG_BRICK_WIDTH, 0.75*-LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
      rotate <0, 0, -45>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_E>,
    <0, 0, 4*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    1.3*(LG_BRICK_WIDTH/2)
  }
  #declare ROT = 0;
  #while (ROT < 4)
  intersection {
    box {
      <-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2)>,
      <1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2)>
      scale <1,1,1>*sqrt(1.3*(LG_BRICK_WIDTH/2))
      rotate<0,0,45>
      scale <1,0.36,1>
      rotate<45,0,0>
    }
    box {
      <-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2)>,
      <1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2)>
      scale <1,1,1>*sqrt(1.3*(LG_BRICK_WIDTH/2))
      rotate<0,0,45>
      scale <1,0.36,1>
      rotate<45,0,0>
      scale <1, 1, -1>
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH>,
      <0, 0, LG_BRICK_WIDTH>,
      1.3*(LG_BRICK_WIDTH/2)
    }
    rotate <0, 0, 45*ROT>
    translate <0, 0, 4*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
  }
  #declare ROT = ROT + 1;
  #end
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_30106_clear = 
difference {
  merge {
    torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_CORNER_SPACE>
    }
    torus {
      LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_BRICK_WIDTH
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+(0.75*LG_KNOB_HEIGHT)>,
      LG_BRICK_WIDTH-(1.5*LG_WALL_WIDTH)
    }
    torus {
      LG_BRICK_WIDTH-(1.5*LG_WALL_WIDTH),
      0.75*LG_KNOB_HEIGHT/2
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT+(0.75*LG_KNOB_HEIGHT/2)>
    }
    sphere {
      <0, 0, LG_BRICK_HEIGHT+(LG_KNOB_HEIGHT/4)>,
      LG_BRICK_WIDTH
    }
  }
  cylinder {
    <0, 0, -LG_E>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
  #declare ROT = 0;
  #while (ROT < 4)
  merge {
    cylinder {
      <0.5*-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
      <0.5*-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    box {
      <0, 0.75*LG_KNOB_RADIUS, -LG_E>,
      <-LG_BRICK_WIDTH, 0.75*-LG_KNOB_RADIUS, LG_KNOB_HEIGHT>
      rotate <0, 0, -45>
    }
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_E>,
    <0, 0, 4*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    1.3*(LG_BRICK_WIDTH/2)
  }
  #declare ROT = 0;
  #while (ROT < 4)
  intersection {
    box {
      <-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2)>,
      <1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2)>
      scale <1,1,1>*sqrt(1.3*(LG_BRICK_WIDTH/2))
      rotate<0,0,45>
      scale <1,0.36,1>
      rotate<45,0,0>
    }
    box {
      <-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2),-1.3*(LG_BRICK_WIDTH/2)>,
      <1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2),1.3*(LG_BRICK_WIDTH/2)>
      scale <1,1,1>*sqrt(1.3*(LG_BRICK_WIDTH/2))
      rotate<0,0,45>
      scale <1,0.36,1>
      rotate<45,0,0>
      scale <1, 1, -1>
    }
    cylinder {
      <0, 0, -LG_BRICK_WIDTH>,
      <0, 0, LG_BRICK_WIDTH>,
      1.3*(LG_BRICK_WIDTH/2)
    }
    rotate <0, 0, 45*ROT>
    translate <0, 0, 4*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>
  }
  #declare ROT = ROT + 1;
  #end
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
