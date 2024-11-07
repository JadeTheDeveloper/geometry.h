#include <stdio.h>
#include <stdlib.h>


double *find_Line_Mid_Point(double point1[], double point2[]){
    
    double horizontalDifference = point1[0] - point2[0];
    double verticalDifference = point1[1] - point2[1];

    double horizontalDistace = horizontalDifference / 2;
    double verticalDistance = verticalDifference / 2;

    double calculatedPoint[] = {horizontalDifference, verticalDistance}; 
    
    return calculatedPoint;
}