/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32474: Technic Ball Joint with Axlehole Blind                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-06-11 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32474)
#else
#include "lg_macro.inc"
#local LG_RADIUS_SPHERE = 0.51;
#declare lg_32474 = 
union {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -0.37+LG_CORNER_SPACE>
  }
  difference {
    intersection {
      sphere {
        <0, 0, 0>,
        LG_RADIUS_SPHERE
      }
      box {
        <-LG_RADIUS_SPHERE-LG_E, LG_RADIUS_SPHERE+LG_E, -0.37>,
        <LG_RADIUS_SPHERE+LG_E, -LG_RADIUS_SPHERE-LG_E, LG_RADIUS_SPHERE+LG_E>
      }
    }
    cylinder {
      <0, 0, -LG_RADIUS_SPHERE>,
      <0, 0, -0.37+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -0.37>,
      <0, 0, 0.40>,
      LG_KNOB_RADIUS
    }
  }
  object {
    lg_tech_axlehole_reduced_union (-0.40, 0.37-LG_KNOB_HEIGHT)
    rotate y*90
  }
}

#declare lg_32474_clear = 
merge {
  torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate x*90
    translate <0, 0, -0.37+LG_CORNER_SPACE>
  }
  difference {
    intersection {
      sphere {
        <0, 0, 0>,
        LG_RADIUS_SPHERE
      }
      box {
        <-LG_RADIUS_SPHERE-LG_E, LG_RADIUS_SPHERE+LG_E, -0.37>,
        <LG_RADIUS_SPHERE+LG_E, -LG_RADIUS_SPHERE-LG_E, LG_RADIUS_SPHERE+LG_E>
      }
    }
    cylinder {
      <0, 0, -LG_RADIUS_SPHERE>,
      <0, 0, -0.37+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
      <0, 0, -0.37>,
      <0, 0, 0.40>,
      LG_KNOB_RADIUS
    }
  }
  object {
    lg_tech_axlehole_reduced_merge (-0.40, 0.37-LG_KNOB_HEIGHT)
    rotate y*90
  }
}

#end
