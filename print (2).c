#include <stdio.h>
#include <stdlib.h>

extern int sum_array(int *array, int count);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <datafile>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    int count;
    fscanf(fp, "%d", &count);

    int array[count];

    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d", &array[i]);
    }

    fclose(fp);

    printf("Sum = %d\n", sum_array(array, count));

    return 0;
}
