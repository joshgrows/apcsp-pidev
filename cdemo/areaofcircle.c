#include <stdio.h>
int areaofcircle(int r){
int area;
area = 3.14 * r * r;
return area;
}
int main()
{
int counter = 3.5;
for (counter=3.5; counter < 12.5;){
printf ("the area of the circle is %d\n", areaofcircle(counter));
(counter++);
} 
}
