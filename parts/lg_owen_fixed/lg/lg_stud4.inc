/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_stud4: Plate Cylinder                                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2012-08-14 Owen Burgoyne (based on lg_defs.inc)                             */
/* 2014-02-10 Owen Burgoyne rewritten to appear more accurate                  */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_stud4)
#else
#local LG_CYLINDER_RADIUS = 0.32;
#declare lg_stud4 =
union {
  torus {
    LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    union {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, 2*-LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      <0, 0, LG_KNOB_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE
    }
  }
}

#declare lg_stud4_clear =
merge {
  torus {
    LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
  }
  torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  difference {
    merge {
      cylinder {
        <0, 0, 0>,
        <0, 0, LG_KNOB_HEIGHT>,
        LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
        <0, 0, -LG_E>,
        <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_CYLINDER_RADIUS
      }
    }
    cylinder {
      <0, 0, 2*-LG_E>,
      <0, 0, LG_KNOB_HEIGHT>,
      LG_KNOB_RADIUS
    }
    cylinder {
      <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      <0, 0, LG_KNOB_HEIGHT+LG_E>,
      LG_KNOB_RADIUS+LG_KNOB_CORNER_SPACE
    }
  }
}

#end
