#include <stdio.h>

int main()
{
    int r;
    float pi = 3.1416, area;

    printf("Enter the radius value of the circle\n", r);
    scanf("%d", &r);


    area = pi*r*r;

    printf("The area is : %f", area);

    return 0;
}
