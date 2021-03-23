#include <stdio.h> //Pre-processor directive to include standard input and output functions header file  
int main(){ //Main function
    int x, y; //Integer variable declaration
    //Printf and Scanf function calling
    printf("Enter the first number: "); 
    scanf("%d", &x); 
    printf("\nEnter the second number: "); 
    scanf("%d", &y); 
    //For swapping the two numbers
    int temp = x; 
    x = y; 
    y = temp; 
    printf("\nAfter Swapping:\nFirst number = %d\nSecond number = %d\n", x, y); //For printing the numbers after swapping
    return 0; //Return function
}