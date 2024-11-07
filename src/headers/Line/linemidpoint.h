#include <stdio.h>
#include <stdlib.h>


struct linemidpoint {
    double horizontalPoint;
    double verticalPoint;
};




// * This should only take two args
struct linemidpoint find_Line_Mid_Point(double point1[], double point2[]){
    
    struct linemidpoint midpoint;

    // The actual math
    double horizontalDifference = point1[0] - point2[0];
    double verticalDifference = point1[1] - point2[1];

    double horizontalDistace = horizontalDifference / 2;
    double verticalDistance = verticalDifference / 2;

    // ? Sets the struct return value
    midpoint.horizontalPoint = horizontalDistace;
    midpoint.verticalPoint = verticalDistance;
    return midpoint;
}