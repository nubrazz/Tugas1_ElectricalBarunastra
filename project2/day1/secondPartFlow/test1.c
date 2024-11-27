// C Program to demonstrate use of bitwise operators
/*
//quick explanation of logical operation
1110 & 0110 = 0110

*/


// <summary//>
// I don't think I need to explain it much further
// <//summary>


#include <stdio.h>
int main()
{
    // a = 5 (00000101 in 8-bit binary), b = 9 (00001001) in 8-bit binary)
    unsigned int a = 5, b = 9;

    // The result is 00000001
    printf("a = %u, b = %u\n", a, b);
    printf("a&b = %u\n", a & b);

    // The result is 00001101
    printf("a|b = %u\n", a | b);
    
    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    // The result is 11111111111111111111111111111010 (not)
    // (assuming 32-bit unsigned int)
    printf("~a = %u\n", a = ~a);

    // The result is 00010010
    printf("b<<1 = %u\n", b << 1); //multiplied by 2

    // The result is 00000100 
    printf("b>>1 = %u\n", b >> 1); //divide by 2

    return 0;
}