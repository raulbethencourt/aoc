#include "day1.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* stream = fopen("day1.test", "r");
    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    if (stream == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, stream)) != -1) {
        int i = 0;
        do {
            if (!isspace(line[i]))
                printf("%c", line[i]);
            i++;
        } while (line[i] != '\0');
    }

    free(line);
    fclose(stream);
    exit(EXIT_SUCCESS);
}
