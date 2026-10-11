#include <stdio.h>
#include <stddef.h>

size_t my_strlen(const char str[])
{
    size_t count = 0;

    for (size_t i = 0; str[i] != '\0'; i++)
    {
        // TODO: Update count
        count++;
    }

    return count;
}

int my_strcmp(const char a[], const char b[])
{
    size_t i = 0;

    while (a[i] == b[i] && a[i] != '\0')
    {
        i++;
    }

    unsigned char x = (unsigned char)a[i];
    unsigned char y = (unsigned char)b[i];

    // TODO: Compare x and y
    if (x < y)
    {
        return -1;
    }
    else if (x > y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{   
    char a[] = "Cat";
    char b[] = "Car";
    char c[] = "Cat";
    char d[] = "Apple";

    printf("Test 1: %d\n", my_strcmp(a, b));
    printf("Test 2: %d\n", my_strcmp(a, c));
    printf("Test 3: %d\n", my_strcmp(d, a));


    char word[] = "Embedded";

    size_t length = my_strlen(word);

    printf("Length: %zu\n", length);

    return 0;
}