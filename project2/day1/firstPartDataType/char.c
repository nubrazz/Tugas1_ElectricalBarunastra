#include <stdio.h>

// <summary//>
// char is one of the data type in C, used to represent a single character or a small integer.
// char size in memory = 1 byte (8 bits) meaning can store up to 2^8, -128 to 127 if signed, 0 to 255 if unsigned.
// Used to store a single character.

// Represented using ASCII values, meaning char can be declared like below
// char charUsingASCII = 65;
// charUsingASCII will have a value 'A' since 'A' has an ASCII value of 65

// Special char 
// '\n': Newline
// '\t': Tab
// '\0': Null terminator (used to mark the end of a string)

// a string are simply an arrays of char terminated by the null character ('\0'):
// <//summary>

int main(){

    // char charArray[5] ={'a','r','u','n','d'};
    // char charArray[6] ={'a','r','u','n','d'}; //secret '\0'
    // // char string[6]= "arund";
    // printf("%s\n",charArray); //more like printing the address
    // printf("%c\n",charArray[0]);
    // printf("%c\n",charArray[5]); 

    // char string1 [6] = "Hello"; //there is an implicit character called the null terminator '\0'
    //we can check this by defining a character array with no length defined;
    // char stringHello [] = "Hello"; // 'H'(1) 'e'(2) 'l'(3) 'l'(4) 'o'(5) '\0'(6)

    // printf ("%d\n",sizeof(stringHello));
    // printf("%c",stringHello);
    // printf("%s\n",stringHello);

    char stringArray[][6] = {"Arund","Taib","Anton"};
    printf("%s",stringArray[2]);

}