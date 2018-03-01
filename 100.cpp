#include<stdio.h>

int main ()
{
    int i, j, a, b;

    while ( scanf ("%d %d", &a, &b) != EOF ) {

        if ( a > b ) {
            i = b;
            j = a;
        }
        else {
            i = a;
            j = b;
        }

        int length = 0;
        int c_length;

        while ( i <= j ) {
            unsigned int n = i;
            c_length = 1;

            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n /= 2;
                c_length++;
            }

            if (length < c_length )
                length = c_length;

            i++;
        }

        printf ("%d %d %d\n", a, b, length);
    }

    return 0;
}

