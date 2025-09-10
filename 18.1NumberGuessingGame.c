#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// NUMBER GUESSING GAME

int main(){

    srand(time(NULL));

    int min = 1;
    int max = 50;
    int guess = 0;
    int tries = 0;
    int randomNum = (rand() % (max - min + 1)) + min;

    while(guess != randomNum){

    printf("Guess a number between %d - %d: ", min, max);
    scanf("%d", &guess);
    tries++;

        if(guess > randomNum){
            printf("Too HIGH!\n");
        }
        else if(guess < randomNum){
            printf("Too LOW!\n");
        }

    }

    if(guess == randomNum){
        printf("CONGRATULATIONS! YOU GUESSED CORRECTLY: %d\n", randomNum);
        if(tries <= 5){
        printf("You have taken a total of %d tries. Good Job!\n", tries);
        }
        else if(tries > 5){
        printf("You have taken a total of %d tries. You can do better!\n", tries);
        }
    }

    return 0;
}
