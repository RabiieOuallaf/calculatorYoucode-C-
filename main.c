#include <stdio.h>

int main() {


    char symbole;
    float FirstNum , SecondNum;

    printf("wich symbole you'll like to use ? : ");
    scanf("%c", &symbole);

    printf("What is the numbers you want to calculat ? (Enter two numbers) : ");
    scanf("%f", &FirstNum);
    scanf("%f" , &SecondNum);

    switch (symbole)
    {
    case '+':

        printf("%.1f + %.1f = %.1f" , FirstNum, SecondNum, FirstNum+SecondNum);
        break;

    case '-':
        printf("%.1f - %.1f = %.1f", FirstNum, SecondNum,FirstNum-SecondNum);
        break;
    
    case '*':
        printf("%.1f * %.1f = %.1f", FirstNum, SecondNum, FirstNum*SecondNum);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f" , FirstNum, SecondNum, FirstNum/SecondNum);
        break;
    
    default:
        break;
    };
};