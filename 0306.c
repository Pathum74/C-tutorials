/*
Write a C program that prints the integer equivalents of some uppercase letters, lowercase letters, digits and 
special symbols. As a minimum, determine the integer equivalents of the following: A B C a b c 0 1 2 $ * + / and 
the blank character.
*/

#include <stdio.h> 
int main() { 
printf("Integer equivalents:\n"); 
printf("Uppercase letters: A=%d, B=%d, C=%d\n", 'A', 'B', 'C'); 
printf("Lowercase letters: a=%d, b=%d, c=%d\n", 'a', 'b', 'c'); 
printf("Digits: 0=%d, 1=%d, 2=%d\n", '0', '1', '2'); 
printf("Special symbols: $=%d, *=%d, +=%d, /=%d\n", '$', '*', '+', '/'); 
printf("Blank character: space=%d\n", ' '); 
return 0; 
} 