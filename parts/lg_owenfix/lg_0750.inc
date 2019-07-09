/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_750: Hose Flexible End 1 x 1 x 0.67 with Tabs                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120913 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_750)
#else
#declare lg_750 =
union {
  difference {
    union {
      torus {
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        <0, 0, 2*LG_PLATE_HEIGHT>,LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>,LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH,
        <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_KNOB_RADIUS
      }
      intersection {
        union {
          torus {
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <90, 0, 0>
            translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
          }
          cylinder {
            <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
            <0, 0, 0>,
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH
          }
          cylinder {
            <0, 0, 2*LG_PLATE_HEIGHT>,
            <0, 0, 0>,
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE
          }
        }
        union {
          box {
            <2*LG_KNOB_RADIUS, LG_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
            <2*-LG_KNOB_RADIUS, -LG_WALL_WIDTH/2, 2*LG_PLATE_HEIGHT+LG_E>
          }
          box {
            <LG_WALL_WIDTH/2, 2*LG_KNOB_RADIUS, LG_PLATE_HEIGHT>,
            <-LG_WALL_WIDTH/2, 2*-LG_KNOB_RADIUS, 2*LG_PLATE_HEIGHT+LG_E>
          }
        }
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT>,
      <0, 0, 2*LG_PLATE_HEIGHT+LG_E>,
      LG_WALL_WIDTH
    }
  }
  translate <0, 0, 2*-LG_PLATE_HEIGHT>
}

#declare lg_750_clear =
merge {
  difference {
    merge {
      torus {
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
        <0, 0, 2*LG_PLATE_HEIGHT>,LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)-LG_CORNER_SPACE>,LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH,
        <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_KNOB_RADIUS
      }
      intersection {
        merge {
          torus {
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <90, 0, 0>
            translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
          }
          cylinder {
            <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
            <0, 0, 0>,
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH
          }
          cylinder {
            <0, 0, 2*LG_PLATE_HEIGHT>,
            <0, 0, 0>,
            LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH-LG_CORNER_SPACE
          }
        }
        merge {
          box {
            <2*LG_KNOB_RADIUS, LG_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
            <2*-LG_KNOB_RADIUS, -LG_WALL_WIDTH/2, 2*LG_PLATE_HEIGHT+LG_E>
          }
          box {
            <LG_WALL_WIDTH/2, 2*LG_KNOB_RADIUS, LG_PLATE_HEIGHT>,
            <-LG_WALL_WIDTH/2, 2*-LG_KNOB_RADIUS, 2*LG_PLATE_HEIGHT+LG_E>
          }
        }
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+(LG_PLATE_HEIGHT/8)>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT>,
      <0, 0, 2*LG_PLATE_HEIGHT+LG_E>,
      LG_WALL_WIDTH
    }
  }
  translate <0, 0, 2*-LG_PLATE_HEIGHT>
}

#end
