#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int addition(float num1, float num2){
    float sum;
    sum = num1 + num2;
    printf("\nThe sum of %.2f & %.2f is %.2f", num2, num1, sum);
    return 0;
}

int subtraction(float num1, float num2){
    float minus;
    minus = num1 - num2;
    printf("\nThe subtraction of %.2f from %.2f is %.2f", num2, num1, minus);
    return 0;
}

int multiplicatio(float num1, float num2){
    float multi;
    multi = num1 * num2;
    printf("\nThe multiplication between %.2f & %.2f is %.2f", num2, num1, multi);
}

int division(float num1, float num2){
    float div;
    div = num1 / num2;
    printf("\nThe multiplication between %.2f & %.2f is %.2f", num2, num1, div);
}

int main(){
    float num1, num2;
    int i;
    printf("\n\nWelcome to the Simple Calculator!");
    printf("\n\nPlease select an operation:");
    printf("\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit: " );
    while(1){
        printf("\nSelect the choice of operation you want to do:" );
        scanf("%d", &i);
        switch (i)
        {
            case 1:
                printf("\nEnter the first number:");
                scanf("%f", &num1);
                printf("\nEnter the second number:");
                scanf("%f", &num2);
                addition(num1, num2);
                break;
            case 2:
                printf("\nEnter the first number:");
                scanf("%f", &num1);
                printf("\nEnter the second number:");
                scanf("%f", &num2);
                subtraction(num1, num2);
                break;
            case 3: 
                printf("\nEnter the first number:");
                scanf("%f", &num1);
                printf("\nEnter the second number:");
                scanf("%f", &num2);
                multiplicatio(num1, num2);
                break;
            case 4:             
                printf("\nEnter the first number:");
                scanf("%f", &num1);
                printf("\nEnter the second number:");
                scanf("%f", &num2);
                division(num1, num2);
                break;
            case 5:
                printf("Exit.");
                exit(0);
            default:
                printf("\nWrong entry :( ");
                break;
        }
    }
    return 0;
}
