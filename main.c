#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>  

int main() {


    // =====Important vars===== //

    // === Cette variable contiendra le numéro de mode que l'utilisateur a tapé === //

    int mode;  

    // === La valeur par défaut de la variable exit est de un === //

    int exit = 1; 

    // === Cette variable contient le symbole que l'utilisateur a choisi === //

    char s; 

    // === Ces deux variables contiennent les deux nombres que l'utilisateur veut calculer. === //

    float FirstNum , SecondNum; 

    // ==== la fonction printf demandera à l'utilisateur de choisir le numéro de mode qu'il souhaite. ==== // 

    printf("Wich mode you want to use ? (Math : 1)(counter : 2)(Punshiment game : 3) : ");
    scanf("%d", &mode);
    // ==== une boucle do while pour sortir du programme lorsque l'utilisateur veut ==== //

    /* === Syntax of the do while === 

    do{
        something;
    }while( a condition is true);

    explain : 
    this loop will be excited only if a certain statement is true

    Like : eat while you are hungy

    */
    do{

        // ==== If/Else i've used it to switch between mods === //
        // === Syntax ===//
        /* 

            if(condition) {
                do somthing;
            }else if(another case){
                do something;
            }else {
                // in any other case else the ones we've assigned;
                do something else 
                like post an err in the console or a warning in the screen or anything fit your programme goal;
            }

        */

        if(mode == 1) {

        printf("wich symbole you'll like to use ? : ");
        scanf("%s", &s);

        printf("What is the numbers you want to calculat ? (Enter two numbers) : ");
        scanf("%f %f", &FirstNum, &SecondNum);

        // ======The first mode=======

        /* switch / case syntax 

            switch(a statement) {
                case 'something' : a certain statement : 

                Do somthing! 
                defualt : 

                it's kinda like else in if/ else loop; 

    
            };

            example : in case that i'm sick i will rest;

        */

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
        case '%':
            int FirstInt, SecondInt;
            printf("%.1f reminder %.1f" , FirstInt % SecondInt);
        
        default:
            printf("Sorry but you've chosed an invalid symbole");
            break;
        };

    // =======The second mode of the calc (Counter)======= // 

    // ==== This is a very simple mode it will told you the smaller numbers than the numbeer you've already chosed ==== //

    }else if(mode == 2){ 
        int count;
        printf("Enter a numbre please :");
        scanf("%d", &count);

        // ==== for loop syntax ==== //
        /* 

            for(int i = 0 ; i < a number (Let's say its 3); i++ (Increamnt i) ){
                printf(i); // print i (in our case it will print 0 1 2);
                warning : for loops have a lot of important roles like looping over arrays or doing a piece of code several times ... wich is kinda advanced
            }

        */

        for(int i = 1; i < count; i++) {  
            
            printf("%d\n", i);

        };
    // ==== if the user picked an invalid number printf the following ===== //
    }else if(mode == 3) {
        int num;
        int i = 0;

        printf("well , chose a number and be sure that's this number isn't zero , be sure about that !! : ");
        scanf("%d" , &num);
        
        if(num != 0) printf("Good boy <3");
        while(num == 0 &&  i < 30){
            printf("\nDon't do it again!!");
            i++;
        };
    }
    else {

        printf("\nSorry! the mode you are asking for isn't available");
    };

    // ======= this part to change the value of var exit if the users want to exit from the programm ===== //
        printf("\nIf you want to exit from the programm type 0 if you want to continue type 1 : ");
        scanf("%d" , &exit);
    }while(exit == 1);

    

};