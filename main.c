#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

int main(){

    double x1, y1, x2, y2;
    printf("Please input x1,y1,x2,y2:\n");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    rectangle mypoints = { {x1, y1} , { x2, y2} };
    
    printf("The area of the rectangle is %.2f.\n"
        "The perimeter of the rectangle is is %.2f.\n"
        "The diagonal length of the rectangle is is %.2f.\n",
        rectangleArea( &mypoints), 
        rectanglePerimeter( &mypoints),
        rectangleDiagonal( &mypoints));
        
        getchar();
        getchar();
    return 0;
}