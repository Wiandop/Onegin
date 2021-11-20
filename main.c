#include "stringLibrary/string.h"
#include "onegin.h"
#include <stdio.h>
#include <stdlib.h>

int compar (const void* p1, const void* p2) {
    return myStrcmp(*(const char**)p1, *(const char**)p2);
}

int main() {
    FILE* input = fopen("Onegin.txt", "r");
    size_t lines_count = 0;

    char** strings = string_recognition(input, &lines_count);

    printf("Before sort \n\n");

    for (size_t i = 0; i < lines_count; i++) {
        printf("%s \n", strings[i]);
    }

    qsort(strings, lines_count, sizeof(char*), compar);

    printf("After sort \n\n");

    for (size_t i = 0; i < lines_count; i++) {
        printf("%s \n", strings[i]);
    }

    return 0;
}
