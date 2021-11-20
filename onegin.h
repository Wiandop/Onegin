#include <stdlib.h>
#include <stdio.h>

#ifndef ONEGIN_ONEGIN_H
#define ONEGIN_ONEGIN_H

size_t count_lines (FILE* input);
char** string_recognition(FILE* input, size_t* lines_count);

#endif
