/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_98138p07: Tile Round 1 x 1 with Eye Pattern                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_98138p07)
#else
#include "lg_98138.inc"
#declare lg_98138p07 =
union {
  object {
    lg_98138
  }
  difference {
    cylinder {
      <0.072, 0.056, 0>,
      <0.072, 0.056, LG_PRINT_HEIGHT>,
      0.268
      texture { lg_black }
    }
    cylinder {
      <0.16, 0.072, -LG_E>,
      <0.16, 0.072, LG_PRINT_HEIGHT+LG_E>,
      0.096
    }
  }
}

#declare lg_98138p07_clear =
merge {
  object {
    lg_98138_clear
  }
  difference {
    cylinder {
      <0.072, 0.056, 0>,
      <0.072, 0.056, LG_PRINT_HEIGHT>,
      0.268
      texture { lg_black }
    }
    cylinder {
      <0.16, 0.072, -LG_E>,
      <0.16, 0.072, LG_PRINT_HEIGHT+LG_E>,
      0.096
    }
  }
}

#end
