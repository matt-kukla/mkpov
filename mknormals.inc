/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: mknormals.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: May 2021
    Description: Collection of additional normal patterns for POV-Ray.
*/

#ifndef(MKNormals_Inc_Temp)
#declare MKNormals_Inc_Temp = version;
#version 3.7;

#ifdef(View_POV_Include_Stack)
    #debug "including mknormals.inc"
#end

// Lines
#declare MK_Lines_Normal = 
normal {
    gradient x 2
    slope_map {
        [0 <0, 1>]
        [1 <0, -1>]
    }                                                        
}

// Layered, rotated lines to create tiles
#declare MK_Tiles = 
normal {
    average normal_map {
        [1 MK_Lines_Normal]
        [1 MK_Lines_Normal rotate 90*y]
    }   
}

#end
