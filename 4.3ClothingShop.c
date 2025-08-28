#include <stdio.h>
#include <string.h>

    int main(){

        char item[50] = "";
        float price = 0.0f;
        int quantity = 0;
        char currency = '$';
        float total = 0.0f;
        char size[20] = "";
        char color[20] = "";


        printf("What would you like to purchase?: ");
        fgets(item, sizeof(item), stdin);
        item[strlen(item) - 1] = '\0';

        printf("What size would you like to get? (S,M,L,XL): ");
        fgets(size, sizeof(size), stdin);
        size[strlen(size) - 1] = '\0';

        printf("What color would you like it to be?: ");
        fgets(color, sizeof(color), stdin);
        color[strlen(color) - 1] = '\0';

        printf("What is the price of your selected item?: ");
        scanf("%f", &price);

        printf("How many would you like to purchase?: ");
        scanf("%d", &quantity);


        total = price * quantity;

        printf("\n");
        printf("___________________________\n");
        printf("\n");

        printf("You have ordered %d %s sized %s %s/s.\n", quantity, size, color, item);
        printf("Your total will be %c%.2f!\n", currency, total);
        printf("Thank you for your patronage!\n");


    return 0;
}