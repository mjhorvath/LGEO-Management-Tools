/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_758: ~Hose Flexible 12L Segment                                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_758)
#else
#declare lg_758 =
union {
  torus {
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.206452+LG_CORNER_SPACE>
  }
  torus {
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.09084-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -0.206452+LG_CORNER_SPACE>,
    <0, 0, -0.09084-LG_CORNER_SPACE>,
    2*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.206452>,
    <0, 0, -0.09084>,
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.09084>,
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  sphere {
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
}

#declare lg_758_clear =
merge {
  torus {
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.206452+LG_CORNER_SPACE>
  }
  torus {
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.09084-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, -0.206452+LG_CORNER_SPACE>,
    <0, 0, -0.09084-LG_CORNER_SPACE>,
    2*LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, -0.206452>,
    <0, 0, -0.09084>,
    2*LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, -0.09084>,
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
  sphere {
    <0, 0, 0>,
    LG_KNOB_INNER_RADIUS
  }
}

#end
