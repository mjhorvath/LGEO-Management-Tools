/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_macro.inc: Macros for simplifying LGEO/POV-Ray tasks                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-01-16 Owen Burgoyne                                                    */
/*                                                                             */
/******************************************************************************/

// List of available macros, their variations, and their required variables:
//
// lg_connect_tori_union (BasePoint, BaseRadius, CapPoint, CapRadius)
// lg_connect_tori_merge (BasePoint, BaseRadius, CapPoint, CapRadius)
//
// lg_curved_slope_top_union (PointA, PointB, RadOuter, RadInner, Angle)
// lg_curved_slope_top_merge (PointA, PointB, RadOuter, RadInner, Angle)
//
// lg_brick_column_group_union (AxisX, AxisZ)
// lg_brick_column_group_merge (AxisX, AxisZ)
//
// lg_brick_cylinder_group_union (AxisX, AxisZ)
// lg_brick_cylinder_group_merge (AxisX, AxisZ)
//
// lg_plate_column_group_union (AxisX, AxisZ)
// lg_plate_column_group_merge (AxisX, AxisZ)
//
// lg_plate_cylinder_group_union (AxisX, AxisZ)
// lg_plate_cylinder_group_merge (AxisX, AxisZ)
//
// lg_knob_group_union (AxisX, AxisZ)
// lg_knob_group_merge (AxisX, AxisZ)
//
// lg_tech_knob_group_union (AxisX, AxisZ)
// lg_tech_knob_group_merge (AxisX, AxisZ)
//
// lg_tech_knob_logo_group_union (AxisX, AxisZ)
// lg_tech_knob_logo_group_merge (AxisX, AxisZ)
//
// lg_tech_axlehole_union (PointA, PointB)
// lg_tech_axlehole_merge (PointA, PointB)
//
// lg_tech_axlehole_reduced_union (PointA, PointB)
// lg_tech_axlehole_reduced_merge (PointA, PointB)
//
// lg_tech_hole_group (Width, Multiple)

#include "math.inc"
#include "transforms.inc"

//-----------------------------------------------------------------------------//
// lg_connect_tori (BasePoint, BaseRadius, CapPoint, CapRadius, UseMerge)      //
//-----------------------------------------------------------------------------//
// This macro creates a cone or cylinder (depending on the base/cap radii)     //
// that will match up with two tori. The tori should be specified within the   //
// include file where this macro will be used.                                 //
//                                                                             //
// BasePoint and CapPoint should be specified as a vector <0, 0, 0>, and       //
// should be the same as the location of the existing tori. BaseRadius and     //
// CapRadius should also be set with the same measurements as the radii of     //
// the existing tori.                                                          //
//                                                                             //
// When working in a negative direction, if the shape doesn't quite fit        //
// between the tori, try swapping the BasePoint/BaseRadius and CapPoint/       //
// CapRadius declarations.                                                     //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_connect_tori_union (BasePoint, BaseRadius, CapPoint, CapRadius)
  lg_connect_tori (BasePoint, BaseRadius, CapPoint, CapRadius, no)
#end
#macro lg_connect_tori_merge (BasePoint, BaseRadius, CapPoint, CapRadius)
  lg_connect_tori (BasePoint, BaseRadius, CapPoint, CapRadius, yes)
#end

