#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 4 * PI * radius * radius;

    printf("Surface area = %.2f\n", area);

    return 0;
}
