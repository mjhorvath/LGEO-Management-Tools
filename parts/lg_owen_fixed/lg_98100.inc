/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_98100: Brick 2 x 2 Round Sloped (Needs Work)                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-06 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_98100)
#else
#declare lg_angle = 88;
#declare lg_98100 =
union {
  difference {
    union {
      torus {
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while (ROT < 4)
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
      <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cone {
        <0, 0, LG_PLATE_HEIGHT>, LG_BRICK_WIDTH-LG_CORNER_SPACE*sin(lg_angle*pi/180),
        <0, 0, LG_BRICK_HEIGHT*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_BRICK_WIDTH*sin(lg_angle*pi/180),
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-LG_WALL_WIDTH
      }
    }
    cone {
      <0, 0, LG_PLATE_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH*sin(lg_angle*pi/180),
      <0, 0, LG_BRICK_INNER_HEIGHT-LG_WALL_WIDTH*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-(2*LG_WALL_WIDTH)
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_WALL_WIDTH
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  box {
    <LG_CYLINDER_RADIUS-LG_E, LG_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH/2, LG_BRICK_HEIGHT-LG_WALL_WIDTH>
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      union {
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
        }
        box {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, 0.5+LG_E>,
          LG_CROSSAXLE_WIDTH/2
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_E
    }
  }
  object {
    lg_brick_cylinder
  }
  object {
    lg_tech_knob_logo
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_98100_clear =
merge {
  difference {
    merge {
      torus {
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, LG_CORNER_SPACE>,
        <0, 0, LG_PLATE_HEIGHT>,
        LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)
      }
    }
    cylinder {
      <0, 0, -LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_WALL_WIDTH
    }
    #declare ROT = 0;
    #while (ROT < 4)
    cylinder {
      <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_E>,
      <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
      rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cone {
        <0, 0, LG_PLATE_HEIGHT>, LG_BRICK_WIDTH-LG_CORNER_SPACE*sin(lg_angle*pi/180),
        <0, 0, LG_BRICK_HEIGHT*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE
      }
      cone {
        <0, 0, LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_BRICK_WIDTH*sin(lg_angle*pi/180),
        <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-LG_WALL_WIDTH
      }
    }
    cone {
      <0, 0, LG_PLATE_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH*sin(lg_angle*pi/180),
      <0, 0, LG_BRICK_INNER_HEIGHT-LG_WALL_WIDTH*sin(lg_angle*pi/180)>, LG_BRICK_WIDTH-(2*LG_WALL_WIDTH)
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT-LG_E>,
      <0, 0, LG_PLATE_HEIGHT+LG_E>,
      LG_BRICK_WIDTH-(LG_WALL_WIDTH/2)-LG_WALL_WIDTH
    }
  }
  #declare ROT = 0;
  #while (ROT < 4)
  box {
    <LG_CYLINDER_RADIUS-LG_E, LG_WALL_WIDTH/2, LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH/2, LG_BRICK_HEIGHT-LG_WALL_WIDTH>
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
  intersection {
    union {
      #declare ROT = 0;
      #while (ROT < 4)
      merge {
        box {
          <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
        }
        box {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
          <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
        }
        cylinder {
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
          <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, 0.5+LG_E>,
          LG_CROSSAXLE_WIDTH/2
        }
        rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
      #end
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_BRICK_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_E
    }
  }
  object {
    lg_brick_cylinder_clear
  }
  object {
    lg_tech_knob_logo_clear
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
