/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* lg_2959: ~Magnet Cylindrical Casing                                         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* 2014-11-23 Owen Burgoyne                                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_2959)
#else
#declare lg_2959 =
union {
  intersection {
    union {
      torus {
        0.59-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-0.3424+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.50+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-0.342+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.50+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <0.3424-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.59-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <0.3424-LG_CORNER_SPACE, 0, 0>
      }
      difference {
        union {
          cylinder {
            <-0.3424+LG_CORNER_SPACE, 0, 0>,
            <0.3424-LG_CORNER_SPACE, 0, 0>,
            0.59
          }
          cylinder {
            <-0.3424, 0, 0>,
            <0.3424, 0, 0>,
            0.59-LG_CORNER_SPACE
          }
        }
        cylinder {
          <-0.3424-LG_E, 0, 0>,
          <-0.3424+LG_CORNER_SPACE, 0, 0>,
          0.50+LG_CORNER_SPACE
        }
        cylinder {
          <-0.3424, 0, 0>,
          <0.3424, 0, 0>,
          0.50
        }
        cylinder {
          <0.3424-LG_CORNER_SPACE, 0, 0>,
          <0.3424+LG_E, 0, 0>,
          0.50+LG_CORNER_SPACE
        }
      }
    }
    union {
      cylinder {
        <-0.3424+LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, -1>,
        <-0.3424+LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.3424+LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, -1>,
        <-0.3424+LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.3424-LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, -1>,
        <0.3424-LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.3424-LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, -1>,
        <0.3424-LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      box {
        <-0.3424-LG_E, 0.57-LG_CORNER_SPACE, -1>,
        <0.3424+LG_E, -0.57+LG_CORNER_SPACE, 1>
      }
      box {
        <-0.3424+LG_CORNER_SPACE, 0.57, -1>,
        <0.3424-LG_CORNER_SPACE, -0.57, 1>
      }
    }
  }
  torus {
    0.08-LG_CORNER_SPACE
    LG_CORNER_SPACE
    translate <0, 0.72-LG_CORNER_SPACE, 0>
  }
  torus {
    0.08-LG_CORNER_SPACE
    LG_CORNER_SPACE
    translate <0, -0.72+LG_CORNER_SPACE, 0>
  }
  difference {
    cylinder {
      <0, 0.57-LG_E, 0>,
      <0, 0.57+LG_INNER_CORNER_SPACE, 0>,
      0.08+LG_INNER_CORNER_SPACE
    }
    torus {
      0.08+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      translate <0, 0.57+LG_INNER_CORNER_SPACE, 0>
    }
  }
  difference {
    cylinder {
      <0, -0.57+LG_E, 0>,
      <0, -0.57-LG_INNER_CORNER_SPACE, 0>,
      0.08+LG_INNER_CORNER_SPACE
    }
    torus {
      0.08+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      translate <0, -0.57-LG_INNER_CORNER_SPACE, 0>
    }
  }
  cylinder {
    <0, 0.57, 0>,
    <0, 0.72-LG_CORNER_SPACE, 0>,
    0.08
  }
  cylinder {
    <0, -0.57, 0>,
    <0, -0.72+LG_CORNER_SPACE, 0>,
    0.08
  }
  cylinder {
    <0, 0.57, 0>,
    <0, 0.72, 0>,
    0.08-LG_CORNER_SPACE
  }
  cylinder {
    <0, -0.57, 0>,
    <0, -0.72, 0>,
    0.08-LG_CORNER_SPACE
  }
}

#declare lg_2959_clear =
merge {
  intersection {
    merge {
      torus {
        0.59-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-0.3424+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.50+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <-0.342+LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.50+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <0.3424-LG_CORNER_SPACE, 0, 0>
      }
      torus {
        0.59-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate z*90
        translate <0.3424-LG_CORNER_SPACE, 0, 0>
      }
      difference {
        merge {
          cylinder {
            <-0.3424+LG_CORNER_SPACE, 0, 0>,
            <0.3424-LG_CORNER_SPACE, 0, 0>,
            0.59
          }
          cylinder {
            <-0.3424, 0, 0>,
            <0.3424, 0, 0>,
            0.59-LG_CORNER_SPACE
          }
        }
        cylinder {
          <-0.3424-LG_E, 0, 0>,
          <-0.3424+LG_CORNER_SPACE, 0, 0>,
          0.50+LG_CORNER_SPACE
        }
        cylinder {
          <-0.3424, 0, 0>,
          <0.3424, 0, 0>,
          0.50
        }
        cylinder {
          <0.3424-LG_CORNER_SPACE, 0, 0>,
          <0.3424+LG_E, 0, 0>,
          0.50+LG_CORNER_SPACE
        }
      }
    }
    merge {
      cylinder {
        <-0.3424+LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, -1>,
        <-0.3424+LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <-0.3424+LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, -1>,
        <-0.3424+LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.3424-LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, -1>,
        <0.3424-LG_CORNER_SPACE, 0.57-LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      cylinder {
        <0.3424-LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, -1>,
        <0.3424-LG_CORNER_SPACE, -0.57+LG_CORNER_SPACE, 1>,
        LG_CORNER_SPACE
      }
      box {
        <-0.3424-LG_E, 0.57-LG_CORNER_SPACE, -1>,
        <0.3424+LG_E, -0.57+LG_CORNER_SPACE, 1>
      }
      box {
        <-0.3424+LG_CORNER_SPACE, 0.57, -1>,
        <0.3424-LG_CORNER_SPACE, -0.57, 1>
      }
    }
  }
  torus {
    0.08-LG_CORNER_SPACE
    LG_CORNER_SPACE
    translate <0, 0.72-LG_CORNER_SPACE, 0>
  }
  torus {
    0.08-LG_CORNER_SPACE
    LG_CORNER_SPACE
    translate <0, -0.72+LG_CORNER_SPACE, 0>
  }
  difference {
    cylinder {
      <0, 0.57-LG_E, 0>,
      <0, 0.57+LG_INNER_CORNER_SPACE, 0>,
      0.08+LG_INNER_CORNER_SPACE
    }
    torus {
      0.08+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      translate <0, 0.57+LG_INNER_CORNER_SPACE, 0>
    }
  }
  difference {
    cylinder {
      <0, -0.57+LG_E, 0>,
      <0, -0.57-LG_INNER_CORNER_SPACE, 0>,
      0.08+LG_INNER_CORNER_SPACE
    }
    torus {
      0.08+LG_INNER_CORNER_SPACE,
      LG_INNER_CORNER_SPACE
      translate <0, -0.57-LG_INNER_CORNER_SPACE, 0>
    }
  }
  cylinder {
    <0, 0.57, 0>,
    <0, 0.72-LG_CORNER_SPACE, 0>,
    0.08
  }
  cylinder {
    <0, -0.57, 0>,
    <0, -0.72+LG_CORNER_SPACE, 0>,
    0.08
  }
  cylinder {
    <0, 0.57, 0>,
    <0, 0.72, 0>,
    0.08-LG_CORNER_SPACE
  }
  cylinder {
    <0, -0.57, 0>,
    <0, -0.72, 0>,
    0.08-LG_CORNER_SPACE
  }
}

#end
