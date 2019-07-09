/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_756: ~Hose Flexible Segment Center Section                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-08-04 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_756)
#else
#declare lg_756 = 
union {
  sphere {
    <0, 0, 0>,
    0.12
  }
  torus {
    0.12, 0.04
    rotate <90, 0, 0>
    scale <0, 0, 0.66667>
    translate <0, 0, 0.04*0.66667>
  }
  cylinder {
    <0, 0, 0.04*0.66667>,
    <0, 0, 0.04*1.33333>,
    0.16
  }
  torus {
    0.12, 0.04
    rotate <90, 0, 0>
    scale <0, 0, 0.66667>
    translate <0, 0, 0.04*1.33333>
  }
  sphere {
    <0, 0, 0.08>,
    0.12
  }
}

#declare lg_756_clear = 
merge {
  sphere {
    <0, 0, 0>,
    0.12
  }
  torus {
    0.12, 0.04
    rotate <90, 0, 0>
    scale <0, 0, 0.66667>
    translate <0, 0, 0.04*0.66667>
  }
  cylinder {
    <0, 0, 0.04*0.66667>,
    <0, 0, 0.04*1.33333>,
    0.16
  }
  torus {
    0.12, 0.04
    rotate <90, 0, 0>
    scale <0, 0, 0.66667>
    translate <0, 0, 0.04*1.33333>
  }
  sphere {
    <0, 0, 0.08>,
    0.12
  }
}

#end
