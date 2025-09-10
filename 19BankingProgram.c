#include <stdio.h>

void checkBal(float balance);
float deposit();
float withdraw(float balance);

int main(){


    int choice = 0;
    float balance = 0.0f;

    printf("---WELCOME TO THE CENTRAL BANK---\n");

    do{

        printf("\nSelect an Option\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("\nEnter Option: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                checkBal(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("-----------------------------------------\n");
                printf("Thank you for choosing our services!\n");
                printf("-----------------------------------------\n");
                break;
            default:
                printf("-----------------------------------------\n");
                printf("Invalid Choice! Please select 1-4 only!\n");
                printf("-----------------------------------------\n");
        }

    }while(choice != 4);
    return 0;

}

void checkBal(float balance){

    printf("-----------------------------------------\n");
    printf("Your Current Balance is: $%.2f\n", balance);
    printf("-----------------------------------------\n");

}


float deposit(){

    float amount = 0.0f;

    printf("-----------------------------------------\n");
    printf("Enter Amount to Deposit: $");
    scanf("%f", &amount);
    printf("-----------------------------------------\n");
    if(amount < 0){
        printf("-----------------------------------------\n");
        printf("INVALID AMOUNT!");
        printf("-----------------------------------------\n");
        return 0;
    }
    else{
    printf("-----------------------------------------\n");
    printf("Successfully Deposited $%.2f!\n", amount);
    printf("-----------------------------------------\n");
    }

    return amount;
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("-----------------------------------------\n");
    printf("Enter Amount to Withdraw: $");
    scanf("%f", &amount);
    printf("-----------------------------------------\n");

    if(amount < 0){
        printf("-----------------------------------------\n");
        printf("Invalid Amount!\n");
        printf("-----------------------------------------\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("-----------------------------------------\n");
        printf("Your Balance is Insufficient! \n");
        printf("-----------------------------------------\n");
        return 0.0f;
    }
    else{
        printf("-----------------------------------------\n");
        printf("Succesfully Withdrawn $%.2f\n", amount);
        printf("-----------------------------------------\n");
    }


    return amount;
}
