/*
Write a program which uses the format commands with modifiers to print the following output:

2  4  8
3  9  27
4  16 64

*/

#include <stdio.h> 
 
int main() { 
    int i, j; 
 
    for (i = 2; i <= 4; i++) { 
        for (j = 1; j <= 3; j++) { 
            if (j == 1) 
                printf("%-5d", i); 
            else if (j == 2) 
                printf("%-5d", i * i); 
            else 
                printf("%-5d\n", i * i * i); 
        } 
    } 
 
    return 0; 
}