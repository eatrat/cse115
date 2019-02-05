#include <stdio.h>

int main()
{
    float r;
    float pi = 3.1416, area;

    printf("Enter the radius value of the circle\n", r);
    scanf("%f", &r);


    area = pi*r*r;

    printf("The area is : %f", area);

    return 0;
}
