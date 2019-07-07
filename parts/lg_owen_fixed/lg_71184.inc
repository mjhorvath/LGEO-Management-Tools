/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_71184: Bar 4.5L with Stop Ends                                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_71184)
#else
#local HEIGHT = 4;  // HEIGHT*LG_BRICK_HEIGHT
#declare lg_71184 =
union {
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
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  difference {
    union {
      cylinder {
        <0, 0, LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>,
        <0, 0, LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>,
        LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2)
      }
      cylinder {
        <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>,
        <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>,
        LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2)
      }
    }
    torus {
      LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2),
      (LG_CORNER_SPACE/2)
      rotate <90, 0, 0>
      translate <0, 0, LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>
    }
    torus {
      LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2),
      (LG_CORNER_SPACE/2)
      rotate <90, 0, 0>
      translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>
    }
  }
}

#declare lg_71184_clear =
merge {
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
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  }
  cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
  }
  cylinder {
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
  }
  difference {
    merge {
      cylinder {
        <0, 0, LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>,
        <0, 0, LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>,
        LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2)
      }
      cylinder {
        <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>,
        <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>,
        LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2)
      }
    }
    torus {
      LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2),
      (LG_CORNER_SPACE/2)
      rotate <90, 0, 0>
      translate <0, 0, LG_KNOB_HEIGHT+(LG_CORNER_SPACE/2)>
    }
    torus {
      LG_KNOB_INNER_RADIUS+(LG_CORNER_SPACE/2),
      (LG_CORNER_SPACE/2)
      rotate <90, 0, 0>
      translate <0, 0, HEIGHT*LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-(LG_CORNER_SPACE/2)>
    }
  }
}

#end
