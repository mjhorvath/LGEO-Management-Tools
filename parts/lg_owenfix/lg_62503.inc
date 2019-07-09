/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_62503: LED for Electric Light Brick 2 x 3 x 1.333                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2013-06-28 Owen Burgoyne                                                    */
/* 2013-12-31 Owen Burgoyne increased light fade distance from 20 to 60        */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_62503)
#else
#declare lg_62503_bulb = 
union {
  union {
    box {
      <-0.23, 0.03, -0.02>,
      <0.08, 0.07, 0.02>
    }
    box {
      <-0.23, -0.03, -0.02>,
      <0.08, -0.07, 0.02>
    }
    cylinder {
      <0.08, 0, 0>,
      <0.12, 0, 0>,
      0.12
    }
  texture { lg_electric_contact_alloy }
  }
  merge {
    torus {
      0.16-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_CORNER_SPACE, 0, 0>
    }
    cylinder {
      <0, 0, 0>,
      <0.36, 0, 0>,
      0.16-LG_CORNER_SPACE
    }
    cylinder {
      <LG_CORNER_SPACE, 0, 0>,
      <0.36, 0, 0>,
      0.16
    }
    sphere {
      <0, 0, 0>,
      0.16
      scale <0.75, 1, 1>
      translate <0.36, 0, 0>
    }
    hollow
    texture { lg_clear_orange }
  }
}

#declare lg_62503_light =
cylinder {
  <0, 0, 0>,
  <0.02, 0, 0>,
  0.12
}

#declare lg_62503 =
union {
  object {
    lg_62503_bulb
  }
  #ifdef (LG_LIGHT_SWITCH)
  #if (LG_LIGHT_SWITCH > 0)
    light_source {
      <0.12, 0, 0>
      color srgb <255,191,63>/255*4
      area_light <1, 0, 0>, <0, 0, 1>, 10, 10
      adaptive 1
      jitter
      fade_distance 60
      fade_power 5
      looks_like { lg_62503_light }
    }
  #end
  #else
    object {
      lg_62503_light
      translate <0.12, 0, 0>
    }
  #end
}

#end
