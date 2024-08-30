/*
Input price of 10 items and display the average value of an Item , number of items which the price is greater than 200.
*/

#include <stdio.h> 
 int main() { 
    float prices[10]; 
    float total = 0; 
    int countGreaterThan200 = 0; 
    printf("Enter the prices of 10 items:\n"); 
    for (int i = 0; i < 10; i++) { 
        printf("Item %d: ", i + 1); 
        scanf("%f", &prices[i]); 
        total += prices[i]; 
        if (prices[i] > 200) { 
            countGreaterThan200++; 
        } 
    } 
    float average = total / 10; 
    printf("\nAverage value of an item:  %.2f\n", average); 
    printf("Number of items with price greater than 200: %d\n", 
countGreaterThan200); 
    return 0; 
 }

 