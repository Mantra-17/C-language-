#include<stdio.h>
#include<string.h>

struct book {
    char title[50];
    char author[50];
    int amount;
};

void displaydetails(struct book b) {
    printf("Book Title :%s\n", b.title);
    printf("Book Author :%s\n", b.author);
    printf("Book Amount : %d\n", b.amount);
}

int main()
{
    struct book b;
    
    printf("Enter book Title :");
    fgets(b.title, b.title[50],stdin);

    printf("Enter Author name :\n");
    fgets(b.author,b.author[50],stdin);

    printf("Enter amount of book :");

    scanf("%d", &b.amount);

displaydetails(b);
     printf("lalalalalalalal...................................................................................");

    return 0;
    
}