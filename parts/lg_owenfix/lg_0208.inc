/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_208: Minifig Chain Link End                                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_208)
#else
#local LG_CHAIN_LENGTH = 0.58;
#local LG_CHAIN_WIDTH = 0.32;
#local LG_CHAIN_RADIUS = 0.06;
#declare lg_208 =
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
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
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
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-LG_E>,
        <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_CHAIN_LENGTH, LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        <0, LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        LG_CHAIN_RADIUS
      }
      cylinder {
        <-LG_CHAIN_LENGTH, -LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        <0, -LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        LG_CHAIN_RADIUS
      }
      intersection {
        torus {
          LG_CHAIN_WIDTH/2,
          LG_CHAIN_RADIUS
          rotate <90, 0, 0>
          translate <-LG_CHAIN_LENGTH, 0, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>
        }
        box {
          <-LG_CHAIN_LENGTH-LG_CHAIN_WIDTH/2-LG_CHAIN_RADIUS, LG_CHAIN_WIDTH/2+LG_CHAIN_RADIUS, LG_PLATE_HEIGHT-2*LG_CHAIN_RADIUS>,
          <-LG_CHAIN_LENGTH, -LG_CHAIN_WIDTH/2-LG_CHAIN_RADIUS, LG_PLATE_HEIGHT>
        }
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
  }
  object {
    lg_tech_knob
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_208_clear =
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
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
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
      cylinder {
        <0, 0, LG_PLATE_HEIGHT-LG_E>,
        <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <-LG_CHAIN_LENGTH, LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        <0, LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        LG_CHAIN_RADIUS
      }
      cylinder {
        <-LG_CHAIN_LENGTH, -LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        <0, -LG_CHAIN_WIDTH/2, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>,
        LG_CHAIN_RADIUS
      }
      intersection {
        torus {
          LG_CHAIN_WIDTH/2,
          LG_CHAIN_RADIUS
          rotate <90, 0, 0>
          translate <-LG_CHAIN_LENGTH, 0, LG_PLATE_HEIGHT-LG_CHAIN_RADIUS>
        }
        box {
          <-LG_CHAIN_LENGTH-LG_CHAIN_WIDTH/2-LG_CHAIN_RADIUS, LG_CHAIN_WIDTH/2+LG_CHAIN_RADIUS, LG_PLATE_HEIGHT-2*LG_CHAIN_RADIUS>,
          <-LG_CHAIN_LENGTH, -LG_CHAIN_WIDTH/2-LG_CHAIN_RADIUS, LG_PLATE_HEIGHT>
        }
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
    torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
  }
  object {
    lg_tech_knob_clear
    translate <0, 0, LG_PLATE_HEIGHT>
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
