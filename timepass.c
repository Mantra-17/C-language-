#include <stdio.h>

int main() 
{
  int i,a;    
  
  printf("\n");
  
  printf("\t*\t\t\t\t*");
  
  printf("\n");
  
  printf("\t*\t*\t\t*\t*");
  
  printf("\n");
  
  for(i=0; i<3; i++)
  {
    printf("\t*\t");
  }
  
  for(a=0; a<2; a++)
  {
    printf("\n");
    printf("\t*\t\t\t\t*");
  }
  
  return 0;
}