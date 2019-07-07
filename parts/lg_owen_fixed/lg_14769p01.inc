/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_14769p01: Tile 2 x 2 Round with Round Underside Stud and Black Eye P...  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_14769p01)
#else
#include "lg_14769.inc"
#declare lg_14769p01_print =
difference {
  cylinder {
    <-0.25, 0, 0>,
    <-0.25, 0, LG_PRINT_HEIGHT>,
    0.448
  }
  cylinder {
    <-0.45, 0, -LG_E>,
    <-0.45, 0, LG_PRINT_HEIGHT+LG_E>,
    0.152
  }
  texture { lg_black }
  rotate z*45
}

#declare lg_14769p01 =
union {
  object { 
    lg_14769
  }
  object {
    lg_14769p01_print
  }
}

#declare lg_14769p01_clear =
merge {
  object { 
    lg_14769_clear
  }
  object {
    lg_14769p01_print
  }
}
 
#end
