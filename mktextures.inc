/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: mkstones.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: May 2021
    Description: Miscellaneous textures and pigments. 
*/

#ifndef(MKTextures_Inc_Temp)
#declare MKTextures_Inc_Temp = version;
#version 3.7;

#include "colors.inc"

#ifdef(View_POV_Include_Stack)
    #debug "including mktextures.inc"
#end

// Primitive water texture
#declare MK_Water1 = 
pigment {
    crackle 
    turbulence 0.5
    lambda 0.9
    octaves 3
    color_map {
        [0.09 color Turquoise transmit 0.5 ]
        [0.04 color rgb < 0, 0.598039, 1> transmit 0.5 ]
    }
    scale 0.2
}

// Non-transparent version of MK_Water1
#declare MK_Water2 = 
pigment {
    crackle
    turbulence 0.5
    lambda 0.9
    octaves 3
    color_map {
        [0.09 color Turquoise  ]
        [0.04 color rgb < 0, 0.598039, 1> ]
    }
    scale 0.2
}

// Moss on transparent background, for layering over other textures
#declare MK_Moss = 
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
            [0.5 1.0 color rgbt<0.07,0.4, 0.15, 1> color rgbt <0.7,0.4,0.15,1>]
        }
    }
    scale 8
}

#declare MK_Melon = 
pigment {
    granite
    color_map {
        [0 color DarkGreen ]
        [0.6 color LimeGreen ]
        [1 color SpringGreen ]
    }
    scale <1.5, 2, 1>
}

#end
