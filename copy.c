#include <stdio.h>

void welcomeMessage();
int getNumberOfStudents();
void displayGrades(int grades[], int n);
float calculateAverageGrade(int grades[], int n);

int main() {
    welcomeMessage();

    int numStudents = getNumberOfStudents();
    printf("Number of students: %d\n\n", numStudents);

    int grades[numStudents];

    for(int i = 0; i < numStudents; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    displayGrades(grades, numStudents);

    float average = calculateAverageGrade(grades, numStudents);
    printf("\nAverage grade of the students: %.2f\n", average);

    return 0;
}

void welcomeMessage() {
    printf("Welcome to the Student Grading System!\n\n");
}

int getNumberOfStudents() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    return n;
}

void displayGrades(int grades[], int n) {
    printf("\nGrades of students:\n");
    for(int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}

float calculateAverageGrade(int grades[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n;
}