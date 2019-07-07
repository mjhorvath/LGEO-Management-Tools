/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_ls41: LSynth Technic Flexible Axle - Cross Section                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-12-31 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_ls41)
#else
#declare lg_ls41 = 
difference {
  cylinder {
    <0, 0, -0.04>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
  box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.04-LG_E>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_E>
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#declare lg_ls41_clear = 
difference {
  cylinder {
    <0, 0, -0.04>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
  box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2, -0.04-LG_E>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_E>
    rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
  #end
}

#end
