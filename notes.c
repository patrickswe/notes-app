// include

#include <stdio.h>

//prompt the user to enter a note (100 chars)

void getNote(){
    char note[100];
    
    File *fp = fopen("notes.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Please Enter your note (100 chars max): \n");
    scanf(" %[^\n]", note);
    
    fprintf(fp, "%s/n", note);
    fclose(fp);
}


//View Notes
//Read all notes from notes.txt
//Display in order with a note number before each one

void viewNotes{
    FILE *fp = fopen("notes.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);

    }

    fclose(fp);
}
//menu - repeat until user chooses exit

int main(){

    do {
        welcome();
        
        int choice;
        printf("Enter number: ");
        scanf("%d" , &choice);

        switch (choice) {
            case 1:
                printf("Get note goes here\n");
                break;
            case 2:
                printf("viewNotes goes here\n");
                break;
            case 3:
                printf("Goodbye\n");
                break;
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}
                    

