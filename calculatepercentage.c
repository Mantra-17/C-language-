#include<stdio.h>

float calcpercentage(float sci, float math, float sans);
 float sci = 98;
    float math = 98;
    float sans = 98;
int main() {
    

calcpercentage( sci,  math,  sans);

return 0;
}

float calcpercentage(float sci, float math, float sans)   {
    printf("%f\n", ((sci+math+sans)/3));
} 

