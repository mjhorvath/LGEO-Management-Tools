/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_wpin: Wheel Holding Pin                                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120906 Owen Burgoyne                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_wpin)
#else
#declare lg_wpin = 
union {
  difference {
    union {
      cylinder {
        <0, 0, 0-LG_E>,
        <0, 0, 0.48>,
        LG_KNOB_INNER_RADIUS
      }
      torus {
        LG_KNOB_INNER_RADIUS,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 0.48-LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_INNER_RADIUS,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 0.43+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0.43+LG_CORNER_SPACE>,
        <0, 0, 0.48-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
    }
    union {
      box {
        <0.03, 0.2, 0.48+LG_E>,
        <-0.03, -0.2, 0.2>
      }
      cylinder {
        <0, 0.2, 0.19>,
        <0, -0.2, 0.19>,
        0.03
      }
    }
  }
}

#declare lg_wpin_clear = 
merge {
  difference {
    merge {
      cylinder {
        <0, 0, 0-LG_E>,
        <0, 0, 0.48>,
        LG_KNOB_INNER_RADIUS
      }
      torus {
        LG_KNOB_INNER_RADIUS,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 0.48-LG_CORNER_SPACE>
      }
      torus {
        LG_KNOB_INNER_RADIUS,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, 0.43+LG_CORNER_SPACE>
      }
      cylinder {
        <0, 0, 0.43+LG_CORNER_SPACE>,
        <0, 0, 0.48-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
      }
    }
    merge {
      box {
        <0.03, 0.2, 0.48+LG_E>,
        <-0.03, -0.2, 0.2>
      }
      cylinder {
        <0, 0.2, 0.19>,
        <0, -0.2, 0.19>,
        0.03
      }
    }
  }
}

#end
