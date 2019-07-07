/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080306 Lutz Uhlmann created shortcut to original part by Anton Raves      */
/* 20120606 Owen Burgoyne modified face pattern                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3626bp01: Minifig Head with Standard Grin Pattern                        */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3626bp01)
#else
#include "lg_3626b.inc"
#declare lg_3626bp01_print =
union {
    difference {
      merge {
        cylinder { -10*z, 0*z, 0.5 translate <-1.4, 5.6, 0> }
        cylinder { -10*z, 0*z, 0.5 translate <1.4, 5.6, 0> }
				difference {
					cylinder { -10*z, 0*z, 3.4 }
					cylinder { -11*z, 1*z, 3 }
					box { <0, -10, -11> <10, 10, 1> rotate 25*z }
					box { <-10, -10, -11> <0, 10, 1> rotate -25*z }
					translate <0, 6.6, 0>
				}
        cylinder { -10*z, 0*z, 0.2 translate <0, -3.2, 0> rotate 25*z translate <0, 6.6, 0> }
        cylinder { -10*z, 0*z, 0.2 translate <0, -3.2, 0> rotate -25*z translate <0, 6.6, 0> }
      }
      difference {
        box { <-20, 0, -20> <20, 11, 20> }
        cylinder { 0*y, 11*y, 5.00005 }
      }
      cylinder { 0*y, 11*y, 3 }
      texture { lg_black }
    }
 rotate <90, 0, -90>
 scale 0.1
 translate <0.014*LG_BRICK_WIDTH, 0, -1*LG_BRICK_HEIGHT>
}

#declare lg_3626bp01 =
union {
	object { lg_3626b }
	object { lg_3626bp01_print }
}

#declare ar_3626bp01_clear =
union {
	object { lg_3626b_clear }
	object { lg_3626bp01_print }
}
#end