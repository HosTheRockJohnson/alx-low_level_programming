#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
printf("Size of a char: %zu bytes\n", (unsigned)sizeof(char));
printf("Size of an int: %zu bytes\n", (unsigned)sizeof(int));
printf("Size of a long int: %zu bytes\n", (unsigned)sizeof(long));
printf("Size of a long long int: %zu bytes\n", (unsigned)sizeof(long long));
printf("Size of a float: %zu bytes\n", (unsigned)sizeof(float));
return 0;
}
