#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100


struct Coach {
    char name[50];
    int age;
    int experience; 
};

struct Team {
    char teamName[50];
    char sportType[50];   
    struct Coach coach; 
};


void addTeam(struct Team teams[], int *teamCount);
void searchTeam(struct Team teams[], int teamCount);
void displayTeams(struct Team teams[], int teamCount);

int main() {
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;

    do {
   
        printf("\n--- Sports Team Management ---\n");
        printf("1. Add Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                addTeam(teams, &teamCount);
                break;
            case 2:
                searchTeam(teams, teamCount);
                break;
            case 3:
                displayTeams(teams, teamCount);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addTeam(struct Team teams[], int *teamCount) {
    if (*teamCount >= MAX_TEAMS) {
        printf("Team limit reached. Cannot add more teams.\n");
        return;
    }

    struct Team newTeam;

    printf("Enter team name: ");
    fgets(newTeam.teamName, sizeof(newTeam.teamName), stdin);
    newTeam.teamName[strcspn(newTeam.teamName, "\n")] = '\0';

    printf("Enter sport type: ");
    fgets(newTeam.sportType, sizeof(newTeam.sportType), stdin);
    newTeam.sportType[strcspn(newTeam.sportType, "\n")] = '\0'; 

    printf("Enter coach name: ");
    fgets(newTeam.coach.name, sizeof(newTeam.coach.name), stdin);
    newTeam.coach.name[strcspn(newTeam.coach.name, "\n")] = '\0'; 

    printf("Enter coach age: ");
    scanf("%d", &newTeam.coach.age);

    printf("Enter coach experience (years): ");
    scanf("%d", &newTeam.coach.experience);

    getchar(); 

    teams[*teamCount] = newTeam;
    (*teamCount)++;

    printf("Team added successfully!\n");
}


void searchTeam(struct Team teams[], int teamCount) {
    char searchName[50];
    int found = 0;

    if (teamCount == 0) {
        printf("No teams available to search.\n");
        return;
    }

    printf("Enter the team name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\nTeam found:\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Team not found.\n");
    }
}


void displayTeams(struct Team teams[], int teamCount) {
    if (teamCount == 0) {
        printf("No teams available to display.\n");
        return;
    }

    for (int i = 0; i < teamCount; i++) {
        printf("\n--- Team %d ---\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}