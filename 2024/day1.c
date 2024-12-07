#include "day1.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp = fopen("day1.test", "r");
    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s", line);
    }

    fclose(fp);
    if (line)
        free(line);

    return 11;
}
