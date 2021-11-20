#include "onegin.h"
#include "stringLibrary/string.h"
#include <stdio.h>
#include <stdlib.h>

size_t count_lines (FILE* input) {
    char cur_symbol = 0;
    size_t ret = 0;

    while (fscanf(input, "%c", &cur_symbol) == 1) {
        if (cur_symbol == '\n') {
            ret++;
        }
    }
    fseek(input, 0, SEEK_SET);

    return ret;
}

char** string_recognition(FILE* input, size_t* lines_count) {
    *lines_count = count_lines(input);

    char** strings = (char**) calloc (*lines_count, sizeof(char*));
    char buf[1024] = "";

    for (size_t i = 0; i < *lines_count; i++) {
        fscanf(input, "%s", buf);
        strings[i] = myStrdup(buf);
    }

    return strings;
}
