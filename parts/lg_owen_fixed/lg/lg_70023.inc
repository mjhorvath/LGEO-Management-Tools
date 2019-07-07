/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_70023: ~Magnet Cylindrical                                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-11-23 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_70023)
#else
#declare lg_70023 =
union {
  torus {
    0.50-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.35+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.50-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.35-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    <0.35-LG_CORNER_SPACE, 0, 0>,
    0.50
  }
  cylinder {
    <-0.35, 0, 0>,
    <0.35, 0, 0>,
    0.50-LG_CORNER_SPACE
  }
}

#declare lg_70023_clear =
merge {
  torus {
    0.50-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <-0.35+LG_CORNER_SPACE, 0, 0>
  }
  torus {
    0.50-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate z*90
    translate <0.35-LG_CORNER_SPACE, 0, 0>
  }
  cylinder {
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    <0.35-LG_CORNER_SPACE, 0, 0>,
    0.50
  }
  cylinder {
    <-0.35, 0, 0>,
    <0.35, 0, 0>,
    0.50-LG_CORNER_SPACE
  }
}

#end
