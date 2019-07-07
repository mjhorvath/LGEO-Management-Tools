/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_0209: Minifig Chain Link                                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-02-10 Owen Burgoyne                                                    */
/* 2019-07-01 Michael Horvath padded part name with zero                       */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_0209)
#else
#local LG_CHAIN_LENGTH = 0.36;
#local LG_CHAIN_WIDTH = 0.32;
#local LG_CHAIN_RADIUS = 0.06;
#declare lg_0209 =
union {
  cylinder {
    <0, LG_CHAIN_WIDTH/2, 0>,
    <0, LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>,
    LG_CHAIN_RADIUS
  }
  cylinder {
    <0, -LG_CHAIN_WIDTH/2, 0>,
    <0, -LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>,
    LG_CHAIN_RADIUS
  }
  difference {
    union {
      torus {
        LG_CHAIN_WIDTH/2,
        LG_CHAIN_RADIUS
        rotate <0, 0, 90>
        translate <0, 0, 0>
      }
      torus {
        LG_CHAIN_WIDTH/2,
        LG_CHAIN_RADIUS
        rotate <0, 0, 90>
        translate <0, 0, LG_CHAIN_LENGTH>
      }
    }
    box {
      <-LG_CHAIN_RADIUS-LG_E, LG_CHAIN_WIDTH/2, 0>,
      <LG_CHAIN_RADIUS+LG_E, -LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>
    }
  }
}

#declare lg_0209_clear =
merge {
  cylinder {
    <0, LG_CHAIN_WIDTH/2, 0>,
    <0, LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>,
    LG_CHAIN_RADIUS
  }
  cylinder {
    <0, -LG_CHAIN_WIDTH/2, 0>,
    <0, -LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>,
    LG_CHAIN_RADIUS
  }
  difference {
    merge {
      torus {
        LG_CHAIN_WIDTH/2,
        LG_CHAIN_RADIUS
        rotate <0, 0, 90>
        translate <0, 0, 0>
      }
      torus {
        LG_CHAIN_WIDTH/2,
        LG_CHAIN_RADIUS
        rotate <0, 0, 90>
        translate <0, 0, LG_CHAIN_LENGTH>
      }
    }
    box {
      <-LG_CHAIN_RADIUS-LG_E, LG_CHAIN_WIDTH/2, 0>,
      <LG_CHAIN_RADIUS+LG_E, -LG_CHAIN_WIDTH/2, LG_CHAIN_LENGTH>
    }
  }
}

#end
