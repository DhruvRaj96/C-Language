#include <stdio.h>

int main(){
    //using hard coded inputs
    //int length = 5;
    //int breadth = 3;
    //printf("The area of the rectangle is %d", length*breadth);
    //return 0;
    // using inputs supplied by the users 
    int length , breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d", length*breadth);
    
}