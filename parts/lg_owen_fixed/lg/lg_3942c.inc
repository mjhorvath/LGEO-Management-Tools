/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3942c: Cone 2 x 2 x 2 with Hollow Stud Open                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 20120828 Owen Burgoyne                                                      */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3942c)
#else
#include "lg_3942b.inc"
#declare lg_3942c = 
difference {
 object {
  lg_3942b
 }
 cylinder {
 <0, 0, -LG_BRICK_HEIGHT>,
 <0, 0, LG_KNOB_HEIGHT>,
 LG_KNOB_INNER_RADIUS
 }
}

#declare lg_3942c_clear = 
difference {
 object {
  lg_3942b_clear
 }
 cylinder {
 <0, 0, -LG_BRICK_HEIGHT>,
 <0, 0, LG_KNOB_HEIGHT>,
 LG_KNOB_INNER_RADIUS
 }
}

#end
