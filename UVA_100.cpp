#include<stdio.h>

int main ()
{
    int i, j, a, b;

    while (scanf("%d %d", &a, &b) != EOF) {
        if(a > b){
            i = b;
            j = a;
        }
        else {
            i = a;
            j = b;
        }
        int length = 0;
        int cycle;

        while(i <= j) {
            unsigned int n = i;
            cycle = 1;
            while (n != 1) {
                if (n % 2 == 1)
                    n = 3*n + 1;
                else
                    n /= 2;
                cycle++;
            }
            if(length < cycle)
                length = cycle;
            i++;
        }
        printf ("%d %d %d\n", a, b, length);
    }
    return 0;
}