#macro lg_connect_tori (BasePoint, BaseRadius, CapPoint, CapRadius, UseMerge)
  
  #local EdgeRadius = LG_CORNER_SPACE;

  #local Axis = vnormalize (CapPoint - BasePoint);
  #local Len = VDist (BasePoint, CapPoint);
  #local SA = atan2 (CapRadius - BaseRadius, Len);
  
  #if (min (BaseRadius, CapRadius) < EdgeRadius)
    #warning "\"lg_connect_tori()\" macro called with Radius < EdgeRadius. Results may not be as expected.\n"
  #end

  #local D1 = (Axis*EdgeRadius) - (EdgeRadius*sin(SA));
  #local D2 = (Axis*EdgeRadius) + (EdgeRadius*sin(SA));

  #if (BaseRadius = CapRadius)

    #if(UseMerge)
    merge {
    #else
    union {
    #end
      cylinder {
        BasePoint - (Axis*EdgeRadius),
        CapPoint + (Axis*EdgeRadius),
        BaseRadius
      }
      cylinder {
        BasePoint,
        CapPoint,
        BaseRadius + EdgeRadius
      }
    }

  #else

    #if(UseMerge)
    merge {
    #else
    union {
    #end
      cone {
         BasePoint - (Axis*EdgeRadius) + (Axis*D1), BaseRadius + (EdgeRadius*cos(SA)),
         CapPoint + (Axis*EdgeRadius) - (Axis*D2), CapRadius + (EdgeRadius*cos(SA))
      }
      cone {
        BasePoint - (Axis*EdgeRadius), BaseRadius,
        CapPoint + (Axis*EdgeRadius), CapRadius
      }
    }

  #end

#end

//-----------------------------------------------------------------------------//
// lg_curved_slope_top (PointA, PointB, RadOuter, RadInner, Angle, UseMerge)   //
//-----------------------------------------------------------------------------//
// This macro creates a segment of a curve which can be used for the top of    //
// curved slopes.                                                              //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "scale" functions, the slope segment can be mirrored or         //
// inverted.                                                                   //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
// Based on "Segment_of_Torus" by Friedrich A. Lohmueller:                     //
// http://www.f-lohmueller.de/pov_tut/all_shapes/shapes3_20e.htm               //
//-----------------------------------------------------------------------------//
#macro lg_curved_slope_top_union (Width, RadOuter, RadInner, Angle)
  lg_curved_slope_top (Width, RadOuter, RadInner, Angle, no)
#end
#macro lg_curved_slope_top_merge (Width, RadOuter, RadInner, Angle)
  lg_curved_slope_top (Width, RadOuter, RadInner, Angle, yes)
#end

#macro lg_curved_slope_top (Width, RadOuter, RadInner, Angle, UseMerge)

  #local LG_WIDTH = Width;
  #local EdgeRadius = LG_CORNER_SPACE;
  
  #if (RadOuter < EdgeRadius)
    #warning "\"lg_curved_slope_top()\" macro called with RadOuter < EdgeRadius. Results may not be as expected.\n"
  #end
  #if (RadInner > RadOuter)
    #warning "\"lg_curved_slope_top()\" macro called with RadInner > RadOuter. Results may not be as expected.\n"
  #end

  intersection {
    difference {
      #if(UseMerge)
      merge {
      #else
      union {
      #end
        torus {
          RadOuter-EdgeRadius,
          EdgeRadius
          translate <0, LG_WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
        }
        cylinder {
          <0, LG_WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
          <0, LG_WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
          RadOuter
        }
        torus {
          RadOuter-EdgeRadius,
          EdgeRadius
          translate <0, LG_WIDTH/2*-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
        }
      }
      cylinder {
        <0, LG_WIDTH/2*-LG_BRICK_WIDTH-LG_E, 0>,
        <0, LG_WIDTH/2*LG_BRICK_WIDTH+LG_E, 0>,
        RadInner
      }
    }
    #if (Angle > 180)
    union {
    #end
      box {
        <0, LG_WIDTH*-LG_BRICK_WIDTH, -RadOuter-LG_E>,
        <RadOuter+LG_E, LG_WIDTH*LG_BRICK_WIDTH, RadOuter+LG_E>
      }
      box {
        <0, LG_WIDTH*-LG_BRICK_WIDTH, -RadOuter-LG_E>,
        <-RadOuter-LG_E, LG_WIDTH*LG_BRICK_WIDTH, RadOuter+LG_E>
        rotate <0, Angle, 0>
      }
    #if (Angle > 180)
    }
    #end
  }

#end

//-----------------------------------------------------------------------------//
// lg_brick_column_group (AxisX, AxisZ, UseMerge)                              //
//-----------------------------------------------------------------------------//
// Creates a group of columns along the X and Z axis, similar to the stud      //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the column group can positioned where    //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_brick_column_group_union (AxisX, AxisZ)
  lg_brick_column_group (AxisX, AxisZ, no)
#end
#macro lg_brick_column_group_group_merge (AxisX, AxisZ)
  lg_brick_column_group (AxisX, AxisZ, yes)
#end

#macro lg_brick_column_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end

    #local CYL_X = 0;
    #while (CYL_X < AxisX)
    #local CYL_Z = 0;
    #while (CYL_Z < AxisZ)
    object {
      #if (UseMerge)
        lg_brick_column_clear
      #else
        lg_brick_column
      #end
      translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
      translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
    }
    #local CYL_Z = CYL_Z + 1;
    #end
    #local CYL_X = CYL_X + 1;
    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_brick_cylinder_group (AxisX, AxisZ, UseMerge)                            //
//-----------------------------------------------------------------------------//
// Creates a group of cylinders along the X and Z axis, similar to the stud    //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the cylinder group can positioned where  //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_brick_cylinder_group_union (AxisX, AxisZ)
  lg_brick_cylinder_group (AxisX, AxisZ, no)
#end
#macro lg_brick_cylinder_group_merge (AxisX, AxisZ)
  lg_brick_cylinder_group (AxisX, AxisZ, yes)
#end

#macro lg_brick_cylinder_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end
  
    #if (UseMerge)
  
      #local CYL_X = 0;
      #while (CYL_X < AxisX)
      #local CYL_Z = 0;
      #while (CYL_Z < AxisZ)
      object {
        lg_brick_cylinder_clear
        translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local CYL_Z = CYL_Z + 1;
      #end
      #local CYL_X = CYL_X + 1;
      #end

    #else

      #local CYL_X = 0;
      #while (CYL_X < AxisX)
      #local CYL_Z = 0;
      #while (CYL_Z < AxisZ)
      object {
        lg_brick_cylinder
        translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local CYL_Z = CYL_Z + 1;
      #end
      #local CYL_X = CYL_X + 1;
      #end

    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_plate_column_group (AxisX, AxisZ, UseMerge)                              //
//-----------------------------------------------------------------------------//
// Creates a group of columns along the X and Z axis, similar to the stud      //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the column group can positioned where    //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_plate_column_group_union (AxisX, AxisZ)
  lg_plate_column_group (AxisX, AxisZ, no)
#end
#macro lg_plate_column_group_merge (AxisX, AxisZ)
  lg_plate_column_group (AxisX, AxisZ, yes)
#end

#macro lg_plate_column_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end

    #local CYL_X = 0;
    #while (CYL_X < AxisX)
    #local CYL_Z = 0;
    #while (CYL_Z < AxisZ)
    object {
      #if (UseMerge)
        lg_plate_column_clear
      #else
        lg_plate_column
      #end
      translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
      translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
    }
    #local CYL_Z = CYL_Z + 1;
    #end
    #local CYL_X = CYL_X + 1;
    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_plate_cylinder_group (AxisX, AxisZ, UseMerge)                            //
//-----------------------------------------------------------------------------//
// Creates a group of cylinders along the X and Z axis, similar to the stud    //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the cylinder group can positioned where  //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_plate_cylinder_group_union (AxisX, AxisZ)
  lg_plate_cylinder_group (AxisX, AxisZ, no)
#end
#macro lg_plate_cylinder_group_merge (AxisX, AxisZ)
  lg_plate_cylinder_group (AxisX, AxisZ, yes)
#end

#macro lg_plate_cylinder_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end
  
    #if (UseMerge)
  
      #local CYL_X = 0;
      #while (CYL_X < AxisX)
      #local CYL_Z = 0;
      #while (CYL_Z < AxisZ)
      object {
        lg_plate_cylinder_clear
        translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local CYL_Z = CYL_Z + 1;
      #end
      #local CYL_X = CYL_X + 1;
      #end

    #else

      #local CYL_X = 0;
      #while (CYL_X < AxisX)
      #local CYL_Z = 0;
      #while (CYL_Z < AxisZ)
      object {
        lg_plate_cylinder
        translate <(0.5+CYL_Z)*LG_BRICK_WIDTH, (0.5+CYL_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local CYL_Z = CYL_Z + 1;
      #end
      #local CYL_X = CYL_X + 1;
      #end

    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_knob_group (AxisX, AxisZ, UseMerge)                                      //
//-----------------------------------------------------------------------------//
// Creates a group of studs along the X and Z axis, similar to the stud        //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the stud group can positioned where      //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_knob_group_union (AxisX, AxisZ)
  lg_knob_group (AxisX, AxisZ, no)
#end
#macro lg_knob_group_merge (AxisX, AxisZ)
  lg_knob_group (AxisX, AxisZ, yes)
#end

#macro lg_knob_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end
  
    #if (UseMerge)
  
      #local KNOB_X = 0;
      #while (KNOB_X < AxisX)
      #local KNOB_Z = 0;
      #while (KNOB_Z < AxisZ)
      object {
        lg_knob_clear
        translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local KNOB_Z = KNOB_Z + 1;
      #end
      #local KNOB_X = KNOB_X + 1;
      #end

    #else

      #local KNOB_X = 0;
      #while (KNOB_X < AxisX)
      #local KNOB_Z = 0;
      #while (KNOB_Z < AxisZ)
      object {
        lg_knob
        translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local KNOB_Z = KNOB_Z + 1;
      #end
      #local KNOB_X = KNOB_X + 1;
      #end

    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_knob_inner_space_group (AxisX, AxisZ, UseMerge)                          //
//-----------------------------------------------------------------------------//
// Creates a group of studs along the X and Z axis, similar to the stud        //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the stud group can positioned where      //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_knob_inner_space_group_union (AxisX, AxisZ)
  lg_knob_inner_space_group (AxisX, AxisZ, no)
#end
#macro lg_knob_inner_space_group_merge (AxisX, AxisZ)
  lg_knob_inner_space_group (AxisX, AxisZ, yes)
#end

#macro lg_knob_inner_space_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end
  
    #if (UseMerge)
  
      #local KNOB_X = 0;
      #while (KNOB_X < AxisX)
      #local KNOB_Z = 0;
      #while (KNOB_Z < AxisZ)
      object {
        lg_knob_inner_space_clear
        translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local KNOB_Z = KNOB_Z + 1;
      #end
      #local KNOB_X = KNOB_X + 1;
      #end

    #else

      #local KNOB_X = 0;
      #while (KNOB_X < AxisX)
      #local KNOB_Z = 0;
      #while (KNOB_Z < AxisZ)
      object {
        lg_knob_inner_space
        translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
        translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
      }
      #local KNOB_Z = KNOB_Z + 1;
      #end
      #local KNOB_X = KNOB_X + 1;
      #end

    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_tech_knob_group (AxisX, AxisZ, UseMerge)                                 //
//-----------------------------------------------------------------------------//
// Creates a group of studs along the X and Z axis, similar to the stud        //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the stud group can positioned where      //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_tech_knob_group_union (AxisX, AxisZ)
  lg_tech_knob_group (AxisX, AxisZ, no)
#end
#macro lg_tech_knob_group_merge (AxisX, AxisZ)
  lg_tech_knob_group (AxisX, AxisZ, yes)
#end

#macro lg_tech_knob_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end

    #local KNOB_X = 0;
    #while (KNOB_X < AxisX)
    #local KNOB_Z = 0;
    #while (KNOB_Z < AxisZ)
    object {
      #if (UseMerge)
        lg_tech_knob_clear
      #else
        lg_tech_knob
      #end
      translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
      translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
    }
    #local KNOB_Z = KNOB_Z + 1;
    #end
    #local KNOB_X = KNOB_X + 1;
    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_tech_knob_logo_group (AxisX, AxisZ, UseMerge)                            //
//-----------------------------------------------------------------------------//
// Creates a group of studs along the X and Z axis, similar to the stud        //
// groups within LDraw. The centre/base of the group is located at <0, 0, 0>.  //
//                                                                             //
// By containing the macro within an "object { }" declaration and using the    //
// "rotate" or "translate" functions, the stud group can positioned where      //
// necessary.                                                                  //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_tech_knob_logo_group_union (AxisX, AxisZ)
  lg_tech_knob_logo_group (AxisX, AxisZ, no)
#end
#macro lg_tech_knob_logo_group_merge (AxisX, AxisZ)
  lg_tech_knob_logo_group (AxisX, AxisZ, yes)
#end

#macro lg_tech_knob_logo_group (AxisX, AxisZ, UseMerge)

  #if (AxisX>1 | AxisZ>1)
  union {
  #end

    #local KNOB_X = 0;
    #while (KNOB_X < AxisX)
    #local KNOB_Z = 0;
    #while (KNOB_Z < AxisZ)
    union {
      object {
        #if (UseMerge)
          lg_tech_knob_logo_clear
        #else
          lg_tech_knob_logo
        #end
      }
      object {
        #if (UseMerge)
          lg_tech_knob_join_clear
        #else
          lg_tech_knob_join
        #end
      }
      translate <(0.5+KNOB_Z)*LG_BRICK_WIDTH, (0.5+KNOB_X)*LG_BRICK_WIDTH, 0>
      translate <AxisZ/2*-LG_BRICK_WIDTH, AxisX/2*-LG_BRICK_WIDTH, 0>
    }
    #local KNOB_Z = KNOB_Z + 1;
    #end
    #local KNOB_X = KNOB_X + 1;
    #end

  #if (AxisX>1 | AxisZ>1)
  }
  #end

#end

//-----------------------------------------------------------------------------//
// lg_tech_axlehole (PointA, PointB, UseMerge)                                 //
//-----------------------------------------------------------------------------//
// This macro is used for creating the axlehole teeth found in Technic beams,  //
// bricks and bushes, as well as other System parts such as round plates.      //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_tech_axlehole_union (PointA, PointB)
  lg_tech_axlehole (PointA, PointB, no)
#end
#macro lg_tech_axlehole_merge (PointA, PointB)
  lg_tech_axlehole (PointA, PointB, yes)
#end

#macro lg_tech_axlehole (PointA, PointB, UseMerge)

  intersection {

    #if (UseMerge)
    merge {
    #else
    union {
    #end

      #local ROT = 0;
      #while (ROT < 4)

      #if (UseMerge)
      merge {
      #else
      union {
      #end

        box {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>
        }
        box {
          <PointA, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>
        }
        cylinder {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>
        }
        cylinder { 
          <PointA, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          0.08-LG_CORNER_SPACE
        }
        cylinder { 
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          0.08
        }
        box {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2>
        }
        box {
          <PointA, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointB, -LG_KNOB_RADIUS, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2>
        }
        cylinder {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointA+LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        rotate <90*ROT, 0, 0>
      }
      #local ROT = ROT + 1;
      #end
    }
    cylinder {
      <PointA-LG_E, 0, 0>,
      <PointB+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }

#end

//-----------------------------------------------------------------------------//
// lg_tech_axlehole_reduced (PointA, PointB, UseMerge)                         //
//-----------------------------------------------------------------------------//
// This macro is used for creating the axlehole teeth found in Technic beams,  //
// bricks and bushes, as well as other System parts such as round plates.      //
//                                                                             //
// The UseMerge option is purely an internal function, as the "_union" or      //
// "_merge" variants should be specified when calling the macro.               //
//-----------------------------------------------------------------------------//
#macro lg_tech_axlehole_reduced_union (PointA, PointB)
  lg_tech_axlehole_reduced (PointA, PointB, no)
#end
#macro lg_tech_axlehole_reduced_merge (PointA, PointB)
  lg_tech_axlehole_reduced (PointA, PointB, yes)
#end

#macro lg_tech_axlehole_reduced (PointA, PointB, UseMerge)

  intersection {

    #if (UseMerge)
    merge {
    #else
    union {
    #end

      #local ROT = 0;
      #while (ROT < 2)

      #if (UseMerge)
      merge {
      #else
      union {
      #end

        box {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>
        }
        box {
          <PointA, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2, -LG_KNOB_RADIUS>
        }
        cylinder {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        cylinder {
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
          LG_CORNER_SPACE
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>
        }
        torus {
          0.08-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>
        }
        cylinder { 
          <PointA, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          0.08-LG_CORNER_SPACE
        }
        cylinder { 
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-0.08>,
          0.08
        }
        box {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2>
        }
        box {
          <PointA, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointB, -LG_KNOB_RADIUS, -LG_KNOB_RADIUS+LG_CROSSAXLE_WIDTH/2>
        }
        cylinder {
          <PointA+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointA+LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }
        cylinder {
          <PointB-LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-0.08, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          <PointB-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE>,
          LG_CORNER_SPACE
        }

        #if (UseMerge)
        merge {
        #else
        union {
        #end

          torus {
            0.04-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <PointA+LG_CORNER_SPACE, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>
          }
          torus {
            0.04-LG_CORNER_SPACE,
            LG_CORNER_SPACE
            rotate <0, 0, 90>
            translate <PointB-LG_CORNER_SPACE, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>
          }
          cylinder {
            <PointA, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            <PointB, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            0.04-LG_CORNER_SPACE
          }
          cylinder {
            <PointA+LG_CORNER_SPACE, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            <PointB-LG_CORNER_SPACE, 0, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            0.04
          }
          cylinder {
            <PointA+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointA+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          cylinder {
            <PointA+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointA+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          cylinder {
            <PointB-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointB-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          cylinder {
            <PointB-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointB-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>,
            LG_CORNER_SPACE
          }
          box {
            <PointA, 0.04-LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointB, -0.04+LG_CORNER_SPACE, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>
          }
          box {
            <PointA+LG_CORNER_SPACE, 0.04, -LG_KNOB_RADIUS-LG_CORNER_SPACE>,
            <PointB-LG_CORNER_SPACE, -0.04, -LG_KNOB_RADIUS+0.04+LG_CORNER_SPACE>
          }
          rotate <45, 0, 0>
        }
        rotate <180*ROT, 0, 0>
      }
      #local ROT = ROT + 1;
      #end
    }
    cylinder {
      <PointA-LG_E, 0, 0>,
      <PointB+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
  }

#end

//-----------------------------------------------------------------------------//
// lg_tech_hole_group (Width, Multiple)                                        //
//-----------------------------------------------------------------------------//
// This macro is used for creating the holes in Technic bricks and beams.      //
//                                                                             //
// The "Width" value is for the width measured in bricks, and for most         //
// purposes should be set to "1".                                              //
//                                                                             //
// The "Multiple" value is used to set the number of holes to produce, which   //
// will always be centred at <0, 0, 0>, with the series of holes running       //
// along the X axis (as they would on a standard Technic brick).               //
//                                                                             //
// If the series of holes is not created at the appropriate position, use the  //
// "rotate" and "translate" functions as necessary.                            //
//-----------------------------------------------------------------------------//
#macro lg_tech_hole_group (Width, Multiple)

  #local LG_WIDTH = Width;
  #local LG_LENGTH = Multiple;
  
  #if(LG_WIDTH < 1)
    #local LG_WIDTH = 1;
  #end
  #if(LG_LENGTH < 1)
    #local LG_LENGTH = 1;
  #end

  #local lg_tech_hole_complete = 
  union {
    object {
      lg_tech_hole
      scale <1, 1, 1>
      translate <LG_WIDTH/2*-LG_BRICK_WIDTH, 0, 0>
    }
    cylinder {
      <LG_WIDTH/2*-LG_BRICK_WIDTH, 0, 0>,
      <LG_WIDTH/2*LG_BRICK_WIDTH, 0, 0>,
      LG_KNOB_RADIUS
    }
    object {
      lg_tech_hole
      scale <-1, 1, 1>
      translate <LG_WIDTH/2*LG_BRICK_WIDTH, 0, 0>
    }
  }
  
  #if (LG_LENGTH > 1)
  union {
  #end

    #local HOLE_X = 0;
    #while (HOLE_X < LG_LENGTH)
    object {
      lg_tech_hole_complete
      translate <0, (0.5+HOLE_X)*LG_BRICK_WIDTH, 0>
      translate <0, LG_LENGTH/2*-LG_BRICK_WIDTH, 0>
    }
    #local HOLE_X = HOLE_X + 1;
    #end

  #if (LG_LENGTH > 1)
  }
  #end

#end
