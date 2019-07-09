/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_87697: Tyre 12/40 x 11 Wide with Center Band                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120902 Owen Burgoyne (based on lg_6015.inc)                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_87697)
#else
#declare BAND_WIDTH = LG_CYLINDER_WALL_WIDTH/4;
#declare lg_87697 =
union {
 difference {
  union {
   cylinder {
    <-0.56, 0, 0>,
    <0.56, 0, 0,>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.56+LG_CORNER_SPACE, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.84
   }
  }
  union {
   cylinder {
    <-0.56, 0, 0>,
    <-0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <0.56, 0, 0>,
    <0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <-0.08, 0, 0>,
    <0.08, 0, 0,>,
    0.5
   }
   intersection {
    union {
     cone {
      <-0.02, 0, 0>,0.46 
      <-0.08-LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
     cone {
      <0.02, 0, 0>,0.46 
      <0.08+LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
    }
    cylinder {
     <0.1, 0, 0>,
     <-0.1, 0, 0,>,
     0.56
    }
   }
   cylinder {
    <-0.56-LG_E, 0, 0>,
    <-0.56+LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.56+LG_E, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    union {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <-LG_CORNER_SPACE, -0.095, 1-LG_CORNER_SPACE>,
       <0.6, 0.095, 0.8-LG_CORNER_SPACE>
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
   <0.48, 0, 0>,
   <-0.48, 0, 0>,
   1-LG_CORNER_SPACE
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
       <0, -0.095, 1>,
       <0.6, 0.095, 0.8>
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
    <0.48-LG_CORNER_SPACE, 0, 0>,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    1
   }
   cone {
    <0.56-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <0.48-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   cone {
    <-0.56+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <-0.48+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.48-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 // BAND
  torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <BAND_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-BAND_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <BAND_WIDTH, 0, 0>,
        <-BAND_WIDTH, 0, 0>,
        1-LG_CORNER_SPACE
      }
      cylinder {
        <BAND_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-BAND_WIDTH-LG_CORNER_SPACE, 0, 0>,
        1
      }
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH, 0, 0>,
      <-LG_CYLINDER_WALL_WIDTH, 0, 0>,
      0.84
    }
  }
}

#declare lg_87697_clear =
merge {
 difference {
  merge {
   cylinder {
    <-0.56, 0, 0>,
    <0.56, 0, 0,>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.56+LG_CORNER_SPACE, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.84
   }
  }
  merge {
   cylinder {
    <-0.56, 0, 0>,
    <-0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <0.56, 0, 0>,
    <0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <-0.08, 0, 0>,
    <0.08, 0, 0,>,
    0.5
   }
   intersection {
    merge {
     cone {
      <-0.02, 0, 0>,0.46 
      <-0.08-LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
     cone {
      <0.02, 0, 0>,0.46 
      <0.08+LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
    }
    cylinder {
     <0.1, 0, 0>,
     <-0.1, 0, 0,>,
     0.56
    }
   }
   cylinder {
    <-0.56-LG_E, 0, 0>,
    <-0.56+LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.56+LG_E, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 2)
    merge {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <-LG_CORNER_SPACE, -0.095, 1-LG_CORNER_SPACE>,
       <0.6, 0.095, 0.8-LG_CORNER_SPACE>
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
   <0.48, 0, 0>,
   <-0.48, 0, 0>,
   1-LG_CORNER_SPACE
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
       <0, -0.095, 1>,
       <0.6, 0.095, 0.8>
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
    <0.48-LG_CORNER_SPACE, 0, 0>,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    1
   }
   cone {
    <0.56-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <0.48-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   cone {
    <-0.56+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <-0.48+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.48-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 // BAND
  torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_CYLINDER_WALL_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  difference {
    union {
      cylinder {
        <LG_CYLINDER_WALL_WIDTH/2, 0, 0>,
        <-LG_CYLINDER_WALL_WIDTH/2, 0, 0>,
        1-LG_CORNER_SPACE
      }
      cylinder {
        <LG_CYLINDER_WALL_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <-LG_CYLINDER_WALL_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        1
      }
    }
    cylinder {
      <LG_CYLINDER_WALL_WIDTH, 0, 0>,
      <-LG_CYLINDER_WALL_WIDTH, 0, 0>,
      0.84
    }
  }
}

#end
