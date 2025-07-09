#include <stdio.h>
#include <unistd.h>
int main() {
    float weight, height, bmi,stride_length, distance,activity_factor, calories,age,bmr;
    int gender,steps,exercises, reps, i,interval;
    char exercise_name[50];
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in meter: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);
    
    if (bmi < 18.5)
        printf("You are underweight.\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("You are normal weight.\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("You are overweight.\n");
    else
        printf("You are obese.\n");
    

    printf("Enter your age in years: ");
    scanf("%f", &age);

    printf("Enter your gender (1 for male, 2 for female): ");
    scanf("%d", &gender);

    if (gender == 1) {
        bmr = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
    } else {
        bmr = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
    }

    printf("Select your activity level:\n");
    printf("1. Sedentary (little or no exercise)\n");
    printf("2. Lightly active (light exercise/sports 1-3 days/week)\n");
    printf("3. Moderately active (moderate exercise/sports 3-5 days/week)\n");
    printf("4. Very active (hard exercise/sports 6-7 days a week)\n");
    printf("5. Super active (very hard exercise, physical job, or training)\n");
    scanf("%f", &activity_factor);

    switch ((int)activity_factor) {
        case 1:
            calories = bmr * 1.2;
            break;
        case 2:
            calories = bmr * 1.375;
            break;
        case 3:
            calories = bmr * 1.55;
            break;
        case 4:
            calories = bmr * 1.725;
            break;
        case 5:
            calories = bmr * 1.9;
            break;
        default:
            printf("Invalid input.\n");
            return 1;
    }

    printf("Your daily caloric needs: %.2f calories/day\n\n\n", calories);
    
        

    printf("Enter the number of steps taken: ");
    scanf("%d", &steps);

    printf("Enter your stride length in meter: ");
    scanf("%f", &stride_length);

    distance = steps * stride_length;

    printf("Total distance covered: %.2f meters\n\n", distance);
    
    

    printf("Enter the number of exercises in your workout plan\n: ");
    scanf("%d", &exercises);

    for (i = 1; i <= exercises; i++) {
        printf("Enter the name of exercise %d\n", i);
        scanf("%s", exercise_name);

        printf("Enter the number of reps for %s\n: ", exercise_name);
        scanf("%d", &reps);

        // printf("%s: %d reps\n", exercise_name, reps);
    }

    printf("Your workout plan is ready!\n");
     

    printf("Enter the reminder for interval in drink water : ");
    scanf("%d", &interval);

    while (1) {
        printf("Reminder: Drink water!\n");
        sleep(interval * 60);
    }



    return 0;

}