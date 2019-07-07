/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_11610: Cone 1 x 1 Inverted with Shaft                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-07-27 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_11610)
#else
#include "shapes.inc"
#declare LG_CONE_CORNER_SPACE = LG_CORNER_SPACE/5.43333;
#declare lg_11610 = 
union {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)>,
    <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    object {
      Round_Cone_Union (
        <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>, (LG_KNOB_RADIUS/8*7)-LG_CONE_CORNER_SPACE,
        <0, 0, 0>, LG_BRICK_WIDTH/2+LG_CONE_CORNER_SPACE,
        LG_CORNER_SPACE
      )
    }
    cone {
      <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>, LG_KNOB_RADIUS/8
      <0, 0, -LG_PLATE_HEIGHT-(1.5*LG_KNOB_HEIGHT)>, (LG_KNOB_INNER_RADIUS/8)*7
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-(1.5*LG_KNOB_HEIGHT)>,
      <0, 0, 0>,
      (LG_KNOB_INNER_RADIUS/8)*7
    }
    cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      (LG_KNOB_INNER_RADIUS/8)*7+LG_CORNER_SPACE
    }
  }
  torus {
    (LG_KNOB_INNER_RADIUS/8)*7+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  object {
    lg_tech_knob
  }
}

#declare lg_11610 = 
merge {
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)>,
    <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, 4*-LG_PLATE_HEIGHT-(LG_KNOB_HEIGHT/8)+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)>,
    LG_KNOB_INNER_RADIUS
  }
  difference {
    object {
      Round_Cone_Merge (
        <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>, (LG_KNOB_RADIUS/8*7)-LG_CONE_CORNER_SPACE,
        <0, 0, 0>, LG_BRICK_WIDTH/2+LG_CONE_CORNER_SPACE,
        LG_CORNER_SPACE
      )
    }
    cone {
      <0, 0, -LG_BRICK_HEIGHT+(1.25*LG_KNOB_HEIGHT)-LG_CORNER_SPACE>, LG_KNOB_RADIUS/8
      <0, 0, -LG_PLATE_HEIGHT-(1.5*LG_KNOB_HEIGHT)>, (LG_KNOB_INNER_RADIUS/8)*7
    }
    cylinder {
      <0, 0, -LG_PLATE_HEIGHT-(1.5*LG_KNOB_HEIGHT)>,
      <0, 0, 0>,
      (LG_KNOB_INNER_RADIUS/8)*7
    }
    cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      (LG_KNOB_INNER_RADIUS/8)*7+LG_CORNER_SPACE
    }
  }
  torus {
    (LG_KNOB_INNER_RADIUS/8)*7+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  object {
    lg_tech_knob_clear
  }
}

#end
