/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_3003pe1: Brick 2 x 2 with Black Eye Pattern on Both Sides                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-01-01 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3003pe1)
#else
#include "lg_3003.inc"
#declare lg_3003pe1_print =
union {
  #declare MIR = 0;
  #while (MIR < 2)
  union {
    cylinder {
      <LG_BRICK_WIDTH-LG_E, -0.4*LG_BRICK_WIDTH, -0.575*LG_BRICK_HEIGHT>,
      <LG_BRICK_WIDTH+0.0001, -0.4*LG_BRICK_WIDTH, -0.575*LG_BRICK_HEIGHT>,
      0.315
      texture { lg_black }
    }
    difference {
      cylinder {
        <LG_BRICK_WIDTH-LG_E, -0.4*LG_BRICK_WIDTH, -0.575*LG_BRICK_HEIGHT>,
        <LG_BRICK_WIDTH+0.00015, -0.4*LG_BRICK_WIDTH, -0.575*LG_BRICK_HEIGHT>,
        0.27
      }
      cylinder {
        <LG_BRICK_WIDTH-LG_E, -0.4*LG_BRICK_WIDTH, -0.71*LG_BRICK_HEIGHT>,
        <LG_BRICK_WIDTH+LG_E, -0.4*LG_BRICK_WIDTH, -0.71*LG_BRICK_HEIGHT>,
        0.19
      }
    }
    #if (MIR = 1)
      scale <-1, 1, 1>
    #end
  }
  #declare MIR = MIR + 1;
  #end
}

#declare lg_3003pe1 =
union {
  object { 
    lg_3003
  }
  object {
    lg_3003pe1_print
  }
}

#declare lg_3003pe1_clear =
merge {
  object { 
    lg_3003_clear
  }
  object {
    lg_3003pe1_print
  }
}
 
#end
