/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32474p01: Technic Ball Joint with Axlehole Blind with Eye Pattern        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32474p01)
#else
#include "lg_32474.inc"
#local LG_RADIUS_SPHERE = 0.51;
#declare lg_32474p01_print = 
intersection {
  difference {
    cylinder {
      <0, 0, 0>,
      <0, 0, LG_RADIUS_SPHERE>,
      0.26
    }
    cylinder {
      <-0.08, 0.08, -LG_E>,
      <-0.08, 0.08, LG_RADIUS_SPHERE+LG_E>,
      0.10
    }
  }
  difference {
    sphere {
      <0, 0, 0>,
      LG_RADIUS_SPHERE+LG_PRINT_HEIGHT
    }
    sphere {
      <0, 0, 0>,
      LG_RADIUS_SPHERE-LG_E
    }
  }
  rotate y*37
}

#declare lg_32474p01 = 
union {
  object { 
    lg_32474
  }
  object {
    lg_32474p01_print
    texture { lg_black }
  }
}

#declare lg_32474p01_clear = 
merge {
  object { 
    lg_32474_clear
  }
  object {
    lg_32474p01_print
    texture { lg_black }
  }
}

#end
