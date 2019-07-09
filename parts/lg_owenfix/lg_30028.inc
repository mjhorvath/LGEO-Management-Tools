/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_30028: Tyre 8/40 x 8 Slick Smooth                                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 1999-01-13 Lutz Uhlmann                                                     */
/* 2012-12-15 Owen Burgoyne increased roundness of tyre edges                  */
/* 2013-06-28 Owen Burgoyne updated roundness of tyre edges                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30028)
#else
#declare LG_TYRE_RADIUS = 0.72;
#declare LG_TYRE_INNER_RADIUS = 0.4;
#declare LG_TYRE_EDGE_RADIUS = 0.085;
#declare lg_30028 =
union {
 difference {
  union {
   cylinder {
    <0.6-LG_TYRE_EDGE_RADIUS, 0, 0>,
    <-0.2+LG_TYRE_EDGE_RADIUS, 0, 0>,
    LG_TYRE_RADIUS
   }
   cylinder {
    <0.6, 0, 0>,
    <-0.2, 0, 0>,
    LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS
   }
  }
  union {
   intersection {
    union {
     cone {
      <0.02, 0, 0>, 0.42,
      <0.1, 0, 0>, 0.34
     }
     cone {
      <0.38, 0, 0>, 0.42,
      <0.3, 0, 0>, 0.34
     }
    }
    cylinder {
     <0, 0, 0>,
     <0.4, 0, 0>,
     LG_TYRE_INNER_RADIUS
    }
   }
   cylinder {
    <0, 0, 0>,
    <0.4, 0, 0>,
    0.37
   }
   cylinder {
    <0.6+LG_E, 0, 0>,
    <0.6-LG_CORNER_SPACE, 0, 0>,
    LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <-0.2+LG_CORNER_SPACE, 0, 0>,
    LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0, 0>,
    <0.04, 0, 0>,
    LG_TYRE_INNER_RADIUS
   }
   cylinder {
    <0.6, 0, 0>,
    <0.36, 0, 0>,
    LG_TYRE_INNER_RADIUS
   }
  }
 }
 torus {
  LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS,
  LG_TYRE_EDGE_RADIUS
  rotate <0, 0, 90>
  translate <0.6-LG_TYRE_EDGE_RADIUS, 0, 0>
 }
 torus {
  LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS,
  LG_TYRE_EDGE_RADIUS
  rotate <0, 0, 90>
  translate <-0.2+LG_TYRE_EDGE_RADIUS, 0, 0>
 }
 torus {
  LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 rotate <0, 0, -90>
}

#declare lg_30028_clear =
merge {
 difference {
  merge {
   cylinder {
    <0.6-LG_TYRE_EDGE_RADIUS, 0, 0>,
    <-0.2+LG_TYRE_EDGE_RADIUS, 0, 0>,
    LG_TYRE_RADIUS
   }
   cylinder {
    <0.6, 0, 0>,
    <-0.2, 0, 0>,
    LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS
   }
  }
  merge {
   intersection {
    merge {
     cone {
      <0.02, 0, 0>, 0.42,
      <0.1, 0, 0>, 0.34
     }
     cone {
      <0.38, 0, 0>, 0.42,
      <0.3, 0, 0>, 0.34
     }
    }
    cylinder {
     <0, 0, 0>,
     <0.4, 0, 0>,
     LG_TYRE_INNER_RADIUS
    }
   }
   cylinder {
    <0, 0, 0>,
    <0.4, 0, 0>,
    0.37
   }
   cylinder {
    <0.6+LG_E, 0, 0>,
    <0.6-LG_CORNER_SPACE, 0, 0>,
    LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <-0.2+LG_CORNER_SPACE, 0, 0>,
    LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0, 0>,
    <0.04, 0, 0>,
    LG_TYRE_INNER_RADIUS
   }
   cylinder {
    <0.6, 0, 0>,
    <0.36, 0, 0>,
    LG_TYRE_INNER_RADIUS
   }
  }
 }
 torus {
  LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS,
  LG_TYRE_EDGE_RADIUS
  rotate <0, 0, 90>
  translate <0.6-LG_TYRE_EDGE_RADIUS, 0, 0>
 }
 torus {
  LG_TYRE_RADIUS-LG_TYRE_EDGE_RADIUS,
  LG_TYRE_EDGE_RADIUS
  rotate <0, 0, 90>
  translate <-0.2+LG_TYRE_EDGE_RADIUS, 0, 0>
 }
 torus {
  LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_TYRE_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 rotate <0, 0, -90>
}

#end
