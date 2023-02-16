#include <stdio.h>
/*
 * main- prints an error message to stderr
 * Return: Returns 1 to indicate an error occurred.
 */
int main(void)
{
char str[] = 'and that piece of art is useful" - DoraKorpar, 2015-10-19\n';
fwrite(str, sizeof(str) - 1, 1, stderr);
return (1);
}

