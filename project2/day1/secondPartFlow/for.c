#include <stdio.h>

// <summary//>
// all loop will continue looping as long as the condition are meet

// 3 types of loop:
    // a. for loop
    // b. while loop
    // c. do-while loop

// a. for loop:
// syntax:
/*
for (initialization; condition; increment/decrement) {
    //Code to execute
}
*/

// Example:
/*
for (int i = 0; i < 5; i++) {
    printf("%d\n", i); // Prints 0 to 4
}
*/

// b. while loop:
// syntax:
/*
while (condition) {
    //Code to execute
}
*/

// Example:
/*
int i = 0;
while (i < 5) {
    printf("%d\n", i); // Prints 0 to 4
    i++;
}
*/

// c. do-while loop
// Similar to while loop but this loop will execute the code first then checks the condition
// syntax:
/*
do {
    // Code to execute
} while (condition);
*/

// Example:
/*
int i = 0;
do {
    printf("%d\n", i); // Prints 0 to 4
    i++;
} while (i < 5);
*/


// Additional Stuff
// Loop can runs endlessly that kind of loop is called an infinite loop
// Example :
/*
while (1) {  ---> 1 in here is a boolean for true
    printf("Infinite loop\n");
}
*/

// Code to exit or skip loop iteration
// break; ---> Exits the loop immediately.
// continue; ---> Skips the current iteration and moves to the next.

// Loop usually nested to make an algorithm, like in the original file it demonstrated a bubble sort.
// <//summary>




/*

for (initialize expression (1); test expression(2); update expression(4))
{
    //
    // body of for loop (3)
    //
}

while (test expression)
{
   // body consisting of multiple statements
}

do {
 
    // body of do-while loop    
    
} while (condition);
*/
int main(){
    int a = 10;
    ///*
    // int i = 0;
    // for(; i<10; i++,printf("%d ",i)){
    //     ;
    // }
    //*/

   // /*
    https://www.youtube.com/watch?v=0BkoXZBbhfU
    int arr[5] = {10,2,5,11,3};
    int tmp;
    for (int i = 0; i < 5 - 1; i++) {     
        // Last i elements are already in place, so the loop will only num n(5) - i - 1 times
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i =0;i<5;i++){
        printf("%d ",arr[i]);
    }
    //*/

    //WHILE

    // while(1){
    //     //codingan
    // }
    
    // while(a != 11){
    //     printf("value of a = %d\nplease change value of a so it becomes 11 : ",a);
    //     scanf("%d",&a);
    // }
    // printf("thanks!");
    
    a=10;
    while(a<10){
        printf("%d",a);
        a++;
    }

    // printf("\na resets\n");a=0; //change both a to 10 and see what happens
    do{
        printf("%d",a);
        a++;
    }while(a<10);
}