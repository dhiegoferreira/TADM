#include <stdio.h>



int main(int numbers[], int n) {

    int i, j; /* counters */
    for (i = 1; i < n; i++)
    {
        j = i;
        while ((j > 0) && (numbers[j] < numbers[j - 1]))
        {
            swap(&numbers[j], &numbers[j - 1]);
            j = j - 1;
        }
    }

}
