#include <stdio.h>

int main()  {
  char i;

  for(char i = 'a'; i<='z'; i++) {
char *ptr = &i;
    printf("%c\n", *ptr);
  }
 
}
    