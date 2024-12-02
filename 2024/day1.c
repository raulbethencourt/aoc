#include "day1.h"

int main(void) {
    FILE *fp;
    int count = 0;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char c;

    fp = fopen("day1.test", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n')
            count = count + 1;


    while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s", line);
    }

    fclose(fp);
    
    printf("%d", count);
    if (line)
        free(line);

    return 11;
}
