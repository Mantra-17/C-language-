#include<stdio.h>
#include<string.h>

#define Max_team 100

struct Coach {
    char name[50];
    int age;
    int expereince;
};
struct Team {
    char teamname[50];
    char sporttype[50];
    struct Coach coach;
};
void addteam(struct Team teams[], int *teamcount);
void searchteam(struct Team teams[], int teamcount);
void displayteams(struct Teams teams[],int teamcount);
int main() {



    int teamcount=0;
    int choice;
    struct Team teams[Max_team]

    do{
        printf("--------------Sports team management Association--------------");

        printf("1.Add team\n2.Search team\n3.Display all team\n4.Exit\n");
        printf("Enter the number for procedure you want :\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            addteam(teams,&teamcount);
            break;
            case 2:
            searchteam(teams,teamcount);
            break;
            case 3:
            displayteams(teams,teamcount);
            break;
            case 4:
            printf("Exiting...\n");
            break;
            default:
            printf("Invalid choice !! please enter a valid choice\n");
        }
    } while(choice !=4);

    return 0;
}

    void addteam(struct Team teams[], int *teamcount) {
        if(*teamcount>=Max_team){
            printf("Maximum team limit has been reached can't add more teams further\n");
            return;
        }
         struct Team newTeam;

    printf("Enter team name: ");
    fgets(newTeam.teamName, sizeof(newTeam.teamName), stdin);
    newTeam.teamName[strcspn(newTeam.teamName, "\n")] = '\0'; // Remove newline

    printf("Enter sport type: ");
    fgets(newTeam.sportType, sizeof(newTeam.sportType), stdin);
    newTeam.sportType[strcspn(newTeam.sportType, "\n")] = '\0'; // Remove newline

    printf("Enter coach name: ");
    fgets(newTeam.coach.name, sizeof(newTeam.coach.name), stdin);
    newTeam.coach.name[strcspn(newTeam.coach.name, "\n")] = '\0'; // Remove newline

    printf("Enter coach age: ");
    scanf("%d", &newTeam.coach.age);

    printf("Enter coach experience (years): ");
    scanf("%d", &newTeam.coach.experience);

    getchar(); // To consume the newline character left by scanf

    teams[*teamCount] = newTeam;
    (*teamCount)++;

    printf("Team added successfully!\n");
}

 void searchteam(struct Team teams[], int teamcount) {
    char searchName[50];
    int found = 0;

    if (teamCount == 0) {
        printf("No teams available to search.\n");
        return;
    }

    printf("Enter the team name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove newline

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
    