#include <stdio.h>

/**
 * main - Program that prints all possible combinations of two
 *
 * Return: 0
 */

int main () {

    int i, ii, iii, iv;

    i = 48;
    ii = 49;

    while (i <= 57) {
        ii = 48;
        while (ii <= 57) {
            iii = 48;
            while (iii <= 57) {
                iv = ii + 1;
                while (iv <= 57) {
                    putchar(i);
                    putchar(ii);
                    putchar(' ');
                    putchar(iii);
                    putchar(iv);
                    if (i != 57 || ii != 56 || iii != 57 || iv != 57) {
                        putchar(',');
                        putchar(' ');
                    }
                    iv++;
                }
                iii++;
                
            }
            ii++;
        }
        i++;
    }

    putchar('\n');

    return 0;
}
