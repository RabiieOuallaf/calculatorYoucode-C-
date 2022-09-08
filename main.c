#include <stdio.h>

int main() {


    // =====Important vars=====
    int mode;
    int exit = 1;
    char s;
    float FirstNum , SecondNum;

    printf("Wich mode you want to use ? (Math : 1) (programming : 2)(counter : 3)");
    scanf("%d", &mode);
    // ======a do while loop to exit the programm when the user wants to====;
    do{
        if(mode == 1) {

        printf("wich symbole you'll like to use ? : ");
        scanf("%c", &s);

        printf("What is the numbers you want to calculat ? (Enter two numbers) : ");
        scanf("%f %f", &FirstNum, &SecondNum);

        // ======The first mode=======

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

    // ======The second mode of the calc (Programming)======
    }else if(mode == 2) {
        int FirstInt, SecondInt; 
        printf("\n Warning : THE ONLY AVAILABLE SYMBOLE IS THE REMINDER SYMBOLE");
        printf("\n What is the numbers you want to calculat ? (Enter two numbers) :");
        scanf("%d %d", &FirstInt, &SecondInt);
        printf("%d REMINDER %d = %d", FirstInt , SecondInt, FirstInt % SecondInt);

    // =======The third mode of the calc (Counter)=======

    }else if(mode == 3){ 
        int count;
        printf("Enter a numbre please :");
        scanf("%d", &count);
        for(int i = 1; i < count; i++) {
            
            
            
            printf("%d\n", i);

        };
    // =======if the user picked an invalid number printf the following=======
    }else {

        printf("\nSorry! the mode you are asking for isn't available");
    };

    // ======= this part to change the value of var exit if the users want to exit from the programm =====
        printf("\nIf you want to exit from the programm type 0 : ");
        scanf("%d" , &exit);
    }while(exit == 1);

    

};