/* goldBall.c */
#include <stdio.h>
#include <math.h>

int main(void) {
   const float PI = acos(0.0); // or you could hardcode 3.14159 etc
   const float DENSITY = 19.3; // grams per cubic cm
   float diameter, radius, volume, surfaceArea, mass;
      
   printf("Enter diameter of gold ball in cm ");
   scanf("%f", &diameter);
   radius = diameter/2;

   volume = 4 * PI * radius*radius*radius /3 ;
   surfaceArea = 4 * PI * radius*radius ;
   mass = volume * DENSITY;

   printf("Your gold ball of diameter %.2f has\n", diameter);
   printf("volume %.2f cm^3,\n surfaceArea %.2f cm^2,\n and mass %.2f g\n",
             volume, surfaceArea, mass);

   return 0;
}
