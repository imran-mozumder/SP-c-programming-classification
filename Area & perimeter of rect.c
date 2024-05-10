/* Write a C program to calculate the area and perimeter of a rectangle. The program should prompt the user to enter the values of length and width, and then calculate and display the area and perimeter based on the provided values. Follow these below formulas.
Area = length * width

Perimeter = 2*(length + width)
*/
#include <stdio.h>

int main()
{
    float length, width, area, perimeter;
    printf("Enter the length:");
    scanf("%f", &length);
    printf("Enter the width:");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of the rectangle: %.2f square units.\n", area);
    printf("Perimeter of the rectangle: %.2f units.\n", perimeter);

    return 0;
}
