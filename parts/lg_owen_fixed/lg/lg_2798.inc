/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2798: ~Technic Pneumatic Cylinder 2 x 2 x 4                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2798)
#else
#include "lg_macro.inc"
#local LG_HEIGHT_CYLINDER_TOP = 3.68;
#local LG_HEIGHT_CYLINDER_MID = 2.80;
#local LG_RADIUS_CYLINDER_OUTER = 0.76;
#local LG_RADIUS_CYLINDER_MID = 0.68;
#local LG_RADIUS_CYLINDER_INNER = 0.60;
#local LG_HEIGHT_SIDE_SNAP = 3.40;
#local LG_RADIUS_SIDE_SNAP = 0.20;
#local LENGTH = 2;
#declare lg_2798 =
union {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_HEIGHT_CYLINDER_MID>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_E>,
        <0, 0, LG_HEIGHT_CYLINDER_MID+LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID>,
        <0, 0, LG_HEIGHT_CYLINDER_TOP>,
        LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_HEIGHT_CYLINDER_TOP>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_TOP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    torus {
      LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_CYLINDER_MID+LG_CORNER_SPACE>
    }
  }
  // SIDE SNAPS
  #declare MIR = 0;
  #while (MIR < 2)
  difference {
    union {
      difference {
        union {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, 0>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_RADIUS_SIDE_SNAP+LG_E>
        }
      }
      difference {
        union {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          matrix <1, 0, 0, 0, 1, 0, 0, -0.5, 1, 0, 0, 0>
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, -LG_RADIUS_SIDE_SNAP-LG_E>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_RADIUS_SIDE_SNAP, 0>
        }
      }
      #if (MIR = 1)
      scale <1, -1, 1>
      #end
      translate <0, 0, LG_HEIGHT_SIDE_SNAP>
    }
    cylinder {
      <0, 0, LG_HEIGHT_SIDE_SNAP-LG_RADIUS_SIDE_SNAP-LG_E>,
      <0, 0, LG_HEIGHT_SIDE_SNAP+LG_RADIUS_SIDE_SNAP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_E
    }
    rotate <0, 0, 90>
  }
  #declare MIR = MIR + 1;
  #end
  translate <0, 0, -LG_HEIGHT_CYLINDER_TOP>
}

#declare lg_2798_clear =
merge {
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>
  }
  torus {
    LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_HEIGHT_CYLINDER_MID>,
        LG_RADIUS_CYLINDER_OUTER-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_OUTER
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_E>,
        <0, 0, LG_HEIGHT_CYLINDER_MID+LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID>,
        <0, 0, LG_HEIGHT_CYLINDER_TOP>,
        LG_RADIUS_CYLINDER_MID-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_HEIGHT_CYLINDER_MID-LG_CORNER_SPACE>,
        <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>,
        LG_RADIUS_CYLINDER_MID
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_HEIGHT_CYLINDER_TOP>,
      LG_RADIUS_CYLINDER_INNER
    }
    cylinder {
      <0, 0, LG_HEIGHT_CYLINDER_TOP-LG_CORNER_SPACE>,
      <0, 0, LG_HEIGHT_CYLINDER_TOP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_CORNER_SPACE
    }
    torus {
      LG_RADIUS_CYLINDER_MID+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_HEIGHT_CYLINDER_MID+LG_CORNER_SPACE>
    }
  }
  // SIDE SNAPS
  #declare MIR = 0;
  #while (MIR < 2)
  difference {
    merge {
      difference {
        merge {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, 0>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_RADIUS_SIDE_SNAP+LG_E>
        }
      }
      difference {
        merge {
          torus {
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            translate <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
            LG_RADIUS_SIDE_SNAP
          }
          cylinder {
            <0, 0, 0>,
            <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
            LG_RADIUS_SIDE_SNAP-LG_CORNER_SPACE
          }
          matrix <1, 0, 0, 0, 1, 0, 0, -0.5, 1, 0, 0, 0>
        }
        box {
          <-LG_RADIUS_SIDE_SNAP-LG_E, -LG_E, -LG_RADIUS_SIDE_SNAP-LG_E>,
          <LG_RADIUS_SIDE_SNAP+LG_E, LENGTH/2*LG_BRICK_WIDTH+LG_RADIUS_SIDE_SNAP, 0>
        }
      }
      #if (MIR = 1)
      scale <1, -1, 1>
      #end
      translate <0, 0, LG_HEIGHT_SIDE_SNAP>
    }
    cylinder {
      <0, 0, LG_HEIGHT_SIDE_SNAP-LG_RADIUS_SIDE_SNAP-LG_E>,
      <0, 0, LG_HEIGHT_SIDE_SNAP+LG_RADIUS_SIDE_SNAP+LG_E>,
      LG_RADIUS_CYLINDER_INNER+LG_E
    }
    rotate <0, 0, 90>
  }
  #declare MIR = MIR + 1;
  #end
  translate <0, 0, -LG_HEIGHT_CYLINDER_TOP>
}

#end
