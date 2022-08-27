#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    unsigned char string1[] = "test";
    unsigned char string2[] = "vguv";

    int slength1 = 4;
    int slength2 = 4;

    int distance;
    int is_permutation = 1;

    if (slength1 != slength2) {
        is_permutation = 0;
    }

    distance = (int)string2[0] - (int)string1[0];

    for (i=1; i<slength1; ++i) {
        if ( ((int)string2[i] - (int)string1[i]) != distance ) {
            is_permutation = 0;
            break;
        }
    }

    if (is_permutation) {
        printf("%s is a permutation of %s with distance %d\n", string1, string2, distance);
    } else {
        printf("%s is not a permutation of %s\n", string1, string2);
    }
}