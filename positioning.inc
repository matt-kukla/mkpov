/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: positioning.inc
    Author: Matt Kukla <matt.kukla@yandex.ru>
    Last updated: June 2021 
    Description: Various macros for positioning objects.
*/            

#ifndef(Positioning_Inc_Temp)
#declare Positioning_Inc_Temp = version;
#version 3.7;

/* Places a copy of object Ob at each of the Nth roots of unity 
   (at distance R from 0) in the xz-plane. */

#macro N_roots(N, R, Ob)
    N_roots_SR(N, R, Ob, 0, 0)
#end

/* Places a copy of Ob at each Nth root of unity in the xz-plane.
   Each copy of Ob is scaled by 1+S*K and rotated by R*K for each 0 <= K <= N. */

#macro N_roots_SR(N, R, Ob, Sc, Rt)
#local K = 0;
union {
    #while (K <= N)
        object { 
            Ob
            scale 1+Sc*K
            rotate Rt*K
            translate R*<cos((2*pi*K)/N), 0, sin((2*pi*K)/N)>
        }
        #declare K = K + 1;
    #end
}
#end 

/* Create N copies of object Ob in a row, starting at Start and 
   spaced apart by Space. */

#macro Row(Ob, Start, N, Space) 

Row_SR(Ob, Start, N, Space, 0, 0)

#end

/* Create N copies of object Ob in a row, starting at Start and 
   spaced apart by Space, scaled by 1+S*K and rotated by R*K for each 0 <= K <= N */

#macro Row_SR(Ob, Start, N, Space, R, S)
#local K = 0;
union {
    #while (K < N)
        object {
            Ob
            scale 1+S*K
            rotate R*K
            translate Start + K*Space
        }
        #declare K = K + 1;
    #end
}
#end 

#end
