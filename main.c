#include <stdio.h>

int main() {


    // vars
    int mode;
    char s;
    float FirstNum , SecondNum;

    printf("Wich mode you want to use ? (Math : 1) (programming : 2)(counter : 3)");
    scanf("%d", &mode);
    // The first mode of the calc
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

    // The second mode of the calc (Programming)
    }else if(mode == 2) {
        int FirstInt, SecondInt; 
        printf("\n Warning : THE ONLY AVAILABLE SYMBOLE IS %");
        printf("\n What is the numbers you want to calculat ? (Enter two numbers) :");
        scanf("%d %d", &FirstInt, &SecondInt);
        printf("%d '%' %d = %d", FirstInt , SecondInt, FirstInt % SecondInt);

    }else if(mode == 3){ // The third mode of the calc (counter)
        int count;
        printf("Enter a number");
        scanf("%d", &count);

        for(int i = 1; i <= count; i++) {

            printf("%d\n", i);

        };

    }else {
        printf("Sorry! the mode you are asking for isn't available");
    };

};