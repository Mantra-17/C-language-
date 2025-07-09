#include<stdio.h>
void welcomemsg();
int stuno();\
void displaygrades(int grades[], char c);


int main() {
    welcomemsg();
    printf("number of students are %d\n", stuno());
}


void welcomemsg() {
    printf("welcome to the student grading system !\n");
}

int stuno() {
    int n;
    printf("enter the number of students: \n");
    scanf("%d", &n);
    return n;
}

void displaygrades(int grades[], char c) 
{
     printf("\nGrades of students:\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}