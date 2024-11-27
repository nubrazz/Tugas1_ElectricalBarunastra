#include <stdio.h>

// <summary//>
// Logical operators already explained in the original file.

// if statement will execute the code if the conditions are meet

// else if statement will execute the code if the conditions are met, 
// but only if the previous if or else if conditions aren't meet

// else statement will execute the code if none of the if and else if conditions aren't meet

// In order to use else if and else you must have if first

// Example:
/*
int main() {
    int num = 0;

    if (num > 0) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
*/

// As an alternatives you could use switch case or ternary operator

// switch case:

/*
switch (expression) {
    case constant1:
        // Code to execute if expression == constant1
        break;
    case constant2:
        // Code to execute if expression == constant2
        break;
    ...
    default:
        // Code to execute if no case matches
}
*/

// the expression will be evaluated and compared with each case, 
// if it's a match then the code block in that case will be executed.

// default code block will be executed if none of the cases aren't a match

// ternary operator:

/*
condition ? value_if_true : value_if_false;
*/

// condition: An expression that evaluates to true (non-zero) or false (zero).
// value_if_true: The value or expression returned if the condition is true.
// value_if_false: The value or expression returned if the condition is false.
// <//summary>


/*
    operators : 
    == (a== b)  (1==0) 
    != (a!= b)  (1!=0) (1!=1)
    <  , <= , > ,  >=
    ! (!benar) = (salah). (!salah) = (benar)
    && , || =>(1==1 && 1==0) . (1==1 || 1==0) 
*/
//uses boolean 0 means false, nonzero means true
int main(){
    int a,b,c,d;
    a = 20, b =30;
    printf("enter the value of c = ");
    scanf("%d",&c);
    
    // if(a < c ){        //in boolean this would mean a non zero value if its true, show 1 and 0
    //     printf("a is smaller than c\n");
    // }else{
    //     printf("a is bigger than c\n");
    // }

    //(condition) ? [true_statements] : [false_statements];
    // (a<c)? printf("a is smaller than c\n") : printf("a is not smaller than c\n");

    

    ///*
    // if(a < c ){
    //     printf("a is smaller than c\n");
    // }else if (a == c){
    //     printf("a is equal to c\n");
    // }else if(a>c){ //or we can also use else without specifying the parameter
    //     printf("a is bigger than c\n");
    // }
    //*/

    ///*
        // if(c > 50){ //show what else if do
        //     printf("student c pass\n");
        // }if(c > 50 && c <70){
        //     printf("student c gets a C\n");
        // }if(c >= 70 && c <80){
        //     printf("student c gets a B\n");
        // }if(c >= 80 ){
        //     printf("student c gets an A\n");
        // }else{
        //     printf("student c failed\n");
        // }
    //*/

    // /*
        // printf("and the  value of d = ");
        // scanf("%d",&d);
        // if ( (c%2 ==0) || (d%2==0) ){
        //     printf("atleast one of them is an even number");
        // }else{
        //     printf("none of them are even");
        // }
    // */

    ///*
    //nested if
    // if(c % 2 == 0){
    //     printf("c is even\n");
    //     if(c>10){
    //         printf("c is greater than 10\n");
    //     }else if (c<10){
    //         printf("c is smaller than 10");
    //     }else if (c == 10){
    //         printf("c is equal to 10");
    //     }
    // }else if (c %2 != 0){ // the same as else  if(!(c%2 == 0))
    //     printf("c is odd\n");
    //     if(c>10){
    //         printf("c is greater than 10\n");
    //     }else if (c<10){
    //         printf("c is smaller than 10");
    //     }else if (c == 10){
    //         printf("c is equal to 10");
    //     }
    // }
    
    ///*
    printf("assume c represents which day of the week\nc is ");
    switch (c)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    //*/

}