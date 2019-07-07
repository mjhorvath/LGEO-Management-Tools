/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_33291: Plate 1 × 1 Round with Tabs                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_33291)
#else
#declare lg_33291 =
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_INNER_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_CORNER_SPACE-LG_E>,
      <0, 0, LG_PLATE_HEIGHT-0.08>,
      LG_KNOB_RADIUS-LG_INNER_CORNER_SPACE
    }
    torus {
      LG_KNOB_RADIUS-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT-0.08-LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_E>,
      <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      0.08+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08>,
      <0, 0, LG_PLATE_HEIGHT>,
      0.08
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      0.08+LG_CORNER_SPACE
    }
  }
  #local ROT = 0;
  #while (ROT < 4)
  union {
    difference {
      union {
        cylinder {
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT>
        }
        rotate <0, 0, 45>
      }
      box {
        <-LG_CYLINDER_RADIUS-0.36, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_E>,
        <LG_CYLINDER_RADIUS+0.36, -LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_E>
      }
      box {
        <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CYLINDER_RADIUS+0.36, -LG_E>,
        <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_CYLINDER_RADIUS-0.36, LG_PLATE_HEIGHT+LG_E>
      }
    }
    cylinder {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <-LG_KNOB_INNER_RADIUS, LG_KNOB_RADIUS-LG_E, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    box {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36+LG_E, LG_PLATE_HEIGHT>
    }
    union {
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-0.08>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS
      }
      scale <1, 0.75, 1>
      translate <0, 0.36, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #local ROT = ROT + 1;
  #end
  object {
    lg_tech_knob_join
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  object {
    lg_tech_knob
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_33291_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>
  }
  torus {
    0.08+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_INNER_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_CORNER_SPACE-LG_E>,
      <0, 0, LG_PLATE_HEIGHT-0.08>,
      LG_KNOB_RADIUS-LG_INNER_CORNER_SPACE
    }
    torus {
      LG_KNOB_RADIUS-LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT-0.08-LG_INNER_CORNER_SPACE>
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08-LG_E>,
      <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      0.08+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-0.08>,
      <0, 0, LG_PLATE_HEIGHT>,
      0.08
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      0.08+LG_CORNER_SPACE
    }
  }
  #local ROT = 0;
  #while (ROT < 4)
  merge {
    difference {
      merge {
        cylinder {
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        box {
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
          <LG_CYLINDER_RADIUS, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT-0.08>,
          <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS/2, LG_PLATE_HEIGHT>
        }
        rotate <0, 0, 45>
      }
      box {
        <-LG_CYLINDER_RADIUS-0.36, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_E>,
        <LG_CYLINDER_RADIUS+0.36, -LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT+LG_E>
      }
      box {
        <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CYLINDER_RADIUS+0.36, -LG_E>,
        <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_CYLINDER_RADIUS-0.36, LG_PLATE_HEIGHT+LG_E>
      }
    }
    cylinder {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    box {
      <-LG_KNOB_INNER_RADIUS, LG_KNOB_RADIUS-LG_E, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
      <LG_KNOB_INNER_RADIUS, 0.36, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    box {
      <-LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT-0.08>,
      <LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, 0.36+LG_E, LG_PLATE_HEIGHT>
    }
    merge {
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-0.08>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-0.08+LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS
      }
      scale <1, 0.75, 1>
      translate <0, 0.36, 0>
    }
    rotate <0, 0, 90*ROT>
  }
  #local ROT = ROT + 1;
  #end
  object {
    lg_tech_knob_join_clear
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  object {
    lg_tech_knob_clear
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
