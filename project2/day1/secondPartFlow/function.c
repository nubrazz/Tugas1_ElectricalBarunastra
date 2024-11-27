#include <stdio.h>

// <summary//>
// function can be declared like this
/*
return_type function_name(parameters) {
    // Function body
    return value; // Optional, based on return type
}
*/

// return_type: type of data that the function will give after it runs
// function_name: name of the function
// parameters: parameters that the function need for it to run, parameters could also be made optional

// function could also be a type "void" meaning it will not return anything after it runs
// <//summary>

int sum(int a, int b){
    int result = a +b;
    return result; //or we can just do return a + b ;
}

void summation(int a , int b){
    int result = a +b; //we can alo use the sum function before making it a function inside a function
    printf("result of x + y is = %d\n",result);
}

int main(){
    int x = 10, y = 20;
    int result = sum(x,y);
    printf("value of x = %d, value of y = %d\n",x,y);
    // printf("summed value of both of them (x+y)= %d",result);
    summation(x,y);

    return 0;
}