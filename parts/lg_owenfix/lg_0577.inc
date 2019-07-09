/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_577: Minifig Lightsaber Hilt                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-04-05 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_577)
#else
#include "shapes.inc"
#declare lg_577 = 
union {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 5*-LG_PLATE_HEIGHT>,
        <0, 0, 4*-LG_PLATE_HEIGHT>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, 5*-LG_PLATE_HEIGHT>,
      <0, 0, 5*-LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, 5*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT>,
    <0, 0, -LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    union {
      torus {
        0.85*LG_CYLINDER_RADIUS-2*LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 4.375*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 4.375*-LG_PLATE_HEIGHT>,
        <0, 0, 4*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.85*LG_CYLINDER_RADIUS-2*LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4.375*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 4*-LG_PLATE_HEIGHT>,
        0.85*LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      object {
        Round_Cone(
          <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>, 0.85*LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
          <0, 0, 3.75*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
          LG_CORNER_SPACE, 1
        )
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
    <0.075, 0.075, 4.5*-LG_PLATE_HEIGHT>,
    <LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 3.5*-LG_PLATE_HEIGHT>
    rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1.5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>
  }
  cylinder {
    <0, 0, 1.5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>,
    <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>,
    1.25*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 1.5*-LG_PLATE_HEIGHT>,
    <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06>,
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>
  }
  cylinder {
    <0, 0, 1*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>,
    <0, 0, 1*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>,
    1.25*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 1*-LG_PLATE_HEIGHT>,
    <0, 0, 1*-LG_PLATE_HEIGHT+0.06>,
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
  }
  cylinder {
    <0, 0, -LG_KNOB_HEIGHT>,
    <0, 0, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
  }
  object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
  }
}

#declare lg_577_clear = 
merge {
  torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
      }
      cylinder {
        <0, 0, 5*-LG_PLATE_HEIGHT>,
        <0, 0, 4*-LG_PLATE_HEIGHT>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
    }
    cylinder {
      <0, 0, 5*-LG_PLATE_HEIGHT>,
      <0, 0, 5*-LG_PLATE_HEIGHT+LG_PLATE_INNER_HEIGHT>,
      LG_KNOB_INNER_RADIUS
    }
    cylinder {
      <0, 0, 5*-LG_PLATE_HEIGHT-LG_E>,
      <0, 0, 5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT>,
    <0, 0, -LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    merge {
      torus {
        0.85*LG_CYLINDER_RADIUS-2*LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 4.375*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 4.375*-LG_PLATE_HEIGHT>,
        <0, 0, 4*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.85*LG_CYLINDER_RADIUS-2*LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, 4.375*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <0, 0, 4*-LG_PLATE_HEIGHT>,
        0.85*LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      object {
        Round_Cone(
          <0, 0, 4*-LG_PLATE_HEIGHT-LG_CORNER_SPACE>, 0.85*LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
          <0, 0, 3.75*-LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
          LG_CORNER_SPACE, 1
        )
      }
    }
    #declare ROT = 0;
    #while (ROT < 4)
    box {
    <0.075, 0.075, 4.5*-LG_PLATE_HEIGHT>,
    <LG_CYLINDER_RADIUS, LG_CYLINDER_RADIUS, 3.5*-LG_PLATE_HEIGHT>
    rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
    #end
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1.5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>
  }
  cylinder {
    <0, 0, 1.5*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>,
    <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>,
    1.25*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 1.5*-LG_PLATE_HEIGHT>,
    <0, 0, 1.5*-LG_PLATE_HEIGHT+0.06>,
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>
  }
  torus {
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2,
    LG_CORNER_SPACE/2
    rotate <90, 0, 0>
    translate <0, 0, 1*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>
  }
  cylinder {
    <0, 0, 1*-LG_PLATE_HEIGHT+LG_CORNER_SPACE/2>,
    <0, 0, 1*-LG_PLATE_HEIGHT+0.06-LG_CORNER_SPACE/2>,
    1.25*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, 1*-LG_PLATE_HEIGHT>,
    <0, 0, 1*-LG_PLATE_HEIGHT+0.06>,
    1.25*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE/2
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
  }
  cylinder {
    <0, 0, -LG_KNOB_HEIGHT>,
    <0, 0, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
  }
  object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
  }
}

#end
