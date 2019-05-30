#include <stdio.h>

  float areaOfcircle(float count);

  int main() {
    float radius1;
    float radius2;
    int count;
    // take radius as input
    printf("Enter the first radius for the range of circle : ");
    scanf("%f", &radius1);
    printf("enter the second radius for the range : ");
    scanf("%f", &radius2);
    //printf("Area of circle : %.2f", areaOfcircle(radius));
    printf("\n");
for (count = radius1; count<radius2; count++)
   //printf("raidus= %f\n radius2 = %f \n", radius1, radius2);
   printf("Area of circle with radius %f: %f \n", count, areaOfcircle(count));
}

float areaOfcircle(float count){
   float area_circle;
   area_circle = 3.14 * count * count;

   return area_circle;
}
