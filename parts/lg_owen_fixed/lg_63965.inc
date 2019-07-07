/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_63965: Bar 6L with Thick Stop                                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-06-28 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_63965)
#else
#declare lg_63965 = 
union {
  cylinder {
    <0, 0, 0.9*-LG_BRICK_WIDTH>,
    <0, 0, 5.15*LG_BRICK_WIDTH>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, 0.9*-LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    <0, 0, 5.15*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5.15*LG_BRICK_WIDTH-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.9*-LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 0.9375*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.9375*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.9375*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
}

#declare lg_63965_clear = 
merge {
  cylinder {
    <0, 0, 0.9*-LG_BRICK_WIDTH>,
    <0, 0, 5.15*LG_BRICK_WIDTH>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, 0.9*-LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    <0, 0, 5.15*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 5.15*LG_BRICK_WIDTH-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.9*-LG_BRICK_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, 0.9375*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.9375*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.9375*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
}

#end
