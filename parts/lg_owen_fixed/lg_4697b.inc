/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_4697b: Technic Pneumatic T-Piece - Type 2                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4697b)
#else
#include "lg_macro.inc"
#local LG_LENGTH_NOZZLE = LG_BRICK_WIDTH;
#local LG_RADIUS_NOZZLE = 0.16;
#local LG_RADIUS_NOZZLE_TIP = 0.12;
#local LG_RADIUS_NOZZLE_HOLE = 0.08;
#declare lg_4697b =
union {
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+0.04>
  }
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+0.04, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-0.04, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      lg_connect_tori_union (
        <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>,
        LG_RADIUS_NOZZLE_TIP,
        <0, 0, -LG_LENGTH_NOZZLE+0.04>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE
      )
      lg_connect_tori_union (
        <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_NOZZLE_TIP,
        <-LG_LENGTH_NOZZLE+0.04, 0, 0>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE
      )
      lg_connect_tori_union (
        <LG_LENGTH_NOZZLE-0.04, 0, 0>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
        <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_NOZZLE_TIP
      )
      cylinder {
        <0, 0, -LG_LENGTH_NOZZLE+0.04>,
        <0, 0, 0>,
        LG_RADIUS_NOZZLE
      }
      cylinder {
        <-LG_LENGTH_NOZZLE+0.04, 0, 0>,
        <LG_LENGTH_NOZZLE-0.04, 0, 0>,
        LG_RADIUS_NOZZLE
      }
      sphere {
        <0, 0, 0>,
        0.226
      }
    }
    cylinder {
      <0, 0, -LG_LENGTH_NOZZLE-LG_E>,
      <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -LG_LENGTH_NOZZLE>,
      <0, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <-LG_LENGTH_NOZZLE-LG_E, 0, 0>,
      <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_LENGTH_NOZZLE, 0, 0>,
      <LG_LENGTH_NOZZLE, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>,
      <LG_LENGTH_NOZZLE+LG_E, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
  }
}

#declare lg_4697b_clear =
merge {
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_LENGTH_NOZZLE+0.04>
  }
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_LENGTH_NOZZLE+0.04, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-0.04, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_TIP,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    merge {
      lg_connect_tori_merge (
        <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>,
        LG_RADIUS_NOZZLE_TIP,
        <0, 0, -LG_LENGTH_NOZZLE+0.04>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE
      )
      lg_connect_tori_merge (
        <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_NOZZLE_TIP,
        <-LG_LENGTH_NOZZLE+0.04, 0, 0>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE
      )
      lg_connect_tori_merge (
        <LG_LENGTH_NOZZLE-0.04, 0, 0>,
        LG_RADIUS_NOZZLE-LG_CORNER_SPACE,
        <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>,
        LG_RADIUS_NOZZLE_TIP
      )
      cylinder {
        <0, 0, -LG_LENGTH_NOZZLE+0.04>,
        <0, 0, 0>,
        LG_RADIUS_NOZZLE
      }
      cylinder {
        <-LG_LENGTH_NOZZLE+0.04, 0, 0>,
        <LG_LENGTH_NOZZLE-0.04, 0, 0>,
        LG_RADIUS_NOZZLE
      }
      sphere {
        <0, 0, 0>,
        0.226
      }
    }
    cylinder {
      <0, 0, -LG_LENGTH_NOZZLE-LG_E>,
      <0, 0, -LG_LENGTH_NOZZLE+LG_CORNER_SPACE>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -LG_LENGTH_NOZZLE>,
      <0, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <-LG_LENGTH_NOZZLE-LG_E, 0, 0>,
      <-LG_LENGTH_NOZZLE+LG_CORNER_SPACE, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_LENGTH_NOZZLE, 0, 0>,
      <LG_LENGTH_NOZZLE, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE
    }
    cylinder {
      <LG_LENGTH_NOZZLE-LG_CORNER_SPACE, 0, 0>,
      <LG_LENGTH_NOZZLE+LG_E, 0, 0>,
      LG_RADIUS_NOZZLE_HOLE+LG_CORNER_SPACE
    }
  }
}

#end
