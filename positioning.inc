/*  Persistence of Vision Ray Tracer version 3.7 Include File
    File: positioning.inc
    Author: Matt Kukla <matt.kukla@yandex.com>
    Last updated: January 2024
    Description: Various macros for positioning objects.
*/            

#ifndef(Positioning_Inc_Temp)
#declare Positioning_Inc_Temp = version;
#version 3.7;

/*  Place N copies of Ob evenly spaced in a circle of radius R. */
#macro RotSpace(N, R, Ob)
    RotSpace_SR(N, R, Ob, 0, 0)
#end

/* Place N copies of Ob evenly spaced in a circle of radius R.
   Each copy of Ob is scaled by 1+S*K and rotated by R*K for each 0 <= K = N.
*/
#macro RotSpace_SR(N, R, Ob, Sc, Rt)
#local K = 0;
union {
    #while (K < N)
        object{
           Ob
           rotate Rt*K
           scale 1+Sc*K
           translate R*x
           rotate (K*360/N)*y
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
