#include <stdio.h>

int getLength(char note[]) {
    int length = 0;
    while (note[length] != '\0') {
        length++;
    }
    return length;
}

void reverse(char note[]) {
    int length = getLength(note);
    for (int i = 0; i < length / 2; i++) {
        char temp = note[i];
        note[i] = note[length - i - 1];
        note[length - i - 1] = temp;
    }
}

int compare(char note1[], char note2[]) {
    int i = 0;
    while (note1[i] != '\0' && note2[i] != '\0') {
        if (note1[i] != note2[i]) {
            return note1[i] - note2[i];
        }
        i++;
    }
    return getLength(note1) - getLength(note2);
}

void copy(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void concatenate(char note1[], char note2[]) {
    int length1 = getLength(note1);
    int i = 0;
    while (note2[i] != '\0') {
        note1[length1 + i] = note2[i];
        i++;
    }
    note1[length1 + i] = '\0';
}

int main() {
    char note1[100], note2[100], copiedNote[100];
    printf("Enter the first note: ");
    gets(note1);
    printf("Enter the second note: ");
    gets(note2);
    printf("\nLength of the first note: %d", getLength(note1));
    reverse(note1);
    printf("\nReversed first note: %s", note1);
    int result = compare(note1, note2);
    if (result == 0)
        printf("\nBoth notes are the same.");
    else if (result > 0)
        printf("\nFirst note is greater.");
    else
        printf("\nSecond note is greater.");
    copy(copiedNote, note2);
    printf("\nCopied second note: %s", copiedNote);
    concatenate(note1, note2);
    printf("\nConcatenated notes: %s", note1);
    return 0;
}