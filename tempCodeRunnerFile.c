note1[i]<note2[i]){
    return -1;
}

}
return 0;
}

int main()
{
char note1[100],note2[100],copiednote[200];
printf("Enter fist note\n:");
fgets(note1,100,stdin);
printf("Enter second note \n:");
fgets(note2,100,stdin);

printf("length of first note is %d\n", calclength(note1));
printf("length of first note is %d\n", calclength(note2));

reverse(note1);
