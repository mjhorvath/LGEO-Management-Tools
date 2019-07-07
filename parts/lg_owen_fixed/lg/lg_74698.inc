/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_74698: Tile 2 x 2 Round with Technic Half Beam                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_74698)
#else
#declare lg_74698 = 
union {
  difference {
    union {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while ( ROT < 4 )
    union {
      cylinder {
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <0, -LG_KNOB_RADIUS/1.5, -LG_E>,
        <LG_BRICK_WIDTH, LG_KNOB_RADIUS/1.5, LG_KNOB_HEIGHT>
        rotate <0, 0, 45>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_plate_cylinder
  }
  // TECHNIC HALF BEAM
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>
  }
  difference {
    union {
      box {
        <-LG_KNOB_HEIGHT/2, -LG_BEAM_WIDTH/2, LG_PLATE_HEIGHT-LG_E>,
        <LG_KNOB_HEIGHT/2, LG_BEAM_WIDTH/2, 0.88>
      }
      #declare MIR = 0;
      #while (MIR < 2)
      union {
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH/4, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>
        }
        box {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2, 0.88>
        }
        #if (MIR = 1)
        scale <1, -1, 1>
        #end
      }
      #declare MIR = MIR + 1;
      #end
      cylinder {
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>,
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/4, 0, 0.88>,
        <LG_BRICK_WIDTH/4, 0, 0.88>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0.88>,
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0.88>,
      <-LG_BRICK_WIDTH/4+0.08, 0, 0.88>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0.88>,
      <LG_BRICK_WIDTH/4, 0, 0.88>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/4-0.08, 0, 0.88>,
      <LG_BRICK_WIDTH/4, 0, 0.88>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>,
      <LG_BRICK_WIDTH/4+LG_E, 0, 0.88>,
      0.3+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_74698_clear = 
merge {
  difference {
    merge {
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      torus {
        LG_BRICK_WIDTH-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_BRICK_WIDTH
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while ( ROT < 4 )
    merge {
      cylinder {
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
        <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        LG_KNOB_RADIUS
      }
      box {
        <0, -LG_KNOB_RADIUS/1.5, -LG_E>,
        <LG_BRICK_WIDTH, LG_KNOB_RADIUS/1.5, LG_KNOB_HEIGHT>
        rotate <0, 0, 45>
      }
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  object {
    lg_plate_cylinder_clear
  }
  // TECHNIC HALF BEAM
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>
  }
  torus {
    LG_BEAM_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>
  }
  difference {
    merge {
      box {
        <-LG_KNOB_HEIGHT/2, -LG_BEAM_WIDTH/2, LG_PLATE_HEIGHT-LG_E>,
        <LG_KNOB_HEIGHT/2, LG_BEAM_WIDTH/2, 0.88>
      }
      #declare MIR = 0;
      #while (MIR < 2)
      merge {
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        cylinder {
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_E>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.88>,
          LG_CORNER_SPACE
        }
        box {
          <-LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH/4, LG_BEAM_WIDTH/2-LG_CORNER_SPACE, 0.88>
        }
        box {
          <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_PLATE_HEIGHT>,
          <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_BEAM_WIDTH/2, 0.88>
        }
        #if (MIR = 1)
        scale <1, -1, 1>
        #end
      }
      #declare MIR = MIR + 1;
      #end
      cylinder {
        <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>,
        <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>,
        LG_BEAM_WIDTH/2
      }
      cylinder {
        <-LG_BRICK_WIDTH/4, 0, 0.88>,
        <LG_BRICK_WIDTH/4, 0, 0.88>,
        LG_BEAM_WIDTH/2-LG_CORNER_SPACE
      }
    }
    cylinder {
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0.88>,
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0.88>,
      0.3+LG_CORNER_SPACE
    }
    cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0.88>,
      <-LG_BRICK_WIDTH/4+0.08, 0, 0.88>,
      0.3
    }
    cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0.88>,
      <LG_BRICK_WIDTH/4, 0, 0.88>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <LG_BRICK_WIDTH/4-0.08, 0, 0.88>,
      <LG_BRICK_WIDTH/4, 0, 0.88>,
      0.3
    }
    cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0.88>,
      <LG_BRICK_WIDTH/4+LG_E, 0, 0.88>,
      0.3+LG_CORNER_SPACE
    }
  }
  translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
