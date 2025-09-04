#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// MINI PROJECT FOR FUNCTION PROTOTYPES
// MAKE A PROGRAM FOR HIRING PNP OFFICERS BASED ON THEIR HEIGHT AND SEX
// FOR MALES, MINIMUM HEIGHT IS 157CM
// FOR FEMALES, MINIMUM HEIGHT IS 152CM

void mili(char name[50], int height, char sex);
bool heightCheckM(int height);
bool heightCheckF(int height);

int main(){

    char name[50];
    int height;
    char sex;


    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen (name) - 1] = '\0';

    printf("Sex(M or F): ");
    scanf("%c", &sex);

    getchar();
    printf("Height(cm): ");
    scanf("%d", &height);

    mili(name, height, sex);

    switch(sex){

    case 'M':
    if(heightCheckM(height)){

        printf("You are allowed to be a PNP officer!\n");

    } else{

        printf("Failed: You do not meet the criteria of required height for Males.\n");

    }
        break;

    case 'F':
    if(heightCheckF(height)){

        printf("You are allowed to be a PNP officer!\n");

    } else{

        printf("Failed: You do not meet the criteria of required height for Females.\n");

    }
        break;
}

    return 0;
}



void mili(char name[50], int height, char sex){

    printf("-----------------\n");
    printf("Hi %s(%c)!\n", name, sex);
    printf("Your height is %dcm.\n", height);
    printf("-----------------\n");

}

bool heightCheckM(int height){


    if(height >= 157){

        return true;
    }
    else if(height < 157){

        return false;
    }

}
bool heightCheckF(int height){

    if(height >= 152){

        return true;
    }
    else if(height < 152){

        return false;
    }

}
