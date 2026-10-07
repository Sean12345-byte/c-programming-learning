#include <stdio.h>
#include <math.h>

int main(void)
{
    char grade = 'A';
    int age = 22;
    float weight = 80.0f;
    double height = 177.5;
    char letter = 'A';
    double a = 0.1;
    double b = 0.2;
    double c = 0.3;
    double epsilon = 0.000001;
    int score = 100;
    int x = 10;
    int y = 20;
    int *p = &x;
    int numbers[4] = {10, 20, 30, 40};
    int *array_ptr = numbers;

    printf("numbers[0] = %d\n", numbers[0]);
    printf("*array_ptr = %d\n", *array_ptr);

    printf("numbers[1] = %d\n", numbers[1]);
    printf("*(array_ptr + 1) = %d\n", *(array_ptr + 1));

    printf("&numbers[0] = %p\n", (void *)&numbers[0]);
    printf("array_ptr   = %p\n", (void *)array_ptr);
    printf("&numbers[1] = %p\n", (void *)&numbers[1]);

    *(array_ptr + 2) = 99;

    printf("numbers[2] after modification = %d\n", numbers[2]);

    printf("sizeof(x) = %zu bytes\n", sizeof(x));
    printf("sizeof(p) = %zu bytes\n", sizeof(p));

    printf("x address = %p\n", (void *)&x);
    printf("p          = %p\n", (void *)p);
    printf("*p         = %d\n", *p);

    *p = 30;

    printf("x after *p = 30: %d\n", x);

    p = &y;
    *p = 40;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("score = %d\n", score);
    printf("address of score = %p\n", (void *)&score);

    if (fabs((a + b) - c) < epsilon) {
        printf("close enough\n");
    } else {
        printf("not close enough\n");
    }

    printf("a + b = %.20f\n", a + b);
    printf("c     = %.20f\n", c);

    if (a + b == c) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }

    printf("letter as character = %c\n", letter);
    printf("letter as number = %d\n", letter);

    printf("grade = %c\n", grade);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("height = %.1f\n", height);

    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));

    unsigned int number = 4294967295U;

    printf("number before = %u\n", number);

    number = number + 1;

    printf("number after  = %u\n", number);

    float f = 0.1f;
    double d = 0.1;

    printf("float  = %.20f\n", f);
    printf("double = %.20f\n", d);

    return 0;
}