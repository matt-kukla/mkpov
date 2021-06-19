/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: positioning.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: June 2021 
    Description: Various macros for positioning objects.
*/            

#ifndef(Nroot_Inc_Temp)
#declare Nroot_Inc_Temp = version;
#version 3.7;

/* Place a copy of object Ob at each of the Nth roots of unity, 
   scaled by radius R, in the xz-plane. */

#macro N_roots(N, R, Ob)
#local K = 0;
union {
#while (K <= N)
    object {
        Ob
        translate R*<cos((2*pi*K)/N), 0, sin((2*pi*K)/N)>
    }
    #declare K = K + 1; 
    #end
}
#end
#end