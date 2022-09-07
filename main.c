#include <stdio.h>

int main() {


    // vars
    int mode;
    char s;
    float FirstNum , SecondNum;

    printf("Wich mode you want to use ? (Math : 1) (programming : 2)");
    scanf("%d", &mode);

    if(mode == 1) {

        printf("wich symbole you'll like to use ? : ");
        scanf("%s", &s);

        printf("What is the numbers you want to calculat ? (Enter two numbers) : ");
        scanf("%f %f", &FirstNum, &SecondNum);

        // the calcul

        switch (s)
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


    }else if(mode == 2) {
        int FirstInt, SecondInt; 
        printf("\n Warning : THE ONLY AVAILABLE SYMBOLE IS %");
        printf("\n What is the numbers you want to calculat ? (Enter two numbers) :");
        scanf("%d %d", &FirstInt, &SecondInt);
        printf("%d '%' %d = %d", FirstInt , SecondInt, FirstInt % SecondInt);

    };  

};