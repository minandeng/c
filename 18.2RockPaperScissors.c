#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkW(int userC, int compC);
int getU();
int getC();

int main(){

    srand(time(NULL));

    printf("--Rock Paper Scissors--\n");

    int userC = getU();
    int compC = getC();

    printf("-----------------------\n");

    switch(userC){

        case 1:
            printf("You Chose ROCK.\n");
            break;
        case 2:
            printf("You Chose PAPER.\n");
            break;
        case 3:
            printf("You Chose SCISSORS.\n");
            break;
    }
    switch(compC){

        case 1:
            printf("Computer Chose ROCK.\n");
            break;
        case 2:
            printf("Computer Chose PAPER.\n");
            break;
        case 3:
            printf("Computer Chose SCISSORS.\n");
            break;
    }

    printf("-----------------------\n");

    checkW(userC, compC);

}

int getU(){

    int choice = 0;

    do{

        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter Choice (1,2,3): ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

}

int getC(){
    return (rand() % 3) + 1;
}

void checkW(int userC, int compC){

    if(userC == compC){

    printf("It's a TIE!\n");

    }
    else if(( userC == 1 && compC == 3 ) ||
            ( userC == 2 && compC == 1 ) ||
            ( userC == 3 && compC == 2 )){

        printf("You WIN!\n");

    }
    else{
        printf("You LOSE!\n");
    }
}
