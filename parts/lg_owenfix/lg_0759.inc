/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_759: ~Hose Flexible 12L End Segment                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_759)
#else
#declare lg_759 =
union {
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.32+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
  }
  sphere {
    <0, 0, -0.8>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.8>,
    <0, 0, -0.32>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.32>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.32+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <0, 0, -LG_KNOB_CORNER_SPACE>,
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
}

#declare lg_759_clear =
merge {
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.32+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
  }
  sphere {
    <0, 0, -0.8>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.8>,
    <0, 0, -0.32>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.32>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.32+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS-LG_KNOB_CORNER_SPACE
  }
  cylinder {
    <0, 0, -LG_KNOB_CORNER_SPACE>,
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS
  }
}

#end
