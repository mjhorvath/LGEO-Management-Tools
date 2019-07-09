/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30648: Tyre 24 x 14 with Shallow Staggered Treads                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120902 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30648)
#else
#declare TYRE_RADIUS = 1.19;
#declare TYRE_TREAD_DEPTH = 1.16;
#declare TYRE_TREAD_UPPER_SLOPE = 1.14;
#declare TYRE_TREAD_LOWER_SLOPE = 1.11;
#declare TYRE_INNER_RADIUS = 0.83+LG_CORNER_SPACE;
#declare TYRE_WIDTH = 0.715;
#declare TREAD_WIDTH = 0.665;
#declare INNER_RIDGE_RADIUS = 0.73;
#declare INNER_RIDGE_MIN = LG_CYLINDER_WALL_WIDTH;
#declare INNER_RIDGE_MAX = 2*LG_CYLINDER_WALL_WIDTH;
#declare lg_30648 =
union {
  // WHEEL BASE
  difference {
    union {
      cylinder {
        <-TYRE_WIDTH, 0, 0>,
        <TYRE_WIDTH, 0, 0,>,
        TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE
      }
      cylinder {
        <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0,>,
        TYRE_TREAD_DEPTH
      }
      cone {
        <-TYRE_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE/3
        <-TREAD_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_DEPTH-LG_CORNER_SPACE/3
      }
      cone {
        <TYRE_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE/3
        <TREAD_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_DEPTH-LG_CORNER_SPACE/3
      }
    }
    union {
      cylinder {
        <-TYRE_WIDTH, 0, 0>,
        <-INNER_RIDGE_MAX, 0, 0,>,
        TYRE_INNER_RADIUS
      }
      cylinder {
        <TYRE_WIDTH, 0, 0>,
        <INNER_RIDGE_MAX, 0, 0,>,
        TYRE_INNER_RADIUS
      }
      cylinder {
        <-INNER_RIDGE_MAX, 0, 0>,
        <INNER_RIDGE_MAX, 0, 0,>,
        INNER_RIDGE_RADIUS 
      }
      intersection {
        union {
          cone {
            <-INNER_RIDGE_MIN, 0, 0>, INNER_RIDGE_RADIUS 
            <-INNER_RIDGE_MAX-LG_E*0.6, 0, 0,>, TYRE_INNER_RADIUS+LG_E
          }
          cone {
            <INNER_RIDGE_MIN, 0, 0>, INNER_RIDGE_RADIUS 
            <INNER_RIDGE_MAX+LG_E*0.6, 0, 0,>, TYRE_INNER_RADIUS+LG_E
          }
        }
        cylinder {
          <INNER_RIDGE_MAX+LG_E, 0, 0>,
          <-INNER_RIDGE_MAX-LG_E, 0, 0,>,
          TYRE_INNER_RADIUS
        }
      }
      cylinder {
        <-TYRE_WIDTH-LG_E, 0, 0>,
        <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0,>,
        TYRE_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <TYRE_WIDTH+LG_E, 0, 0>,
        <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0,>,
        TYRE_INNER_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  torus {
    TYRE_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_DEPTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_DEPTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  // TREAD
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 2)
      union {
        #declare ROT2 = 0;
        #while (ROT2 < 18)
        box {
          <-LG_CORNER_SPACE, -0.105, TYRE_RADIUS-LG_CORNER_SPACE>,
          <TYRE_WIDTH+LG_E, 0.105, 1-LG_CORNER_SPACE>
          rotate <ROT2*20+5, 0, 0>
        }
        #declare ROT2 = ROT2 + 1;
        #end
        #if (ROT=1)
        rotate <0, 0, 180>
        #end
      }
    #declare ROT = ROT + 1;
    #end
    }
    cylinder {
      <TREAD_WIDTH, 0, 0>,
      <-TREAD_WIDTH, 0, 0>,
      TYRE_RADIUS-LG_CORNER_SPACE
    }
  }
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 2)
      union {
        #declare ROT2 = 0;
        #while (ROT2 < 18)
        box {
          <0, -0.105, TYRE_RADIUS>,
          <TYRE_WIDTH+LG_E, 0.105, 0.9>
          rotate <ROT2*20+5, 0, 0>
        }
        #declare ROT2 = ROT2 + 1;
        #end
        #if (ROT=1)
        rotate <0, 0, 180>
        #end
      }
    #declare ROT = ROT + 1;
    #end
    }
    union {
      cylinder {
        <TYRE_WIDTH, 0, 0>,
        <-TYRE_WIDTH, 0, 0>,
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE
      }
      cylinder {
        <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>,
        TYRE_RADIUS
      }
      cone {
        <TYRE_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE/3
        <TREAD_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_RADIUS-LG_CORNER_SPACE/3
      }
      cone {
        <-TYRE_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE/3
        <-TREAD_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_RADIUS-LG_CORNER_SPACE/3
      }
      torus {
        TYRE_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
    }
  }
  // CENTRE BAND
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
  }
}

