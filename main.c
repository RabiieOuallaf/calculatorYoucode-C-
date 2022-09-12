#include <stdio.h>
#include <stdbool.h>
#include <math.h> 
/* === Functions definition ===

    une fonction est un partie de code qui peut être répété plusieurs fois.

*/

/* === Functions syntax ===

int function_name(param){

    the code you want the function to do by giving it an input (param), 
    And inside the function you'll put a code to give you an output;

};

function_name(a value); this is called the function call , and as the name described it's call the function to do it's work;

*/

 int triangleDrawing(int n, int z) 
 {

    int i, j,k;

    

    for(i = 0; i < n; i++){ // To maintain the length of the triangle;

        for(k=n+z; k >= i; k--){ // to draw the spaces
            printf(" ");
        };

        for(j=1; j <= 2*i+1; j++){ // To draw the stars;
            printf("X");
        };

        

        printf("\n"); // to break the line

    };
                    
};

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

        printf("Wich mode you want to use ?\n Scientific calculator : 1\n counter : 2\n Punshiment game : 3\n Second level mathematical equation : 4\n Triangle Drawing : 5: ");
        scanf("%d", &mode);

        if(mode == 1) {

        printf("wich symbole you'll like to use ? : (+ , - , * , / , % , ! , ^ , 4 : square , sin() : s , cos() : c , tan() : t ) :  ");
        scanf("%s", &s);

        

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

        /* 
            === Important Note ===
            In the very basic mathematical problems (Such as addition and division ...)
                i've left the work to the built-in functions of c;
                in some other advanced topics (Such as sin and tan ..) i've used the math header file to do the work for me;
    

        */   

        switch (s)
        { // === Addition === // 
        case '+':
            printf("What is the numbers you want to addition ? (Enter two numbers) : ");
            scanf("%f %f", &FirstNum, &SecondNum);
            printf("%.1f + %.1f = %.1f" , FirstNum, SecondNum, FirstNum+SecondNum);
            break;

        case '-': // === substriction === //
            printf("What is the numbers you want to substriction ? (Enter two numbers) : ");
            scanf("%f %f", &FirstNum, &SecondNum);
            printf("%.1f - %.1f = %.1f", FirstNum, SecondNum,FirstNum-SecondNum);
            break;
        
        case '*': // === multiplication === //
            printf("What is the numbers you want to multiplication ? (Enter two numbers) : ");
            scanf("%f %f", &FirstNum, &SecondNum);
            printf("%.1f * %.1f = %.1f", FirstNum, SecondNum, FirstNum*SecondNum);
            break;
        case '/': // === division === //
            printf("What is the numbers you want to division ? (Enter two numbers) : ");
            scanf("%f %f", &FirstNum, &SecondNum);
            printf("%.1f / %.1f = %.1f" , FirstNum, SecondNum, FirstNum/SecondNum);
            break;
        case '%': // === reminder of a division === //
            int FirstInt, SecondInt;
            printf("What is the numbers you want to know the reminder of thier division ? (Enter two numbers) : ");
            scanf("%d %d", &FirstInt, &SecondInt);
            printf("%d reminder %d  = %d " , FirstInt, SecondInt, FirstInt % SecondInt);
            break;
        case '!': // === factorial === //
            int n,factorial;
            printf("Wich number you want to know the factorial of it? : ");
            scanf("%d", &n);
            factorial = 1;
            for(int i=1; i <= n; i++){
                factorial=factorial*i;
            };
            printf("\nFactorial of %d is : %d",n , factorial);
            break;
        case '^': // === power === //
            double p,b;
            printf("\n Pleae enter the base and the power : ");
            scanf("%lf%lf", &p,&b);
            double r = pow(p,b);
            printf("The power is %.1lf: ", r);
            break;
        case '4': // === square === //
            double s ,res; 
            printf("Enter a number : ");
            scanf("%lf" , &s);
            res = sqrt(s);
            printf("The Square number of %.1lf is : %.1lf : " , s, res );
            break;
        case 's': // === Sin === //
            double si, result;
            printf("Enter a number please : ");
            scanf("%lf", &si);
            result = sin(si);
            printf("The sin of %.3lf is : %.3lf ", si, result);
            break;
        case 'c': // === cos === //
            double co, ree;
            printf("Enter a number please : ");
            scanf("%lf", &co);
            ree = cos(co);
            printf("The cos of %.3lf is : %.3lf : ", co , ree);
            break;
        case 't': // === tan === //
            double ta, tres;
            printf("Enter a number please : "); 
            scanf("%lf", &ta);
            tres = tan(ta);
            printf("The tan of %.3lf is : %.3lf : ", ta , tres);
            break;
        
        default:
            printf("Sorry, you've enterd an invalid symbole!");
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

    /* this is thr fourth mode and in summary it's a code to solve mathematical equations from the second level */

    }else if(mode == 4) {

        double a,b,c,delta;

        printf("Pleas enter the value of the mathematical equation (a,b,c) : ");
        scanf("%lf%lf%lf" , &a, &b, &c);

    /* Calculate delta */

        delta = (pow(b,2)- (4*a*c));


    /* if\else to maintain all the possible scenarios in this case; */

        if(delta == 0) {

            double Osolution = -b/2*a; 
            printf("This equation accept one solution : %.3lf" , Osolution);

        }else if(delta > 0) {

            double Fsolution, Ssolution;

            Fsolution = b + sqrt(delta) / 2*a;

            Ssolution = b - sqrt(delta) / 2*a;

            printf("The equation accept two solution s={%.3lf ; %.3lf}", Fsolution, Ssolution);

        }else if(delta < 0){
            
            printf("Well! the complex number is kinda an advanced topic for this project , so yeah thanks :) ");
        };
        
        /*=== When the user chose the fifth mode call the triangleDrawing(n) to draw a triangle===*/

        }else if(mode == 5){
            int n, r, i;
            printf("How long you want your triangle to be : ");

            scanf("%d" , &n);

            printf("How many triangles you want to draw ? : ");

            scanf("%d", &r);



            
            // Asking to user the chose the length;
            for(i = 1; i <= r; i++){

                // function call;

                // triangle

                triangleDrawing(n, r-i);
                n++;
                

            };

            
            
            

        }else {

            printf("\nSorry! the mode you are asking for isn't available");
        };
            

        
   
    // ======= this part to change the value of var exit if the users want to exit from the programm ===== //
        printf("\nIf you want to exit from the programm type 0 if you want to continue type 1 : ");
        scanf("%d" , &exit);
    }while(exit == 1);
};



