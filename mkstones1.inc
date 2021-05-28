/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: mkstones1.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: May 2021
    Description: Collection of additional stone textures for POV-Ray.
*/

#ifndef(MKStones1_Inc_Temp)
#declare MKStones1_Inc_Temp = version;
#version 3.7;

#include "colors.inc"
#include "textures.inc"
#include "stones.inc"

#ifdef(View_POV_Include_Stack)
    #debug "including mkstones1.inc"
#end

/*  Contains MK_Stone1 through MK_Stone12.  

    These textures were written and tested with POV-Ray 3.7, but should behave in 
    a nearly identical manner under previous versions.

    Most of them do not define a finish -- I leave this for the user to adjust
    within each scene they use the textures in.

*/

// Mossy turquoise 
#declare MK_Stone1 = 
texture {T_Grnt17 scale 4.0}
texture {T_Grnt23a scale 3.5 
        finish{ phong 1.0 phong_size 90 }
}

// Lapis lazuli
#declare MK_Stone2 = 
texture { pigment { rgb <0,0,1>} }
texture {T_Crack2 scale 8}
texture {T_Crack4 scale 2}
texture {T_Grnt14a 
        finish { brilliance 1.825 }
}

// Dark gray with white streaks (fewer than T_Stone31)
#declare MK_Stone3 = 
texture { pigment { rgb 0*0.05 } }
texture {
    pigment {
        agate
        turbulence 0.9
        lambda 4
        color_map{
            [0.1, 0.4 color White transmit 0.0 color DimGray transmit 0.5]
            [0.5, 0.4 color DimGray transmit 0.5 color DimGray transmit 0.8]
            [0.4, 1.0 color DimGray transmit 0.8 color DimGray transmit 0.9]
        }
        scale 5.0
    }
    
}

// Bloodstone
#declare MK_Stone4 =
texture { pigment { rgb <.07, .19, .15> } }
texture { T_Crack2 scale 5 }
texture { pigment {
            bozo 
            turbulence 0.6
            octaves 6
            omega 0.8
            color_map {
                [0.40 color rgb <0.65, 0.09, 0.09> ]
                [0.3 color rgbt <0,0,0, 1>]
                [1.0 color rgbt <0.65, 0.09 ,0.09, 1>]
        }
        scale 0.35
    }
    finish{ phong 1.0 phong_size 90 }
}

// Green jasper with white feathering
#declare MK_Stone5 = 
texture {
    pigment {
        granite 
        turbulence 0.05
        color_map {
            [0.5, 0.7 color DarkGreen color rgb <0.03, 0.18, 0.08>]
        }
    }
}
texture {T_Grnt19a finish{ phong 1.0 phong_size 90 } }

// Moss on marble
#declare MK_Stone6 = 
texture {
    pigment {
        agate
        turbulence 0.75
        color_map {
            [0.0 rgb <0.9, 0.9, 0.9>]
            [0.8 rgb <0.5, 0.5, 0.5>]
            [1.0 rgb <0.2, 0.2, 0.2>]
        }
    }
}

texture {
    pigment {
        bozo
        turbulence 0.75
        octaves 8
        omega 0.7
        lambda 4
        color_map {
            [0.0 0.1 color rgb <0.07, 0.4, 0.15> color rgb <0.7,0.4, 0.15>]
            [0.1 0.5 color rgb <0.07,0.4, 0.15> color rgbt <0.7, 0.4, 0.15, 1>]
            [0.5 1.0 color rgbt<0.07,0.4, 0.15, 1> color rgbt <0.7,0.4, 0.15,1>]
        }

    }
    scale 8
}

// Black/Grey veined granite interspersed with larger brown veins
#declare MK_Stone7 =
texture{
    crackle turbulence 0.8
    texture_map {
        [0 T_Grnt15]
        [0.07 T_Grnt7]
        [0.085 T_Grnt15]
        [1 T_Grnt15]
    }
scale 0.5
}

// Brown and black speckles
#declare MK_Stone8 =
texture {
    pigment {
    agate
    turbulence 0.9
    lambda 4
        color_map {
            [0.2 rgb .05]
            [0.5 rgb <0.9, 0.7, 0.6>]
          //  [0.6 rgb <0.9, 0.7, 0.4>]
            [1.0 rgb <0.7, 0.4, 0.2>]
        }
    }
}

// White Granite
#declare MK_Stone9 = 
texture {
    pigment {
        granite
        turbulence 0.7
        color_map { 
            [0.0 rgb <0.9, 0.9, 0.9>]
            [0.8 rgb <0.5, 0.5, 0.5>]
            [1.0 rgb <0.2, 0.2, 0.2>]
        }
    }
}

// Pink Granite
#declare MK_Stone10 = 
texture {
    pigment {
        granite 
        turbulence 0.7
        color_map {
                [0.0 rgb <0.8, 0.8, 0.6>]
                [0.8 rgb <0.8, 0.4, 0.4>]
                [1.0 rgb <0.8, 0.2, 0.2>]
        }
    }
}

// White marble, gray veins
#declare MK_Stone11 = 
texture {
    pigment {
        granite 
        turbulence 0.2
        color_map {
            [0.0, 0.3 color Gray05 color Gray90]
        }
    }
    scale 2
}

// Dark gray marble, white veins
#declare MK_Stone12 = 
texture {
    pigment {
        granite
        turbulence 0.2
        color_map {
            [0.0, 0.3 color Gray90 color Gray05]
        }
    }
    scale 2
}

#end
