/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_14769: Tile 2 x 2 Round with Round Underside Stud                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/* 2014-02-10 Owen Burgoyne increased roundness of top edge                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_14769)
#else
#declare lg_14769 =
union {
  difference {
    union {
      torus {
        LG_BRICK_WIDTH-LG_TILE_GROOVE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
        LG_KNOB_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_KNOB_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_TILE_GROOVE>,
        LG_BRICK_WIDTH-LG_TILE_GROOVE-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH-LG_TILE_GROOVE
      }
      cylinder {
        <0, 0, LG_TILE_GROOVE>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_KNOB_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while ( ROT < 4 )
    union {
      cylinder {
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <0.5*LG_BRICK_WIDTH, -LG_KNOB_RADIUS/1.5, -LG_E>,
        <LG_BRICK_WIDTH, LG_KNOB_RADIUS/1.5, LG_KNOB_HEIGHT>
        rotate <0, 0, 45>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_plate_cylinder
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_14769_clear =
merge {
  difference {
    merge {
      torus {
        LG_BRICK_WIDTH-LG_TILE_GROOVE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
        LG_KNOB_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_KNOB_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_TILE_GROOVE>,
        LG_BRICK_WIDTH-LG_TILE_GROOVE-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH-LG_TILE_GROOVE
      }
      cylinder {
        <0, 0, LG_TILE_GROOVE>,
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_INNER_HEIGHT>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_TILE_GROOVE+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_KNOB_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while ( ROT < 4 )
    merge {
      cylinder {
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <0.5*LG_BRICK_WIDTH, -LG_KNOB_RADIUS/1.5, -LG_E>,
        <LG_BRICK_WIDTH, LG_KNOB_RADIUS/1.5, LG_KNOB_HEIGHT>
        rotate <0, 0, 45>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_plate_cylinder_clear
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
