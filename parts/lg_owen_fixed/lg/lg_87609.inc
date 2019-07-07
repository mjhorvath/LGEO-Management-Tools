/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_87609: Plate 2 x 6 x 0.667 with Four Studs on Side and Four Raised       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-06-28 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_87609)
#else
#declare LENGTH = 6;
#declare WIDTH = 2;
#declare lg_87609 = 
union {
  #declare MIR = 0;
  #while (MIR < 2)
  union {
    sphere {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    difference {
      union {
        box {
          <0, 0, LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_CORNER_SPACE, 0, 0>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT>
        }
        box {
          <1*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
        }
      }
      box {
        <LG_WALL_WIDTH, LG_E, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, (LENGTH/2)*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_E, LG_PLATE_INNER_HEIGHT-0.00001>,
        <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 1.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
    }
    #if (MIR = 1)
      scale <1, -1, 1>
    #end
  }
  box {
    <LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH, LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_INNER_HEIGHT>,
    <WIDTH*LG_BRICK_WIDTH, -LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  #declare MIR = MIR + 1;
  #end
  #declare KNOB_Y = 0;
  #while (KNOB_Y < LENGTH)
    object {
      lg_knob
      translate <0.5*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
      translate <0, (LENGTH/2)*LG_BRICK_WIDTH, 0>
    }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  object {
    lg_knob
    translate <1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
  }
  #declare KNOB_Y = 0;
  #while (KNOB_Y < 4)
    object {
      lg_knob
      translate <1.5*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  object {
    lg_knob
    translate <1.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
  }
  #declare KNOB_Y = 0;
  #while (KNOB_Y < 4)
  union {
    object {
      lg_tech_knob_logo
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    rotate <90, 0, 90>
    translate <2*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
    translate <0, 2*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  intersection {
    union {
      object {
        lg_brick_cylinder
        translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      object {
        lg_brick_cylinder
        translate <LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder
        translate <LG_BRICK_WIDTH, 0*LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder
        translate <LG_BRICK_WIDTH, 1*-LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder
        translate <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
    }
    union {
      box {
        <LG_CORNER_SPACE, (LENGTH/2)*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_INNER_HEIGHT>,
        <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
    }
  }
  translate <1.5*-LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
}

#declare lg_87609_clear = 
merge {
  #declare MIR = 0;
  #while (MIR < 2)
  merge {
    sphere {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder  {
      <LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    sphere {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
    }
    difference {
      merge {
        box {
          <0, 0, LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <LG_CORNER_SPACE, 0, 0>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT>
        }
        box {
          <1*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
        }
        box {
          <1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
          <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>
        }
      }
      box {
        <LG_WALL_WIDTH, LG_E, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, (LENGTH/2)*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      box {
        <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_E, LG_PLATE_INNER_HEIGHT-0.00001>,
        <WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 1.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <0.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 0.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 1.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
      }
      object {
        lg_knob_inner_space
        translate <1.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
      }
    }
    #if (MIR = 1)
      scale <1, -1, 1>
    #end
  }
  box {
    <LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH, LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_INNER_HEIGHT>,
    <WIDTH*LG_BRICK_WIDTH, -LG_CYLINDER_WALL_WIDTH/2, LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>
  }
  #declare MIR = MIR + 1;
  #end
  #declare KNOB_Y = 0;
  #while (KNOB_Y < LENGTH)
    object {
      lg_knob_clear
      translate <0.5*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
      translate <0, (LENGTH/2)*LG_BRICK_WIDTH, 0>
    }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  object {
    lg_knob_clear
    translate <1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
  }
  #declare KNOB_Y = 0;
  #while (KNOB_Y < 4)
    object {
      lg_knob_clear
      translate <1.5*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT>
      translate <0, 2*LG_BRICK_WIDTH, 0>
    }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  object {
    lg_knob_clear
    translate <1.5*LG_BRICK_WIDTH, 2.5*-LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
  }
  #declare KNOB_Y = 0;
  #while (KNOB_Y < 4)
  merge {
    object {
      lg_tech_knob_logo_clear
    }
    cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
    }
    rotate <90, 0, 90>
    translate <2*LG_BRICK_WIDTH, (0.5+KNOB_Y)*-LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_KNOB_RADIUS>
    translate <0, 2*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_Y = KNOB_Y + 1;
  #end
  intersection {
    merge {
      object {
        lg_brick_cylinder_clear
        translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      object {
        lg_brick_cylinder_clear
        translate <LG_BRICK_WIDTH, 1*LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder_clear
        translate <LG_BRICK_WIDTH, 0*LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder_clear
        translate <LG_BRICK_WIDTH, 1*-LG_BRICK_WIDTH, 0>
      }
      object {
        lg_brick_cylinder_clear
        translate <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, 0>
      }
      cylinder {
        <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>,
        <LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
    }
    merge {
      box {
        <LG_CORNER_SPACE, (LENGTH/2)*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
        <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, (LENGTH/2)*-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      box {
        <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_INNER_HEIGHT>,
        <WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
    }
  }
  translate <1.5*-LG_BRICK_WIDTH, 0, -2*LG_PLATE_HEIGHT>
}

#end