#declare lg_30648_clear =
merge {
  // WHEEL BASE
  difference {
    merge {
      cylinder {
        <-TYRE_WIDTH, 0, 0>,
        <TYRE_WIDTH, 0, 0,>,
        TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE
      }
      cylinder {
        <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0,>,
        TYRE_TREAD_DEPTH
      }
      cone {
        <-TYRE_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE/3
        <-TREAD_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_DEPTH-LG_CORNER_SPACE/3
      }
      cone {
        <TYRE_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE/3
        <TREAD_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_DEPTH-LG_CORNER_SPACE/3
      }
    }
    merge {
      cylinder {
        <-TYRE_WIDTH, 0, 0>,
        <-INNER_RIDGE_MAX, 0, 0,>,
        TYRE_INNER_RADIUS
      }
      cylinder {
        <TYRE_WIDTH, 0, 0>,
        <INNER_RIDGE_MAX, 0, 0,>,
        TYRE_INNER_RADIUS
      }
      cylinder {
        <-INNER_RIDGE_MAX, 0, 0>,
        <INNER_RIDGE_MAX, 0, 0,>,
        INNER_RIDGE_RADIUS 
      }
      intersection {
        merge {
          cone {
            <-INNER_RIDGE_MIN, 0, 0>, INNER_RIDGE_RADIUS 
            <-INNER_RIDGE_MAX-LG_E*0.6, 0, 0,>, TYRE_INNER_RADIUS+LG_E
          }
          cone {
            <INNER_RIDGE_MIN, 0, 0>, INNER_RIDGE_RADIUS 
            <INNER_RIDGE_MAX+LG_E*0.6, 0, 0,>, TYRE_INNER_RADIUS+LG_E
          }
        }
        cylinder {
          <INNER_RIDGE_MAX+LG_E, 0, 0>,
          <-INNER_RIDGE_MAX-LG_E, 0, 0,>,
          TYRE_INNER_RADIUS
        }
      }
      cylinder {
        <-TYRE_WIDTH-LG_E, 0, 0>,
        <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0,>,
        TYRE_INNER_RADIUS+LG_CORNER_SPACE
      }
      cylinder {
        <TYRE_WIDTH+LG_E, 0, 0>,
        <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0,>,
        TYRE_INNER_RADIUS+LG_CORNER_SPACE
      }
    }
  }
  torus {
    TYRE_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_DEPTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_LOWER_SLOPE-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_TREAD_DEPTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  // TREAD
  intersection {
    merge {
      #declare ROT = 0;
      #while (ROT < 2)
      merge {
        #declare ROT2 = 0;
        #while (ROT2 < 18)
        box {
          <-LG_CORNER_SPACE, -0.105, TYRE_RADIUS-LG_CORNER_SPACE>,
          <TYRE_WIDTH+LG_E, 0.105, 1-LG_CORNER_SPACE>
          rotate <ROT2*20+5, 0, 0>
        }
        #declare ROT2 = ROT2 + 1;
        #end
        #if (ROT=1)
        rotate <0, 0, 180>
        #end
      }
    #declare ROT = ROT + 1;
    #end
    }
    cylinder {
      <TREAD_WIDTH, 0, 0>,
      <-TREAD_WIDTH, 0, 0>,
      TYRE_RADIUS-LG_CORNER_SPACE
    }
  }
  intersection {
    merge {
      #declare ROT = 0;
      #while (ROT < 2)
      merge {
        #declare ROT2 = 0;
        #while (ROT2 < 18)
        box {
          <0, -0.105, TYRE_RADIUS>,
          <TYRE_WIDTH+LG_E, 0.105, 0.9>
          rotate <ROT2*20+5, 0, 0>
        }
        #declare ROT2 = ROT2 + 1;
        #end
        #if (ROT=1)
        rotate <0, 0, 180>
        #end
      }
    #declare ROT = ROT + 1;
    #end
    }
    merge {
      cylinder {
        <TYRE_WIDTH, 0, 0>,
        <-TYRE_WIDTH, 0, 0>,
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE
      }
      cylinder {
        <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>,
        TYRE_RADIUS
      }
      cone {
        <TYRE_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE/3
        <TREAD_WIDTH-LG_CORNER_SPACE/4, 0, 0>, TYRE_RADIUS-LG_CORNER_SPACE/3
      }
      cone {
        <-TYRE_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE/3
        <-TREAD_WIDTH+LG_CORNER_SPACE/4, 0, 0>, TYRE_RADIUS-LG_CORNER_SPACE/3
      }
      torus {
        TYRE_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <TREAD_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-TREAD_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <TYRE_WIDTH-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        TYRE_TREAD_UPPER_SLOPE-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <-TYRE_WIDTH+LG_CORNER_SPACE, 0, 0>
      }
    }
  }
  // CENTRE BAND
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
  }
}

#end
