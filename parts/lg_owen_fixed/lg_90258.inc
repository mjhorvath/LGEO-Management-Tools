/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_90258: Brick 2 x 2 with Slots and Axlehole                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_90258)
#else
#include "lg_macro.inc"
#declare lg_90258 =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      difference {
        union {
          box {
            <-0.6, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
            <0.6, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
          }
          box {
            <-0.6+LG_CORNER_SPACE, 0.6, LG_CORNER_SPACE>,
            <0.6-LG_CORNER_SPACE, -0.6, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
          }
          box {
            <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, 0>,
            <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
          }
        }
        #local ROT = 0;
        #while (ROT < 4)
        box {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, -LG_E>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT+LG_E>
          translate <-0.48, 0.48, 0>
          rotate <0, 0, 90*ROT>
        }
        #local ROT = ROT + 1;
        #end
      }
      #local ROT = 0;
      #while (ROT < 4)
      union {
        sphere {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-0.32, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <-0.32+LG_CORNER_SPACE, 0.32, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, 0>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
        }
        translate <-0.48, 0.48, 0>
        rotate <0, 0, 90*ROT>
      }
      #local ROT = ROT + 1;
      #end
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_E>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>
    }
    #local ROT = 0;
    #while (ROT < 4)
    union {
      cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_E>,
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>
      }
      rotate <0, 0, 90*ROT>
    }
    #local ROT = ROT + 1;
    #end
    cylinder {
      <0, 0, LG_BRICK_INNER_HEIGHT-LG_E>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  object {
    lg_brick_cylinder
  }
  object {
    lg_tech_axlehole_union (LG_PLATE_HEIGHT, LG_BRICK_HEIGHT)
    rotate <0, -90, 0>
  }
  object {
    lg_tech_knob_logo_group_union (2, 2)
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_90258_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.6+LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.6-LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
      }
      difference {
        merge {
          box {
            <-0.6, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
            <0.6, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
          }
          box {
            <-0.6+LG_CORNER_SPACE, 0.6, LG_CORNER_SPACE>,
            <0.6-LG_CORNER_SPACE, -0.6, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
          }
          box {
            <-0.6+LG_CORNER_SPACE, 0.6-LG_CORNER_SPACE, 0>,
            <0.6-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
          }
        }
        #local ROT = 0;
        #while (ROT < 4)
        box {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, -LG_E>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT+LG_E>
          translate <-0.48, 0.48, 0>
          rotate <0, 0, 90*ROT>
        }
        #local ROT = ROT + 1;
        #end
      }
      #local ROT = 0;
      #while (ROT < 4)
      merge {
        sphere {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        sphere {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-0.32+LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <0.32-LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <-0.32, 0.32-LG_CORNER_SPACE, LG_CORNER_SPACE>,
          <0.32, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <-0.32+LG_CORNER_SPACE, 0.32, LG_CORNER_SPACE>,
          <0.32-LG_CORNER_SPACE, -0.32, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <-0.32+LG_CORNER_SPACE, 0.32-LG_CORNER_SPACE, 0>,
          <0.32-LG_CORNER_SPACE, -0.32+LG_CORNER_SPACE, LG_BRICK_HEIGHT>
        }
        translate <-0.48, 0.48, 0>
        rotate <0, 0, 90*ROT>
      }
      #local ROT = ROT + 1;
      #end
    }
    box {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_E>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>
    }
    #local ROT = 0;
    #while (ROT < 4)
    merge {
      cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_E>,
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_E>,
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_INNER_HEIGHT>
      }
      rotate <0, 0, 90*ROT>
    }
    #local ROT = ROT + 1;
    #end
    cylinder {
      <0, 0, LG_BRICK_INNER_HEIGHT-LG_E>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }
  object {
    lg_brick_cylinder_clear
  }
  object {
    lg_tech_axlehole_merge (LG_PLATE_HEIGHT, LG_BRICK_HEIGHT)
    rotate <0, -90, 0>
  }
  object {
    lg_tech_knob_logo_group_merge (2, 2)
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
