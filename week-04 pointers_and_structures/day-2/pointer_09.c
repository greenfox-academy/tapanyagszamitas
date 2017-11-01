#include <stdio.h>

void safe_union(int *a, int l_a, int *b, int l_b, int *result, int l_res)
{
    int i = 0;
    for (i = 0; i < l_a; i++) {
        result[i] = a[i];
    }

    for (i = 0; i < l_b; i++) {
        result[i + l_a] = b[i];
    }
//TODO:
    // Implement this function to create the union of a and b into the array result!

    return;
}

int main(int argc, char** argv)
{
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    int c[6];

    safe_union(a,3,b,3,c,6);

    for (int i = 0; i<6; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}
