/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_connect: Technic Pin with Base Collar                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120909 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_connect)
#else
#declare lg_connect = 
union {
  difference {
    union {
      torus {
        0.32-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_WALL_WIDTH/2-LG_CORNER_SPACE>
      }
      torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <0.5, 1, 0.5>
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_WIDTH-0.04>
      }
      cylinder {
        <0, 0, LG_WALL_WIDTH/2>,
        <0, 0, 0>,
        0.32-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
        <0, 0, 0>,
        0.32
      }
      cylinder {
        <0, 0, LG_BRICK_WIDTH>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    union {
      cylinder {
        <0, 0, LG_BRICK_WIDTH+LG_E>,
        <0, 0, -LG_E>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, LG_KNOB_RADIUS+LG_E, 0.50>,
        <0, -LG_KNOB_RADIUS-LG_E, 0.50>,
        0.04
      }
      box {
        <0.04, LG_CYLINDER_RADIUS, 0.50>,
        <-0.04, -LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E>
      }
    }
  }
}

#declare lg_connect_clear = 
merge {
  difference {
    merge {
      torus {
        0.32-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_WALL_WIDTH/2-LG_CORNER_SPACE>
      }
      torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <0.5, 1, 0.5>
        rotate <90, 0, 0>
        translate <0, 0, LG_BRICK_WIDTH-0.04>
      }
      cylinder {
        <0, 0, LG_WALL_WIDTH/2>,
        <0, 0, 0>,
        0.32-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_WALL_WIDTH/2-LG_CORNER_SPACE>,
        <0, 0, 0>,
        0.32
      }
      cylinder {
        <0, 0, LG_BRICK_WIDTH>,
        <0, 0, 0>,
        LG_KNOB_RADIUS
      }
    }
    merge {
      cylinder {
        <0, 0, LG_BRICK_WIDTH+LG_E>,
        <0, 0, -LG_E>,
        LG_KNOB_INNER_RADIUS
      }
      cylinder {
        <0, LG_KNOB_RADIUS+LG_E, 0.50>,
        <0, -LG_KNOB_RADIUS-LG_E, 0.50>,
        0.04
      }
      box {
        <0.04, LG_CYLINDER_RADIUS, 0.50>,
        <-0.04, -LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E>
      }
    }
  }
}

#end
