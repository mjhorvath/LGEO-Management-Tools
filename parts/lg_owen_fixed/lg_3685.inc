/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/* 20071202 Lutz Uhlmann fixed hollow stud logo and orientation                */
/* 20121215 Owen Burgoyne fixed tip height                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3685: Slope Brick 755 2 x 2 x 3 Double Convex                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3685)
#else
#declare lg_angle = 73.664/180*pi;
#declare lg_3685 =
union {
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2+LG_E, 0>,
   <-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, LG_BRICK_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.8*LG_WALL_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, LG_BRICK_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.8*LG_WALL_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 box {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT+LG_E>,
   <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
    <0, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH/2>
    rotate <0, lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2, 0, -LG_WALL_WIDTH/2>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 object {
  lg_tech_knob_logo
 }
}

#declare lg_3685_clear =
merge {
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2+LG_E, 0>,
   <-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, LG_BRICK_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.8*LG_WALL_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, LG_BRICK_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.8*LG_WALL_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 box {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)-LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle)*sin(lg_angle)>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT+LG_E>,
   <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
    <0, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH/2>
    rotate <0, lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2, 0, -LG_WALL_WIDTH/2>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 object {
  lg_tech_knob_logo_clear
 }
}

#declare lg_3685_slope =
union {
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.2*LG_WALL_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle)-LG_WALL_WIDTH, LG_CORNER_SPACE*sin(pi/4)*cos(lg_angle)>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, LG_BRICK_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), LG_CORNER_SPACE>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.2*LG_WALL_WIDTH>
   rotate <lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle)+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_CORNER_SPACE*sin(pi/4)*cos(lg_angle)>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH>
   rotate <0, lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  }
 }
}

#end