#include<stdio.h>
#include<math.h>

float rectanglearea(float a, float b);
float circlearea(float r);
float squarearea(float side);

int main() {
  float a,b;
  float r;
  float side;
printf("enter the value of a,b:");
scanf("%f %f", &a ,&b);
rectanglearea(a,b);
printf("enter radius :");
scanf("%f", &r);
circlearea(r);
printf("enter side :");
scanf("%f", &side);
squarearea(side);
return 0;

}

float rectanglearea(float a, float b) {
  printf("area of reactangle is : %f\n", a*b);
}

float circlearea(float r) {
  printf("area of circle is : %f\n", 3.14*r*r);
}

float squarearea(float side) {
  printf("area of square is : %f\n", side*side);
}
