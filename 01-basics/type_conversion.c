#include <stdio.h>

int main(void){

    int a = 9;
    int b = 4;
    int total_seconds = 7384;

    double x = a / b + 0.5;
    double y = a / (b + 0.0);
    double z = (double)(a + b) / 2;

    int Hours = total_seconds / 3600;
    int Minutes = (total_seconds % 3600) / 60;
    int Seconds = total_seconds % 60;

    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);

    printf("Hours = %d\n", Hours);
    printf("Minutes = %d\n", Minutes);
    printf("Seconds = %d\n", Seconds);

    return 0;
}