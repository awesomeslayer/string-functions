#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char my_puts(const char *string);
char *my_strchr(char *string,  char symbol);
size_t my_strlen(const char *string);
char* my_strcpy(const char *string_in, char *string_out);
char* my_strncpy(const char *string_in, char* string_out, int number_out);
char* my_strcat(char *string_in, char *string_out);
char* my_strncat(char *string_in, char *string_out, int string_out_lenght);
int my_strcmp(char *s, char*t);
char *my_strdup(char *string);
int my_getline(char s[], int lim);
char *my_fgets(char *string, int num, FILE *stream);