/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_32209: Technic Axle 5.5 with Stop                                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2008-03-05 Lutz Uhlmann                                                     */
/* 2013-06-28 Owen Burgoyne fixed length and position, as part is technically  */
/*            108 LDU in length (5.4), rather than 110 LDU (5.5)               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32209)
#else
#declare LENGTH=5.4;
#declare lg_32209 =
union {
 difference {
  union {
   cylinder {
    <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
   }
   cylinder {
    <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 cylinder {
  <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <0, 1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  LG_KNOB_RADIUS
 }
 cylinder {
  <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
  <0, 1.35*LG_BRICK_WIDTH, 0>
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 1.70*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <0, 1.80*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  0.3
 }
 cylinder {
  <0, 1.70*LG_BRICK_WIDTH, 0>,
  <0, 1.80*LG_BRICK_WIDTH, 0>
  0.3-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.80*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.70*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 translate <0, 0.04, 0>
}

#declare lg_32209_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
   }
   cylinder {
    <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
    <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 cylinder {
  <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <0, 1.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  LG_KNOB_RADIUS
 }
 cylinder {
  <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
  <0, 1.35*LG_BRICK_WIDTH, 0>
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 1.70*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <0, 1.80*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  0.3
 }
 cylinder {
  <0, 1.70*LG_BRICK_WIDTH, 0>,
  <0, 1.80*LG_BRICK_WIDTH, 0>
  0.3-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.80*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.70*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 translate <0, 0.04, 0>
}

#end
