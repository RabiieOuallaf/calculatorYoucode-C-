#include <stdio.h>

int main() {


    // vars
    int mode;
    int exit = 1;
    char s;
    float FirstNum , SecondNum;

    printf("Wich mode you want to use ? (Math : 1) (programming : 2)(counter : 3)");
    scanf("%d", &mode);
    // The first mode of the calc
    do{
        if(mode == 1) {

        printf("wich symbole you'll like to use ? : ");
        scanf("%c", &s);

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
            printf("Sorry but you've chosed an invalid symbole");
            break;
        };

    
    }else if(mode == 2) { // The second mode of the calc (Programming)
        int FirstInt, SecondInt; 
        printf("\n Warning : THE ONLY AVAILABLE SYMBOLE IS THE REMINDER SYMBOLE");
        printf("\n What is the numbers you want to calculat ? (Enter two numbers) :");
        scanf("%d %d", &FirstInt, &SecondInt);
        printf("%d REMINDER %d = %d", FirstInt , SecondInt, FirstInt % SecondInt);

    }else if(mode == 3){  // The third mode of the calc (Counter)
        int count;
        printf("Enter a numbre please :");
        scanf("%d", &count);
        for(int i = 1; i < count; i++) {
            
            
            
            printf("%d\n", i);

        };

    }else {
        printf("Sorry! the mode you are asking for isn't available");
    };
        printf("If you want to exit from the programm type 0 : ");
        scanf("%d" , &exit);
    }while(exit == 1);

    

};