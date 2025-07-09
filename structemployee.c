#include <stdio.h>

// Define the structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to input employee details
void input_employees(struct Employee e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
}

// Function to display employee details
void display_employees(struct Employee e[], int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", e[i].name, e[i].id, e[i].salary);
    }
}

// Function to calculate average salary
float calculate_average_salary(struct Employee e[], int n) {
    float total_salary = 0;
    for (int i = 0; i < n; i++) {
        total_salary += e[i].salary;
    }
    return total_salary / n;
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    input_employees(e, n);  // Input employees
    display_employees(e, n);  // Display employees

    float avg_salary = calculate_average_salary(e, n);
    printf("Average Salary: %.2f\n", avg_salary);

    return 0;
}
