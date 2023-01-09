#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void myHeader() {
    printf("\t\t\t\t==================================================\n");
    printf("\t\t\t\t||       WELCOME TO MY LITTLE CALCULATOR        ||\n");
    printf("\t\t\t\t||                                              ||\n");
    printf("\t\t\t\t==================================================\n");
}

void myBody() {
    printf("\t\t\t\t|| ------- USE ONE OPEARATION AT A TIME ------- ||\n");
    printf("\t\t\t\t|| ******************************************** ||\n");
    printf("\t\t\t\t||               [1] + ADDITION                 ||\n");
    printf("\t\t\t\t||               [2] - SUBTRACTION              ||\n");
    printf("\t\t\t\t||               [3] / DIVISION                 ||\n");
    printf("\t\t\t\t||               [4] * MULTIPLICATION           ||\n");
    printf("\t\t\t\t||               [5]   SQUAREROOT               ||\n");
    printf("\t\t\t\t||               [6]   MODULO                   ||\n");
    printf("\t\t\t\t||               [0] ! TO CANCEL                ||\n");
    printf("\t\t\t\t|| ******************************************** ||\n");
}

int main() {
     int code;
     float my_Num1, my_Num2;
     char addAnother;


    myHeader ();
    myBody ();
    do {
    printf("\n\t\t\t\t\t      CHOOSE ANY OPERATION: ");
    scanf("%d", &code);
    printf("\n\t\t\t\t==================================================");

    switch(code){
        case 1:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\t  MODE: ADDITION +");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t     ENTER YOUR FIRST NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t\t     ENTER YOUR SECOND NUMBER: ");
            scanf("%f", &my_Num2);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", my_Num1 + my_Num2);
            printf("\n\t\t\t\t==================================================");
        break;
        case 2:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\tMODE: SUBSTRACTION -");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t     ENTER YOUR FIRST NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t\t     ENTER YOUR SECOND NUMBER: ");
            scanf("%f", &my_Num2);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", my_Num1 - my_Num2);
            printf("\n\t\t\t\t==================================================");
        break;
        case 3:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\t  MODE: DIVISION /");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t     ENTER YOUR FIRST NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t\t     ENTER YOUR SECOND NUMBER: ");
            scanf("%f", &my_Num2);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", my_Num1 / my_Num2);
            printf("\n\t\t\t\t==================================================");
        break;
        case 4:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t       MODE: MULTIPLICATION *");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t     ENTER YOUR FIRST NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t\t     ENTER YOUR SECOND NUMBER: ");
            scanf("%f", &my_Num2);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", my_Num1 * my_Num2);
            printf("\n\t\t\t\t==================================================");
        break;
        case 5:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\t  MODE: SQUAREROOT -");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\t ENTER YOUR NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", sqrt(my_Num1));
            printf("\n\t\t\t\t==================================================");
        break;
        case 6:
            system("cls");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t\t   MODE: MODULO ");
            printf("\n\t\t\t\t==================================================");
            printf("\n\t\t\t\t\t     ENTER YOUR FIRST NUMBER: ");
            scanf("%f", &my_Num1);
            printf("\n\t\t\t\t\t     ENTER YOUR SECOND NUMBER: ");
            scanf("%f", &my_Num2);
            printf("\n\t\t\t\t==================================================\n");
            printf("\n\t\t\t\t\t\t   ANSWER: %.3f\n", my_Num1 * my_Num2);
            printf("\n\t\t\t\t==================================================");
            break;
        case 0:
            printf("\n\t\t\t\t||      THANK YOU FOR USING MY CALCULATOR       ||");
            printf("\n\t\t\t\t==================================================\n");
        break;
        default:
            printf("\n\t\t\t\t||  PLEASE ENTER THE RIGHT NUMBER OF OPERATOR   ||");
            printf("\n\t\t\t\t==================================================\n");
            return 0;
    }
    printf("\n\t\t\t\t\t     WANT TO COMPUTE AGAIN? [Y/N]");
    addAnother = getche ();
    system("cls");
    myBody ();

    }while(addAnother == 'y' || addAnother == 'Y');

     printf("\n\t\t\t\t==================================================\n");
     printf("\n\t\t\t\t||      THANK YOU FOR USING MY CALCULATOR       ||");
     printf("\n\t\t\t\t==================================================\n\n\n");

     return 0;
}
