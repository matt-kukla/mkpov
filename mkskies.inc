/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: mkskies.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: May 2021
    Description: Sky-themed pigments.
*/


#ifndef(MKSkies_Inc_Temp)
#declare MKSkies1_Inc_Temp = version;
#version 3.7;

#include "colors.inc"

#ifdef(View_POV_Include_Stack)
    #debug "including mkskies.inc"
#end

/*  Cloud pigments with transparent background.  
    These are intended to be overlaid on a darker plane or sky sphere. 
*/

#declare MK_Clouds1 = 
pigment{
    granite 
    turbulence .8 
    octaves 8
    omega 0.1
    lambda .2
    color_map { 
        [0.1 rgbt <0,0,0,1>]
        [1.0 rgb 1]
    }
    scale 4
}

#declare MK_Clouds2 = 
pigment {
    bozo
    turbulence 0.65
    octaves 8
    omega 0.7
    lambda 2
    color_map {
        [0.0 0.1 color rgb <0.85, 0.85, 0.85> color rgb <0.75, 0.75, 0.75>]
        [0.1 0.5 color rgb <0.75, 0.75, 0.75> color rgbt <1, 1, 1, 1>]
        [0.5 1.0 color rgbt <1, 1, 1, 1> color rgbt <1, 1, 1, 1>]
    }
        translate -8*x
        scale 0.5
}

/* Stars -- I prefer this pattern over the ones in stars.inc
   Intended to be layered over darker background. 
*/

#declare MK_Stars1A =
pigment {
    bozo 
    turbulence 5
    color_map {
        [ 0 2*White ]
        [ 0.2 Clear ]
    }
    scale .05
}

// Stars from above on black background (as one pigment)
#declare MK_Stars1 =
pigment {
    bozo
    turbulence 5
    color_map {
        [ 0 2*White ]
        [ 0.2 Black ]
    }
    scale .05
}

#end
