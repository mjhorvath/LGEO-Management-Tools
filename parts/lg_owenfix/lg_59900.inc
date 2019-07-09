/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_59900: Cone 1 x 1 with Stop                                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2012-08-28 Owen Burgoyne (based on lg_4589.inc)                             */
/* 2014-02-10 Owen Burgoyne rewritten using "lg_macro.inc"                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_59900)
#else
#include "lg_macro.inc"
#declare lg_59900 =
union {
  object {
    lg_plate_cylinder
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  object {
    lg_tech_axlehole_union (1.5*LG_KNOB_HEIGHT, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE)
    rotate <0, -90, 0>
  }
  difference {
    lg_connect_tori_union (
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+0.02-LG_CORNER_SPACE
    )
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  object {
    lg_tech_knob
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_59900_clear =
merge {
  object {
    lg_plate_cylinder_clear
  }
  torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS+0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  object {
    lg_tech_axlehole_merge (1.5*LG_KNOB_HEIGHT, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE)
    rotate <0, -90, 0>
  }
  difference {
    lg_connect_tori_merge (
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+0.02-LG_CORNER_SPACE
    )
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_E>,
      <0, 0, LG_BRICK_HEIGHT+LG_E>,
      LG_KNOB_INNER_RADIUS
    }
  }
  object {
    lg_tech_knob_clear
    translate <0, 0, LG_BRICK_HEIGHT>
  }
  translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
