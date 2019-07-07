/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_87414: Tyre 6/50 x 8 Offset Tread with Centre Band                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120902 Owen Burgoyne (based on lg_3641.inc)                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_87414)
#else
#declare TYRE_RADIUS = 0.72;
#declare TYRE_INNER_RADIUS = 0.6;
#declare BAND_WIDTH = LG_CYLINDER_WALL_WIDTH/4;
#declare lg_87414 =
union {
 difference {
  cylinder {
   <-0.16, 0, 0>,
   <0.16, 0, 0>,
   0.4
  }
  union {
   cylinder {
    <-0.16, 0, 0>,
    <0.16, 0, 0>,
    0.32
   }
   cone {
    <-0.2, 0, 0>, 0.45,
    <-0.08, 0, 0>, 0.3
   }
   cone {
    <0.2, 0, 0>, 0.45,
    <0.08, 0, 0>, 0.3
   }
  }
 }
 difference {
  union {
   cylinder {
    <-0.3, 0, 0>,
    <0.3, 0, 0>,
    0.6-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.3-LG_CORNER_SPACE, 0, 0>,
    0.6
   }
  }
  union {
   cylinder {
    <-0.3, 0, 0>,
    <0.3, 0, 0>,
    0.4
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <-0.3-LG_E, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <0.3+LG_E, 0, 0>,
    <0.3-LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   cylinder {
    <0.3, 0, 0>,
    <-LG_CORNER_SPACE, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.3-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 16)
    box {
     <0.3+LG_E, -0.075, 0.72+LG_E>,
     <-LG_CORNER_SPACE-LG_E, 0.075, 0.5>
     rotate <ROT * 360/16, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  union {
   cylinder {
    <-0.3, 0, 0>,
    <LG_CORNER_SPACE, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 16)
    box {
     <-0.3-LG_E, -0.075, 0.72+LG_E>,
     <LG_CORNER_SPACE+LG_E, 0.075, 0.5>
     rotate <(ROT+0.5) * 360/16, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 // BAND
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <BAND_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-BAND_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <BAND_WIDTH, 0, 0>,
        <-BAND_WIDTH, 0, 0>,
        TYRE_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <BAND_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-BAND_WIDTH-LG_CORNER_SPACE, 0, 0>,
        TYRE_RADIUS
      }
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH, 0, 0>,
      <-LG_CYLINDER_WALL_WIDTH, 0, 0>,
      TYRE_INNER_RADIUS
    }
  }
}

#declare lg_87414_clear =
merge {
 difference {
  cylinder {
   <-0.16, 0, 0>,
   <0.16, 0, 0>,
   0.4
  }
  union {
   cylinder {
    <-0.16, 0, 0>,
    <0.16, 0, 0>,
    0.32
   }
   cone {
    <-0.2, 0, 0>, 0.45,
    <-0.08, 0, 0>, 0.3
   }
   cone {
    <0.2, 0, 0>, 0.45,
    <0.08, 0, 0>, 0.3
   }
  }
 }
 difference {
  merge {
   cylinder {
    <-0.3, 0, 0>,
    <0.3, 0, 0>,
    0.6-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.3-LG_CORNER_SPACE, 0, 0>,
    0.6
   }
  }
  union {
   cylinder {
    <-0.3, 0, 0>,
    <0.3, 0, 0>,
    0.4
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <-0.3-LG_E, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <0.3+LG_E, 0, 0>,
    <0.3-LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   cylinder {
    <0.3, 0, 0>,
    <-LG_CORNER_SPACE, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.3-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 16)
    box {
     <0.3+LG_E, -0.075, 0.72+LG_E>,
     <-LG_CORNER_SPACE-LG_E, 0.075, 0.5>
     rotate <ROT * 360/16, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  merge {
   cylinder {
    <-0.3, 0, 0>,
    <LG_CORNER_SPACE, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 16)
    box {
     <-0.3-LG_E, -0.075, 0.72+LG_E>,
     <LG_CORNER_SPACE+LG_E, 0.075, 0.5>
     rotate <(ROT+0.5) * 360/16, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 // BAND
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CYLINDER_WALL_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    TYRE_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <LG_CYLINDER_WALL_WIDTH/2, 0, 0>,
        <-LG_CYLINDER_WALL_WIDTH/2, 0, 0>,
        TYRE_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <LG_CYLINDER_WALL_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        TYRE_RADIUS
      }
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH, 0, 0>,
      <-LG_CYLINDER_WALL_WIDTH, 0, 0>,
      TYRE_INNER_RADIUS
    }
  }
}

#end
