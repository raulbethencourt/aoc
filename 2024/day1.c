#include "day1.h"
#include <stdio.h>

int countLinesInFile(FILE *fp) {
    int count = 0;

    for (char c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n')
            count = count + 1;

    return count;
}

int sortNumbers(int count) {
    int array[count], index, i, j, min, temp;

    for (i = 0; i < count - 1; i++) {
        min = array[i];
        for (j = i + 1; j < count; j++)
            if (array[j] < min) {
                min = array[j];
                index = j;
            }

        temp = array[i];
        array[i] = min;
        array[index] = temp;
    }

    return array[count];
}

int main(void) {
    FILE *fp = fopen("day1.test", "r");

    if (fp == NULL)
        exit(EXIT_FAILURE);

    int count = countLinesInFile(fp);
    int array[count];
    array = sortNumbers(count);

    fclose(fp);

    for (int i = 0; i < count; i++)
        printf("%d\n", array[i]);

    printf("%d\n", count);

    return 11;
}
