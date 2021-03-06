#pragma once
#include <stdio.h>

char my_puts(const char *string);
char *my_strchr(char *string,  char symbol);
int my_strlen(const char *string);
void my_strcpy(char *string_in, char *string_out);
void my_strncpy(char *string_in, char* string_out, int number_out);
void my_strcat(char *string_in, char *string_out);
void my_strncat(char *string_in, char *string_out, int string_out_lenght);
int my_strcmp(char *s, char*t);
char *my_strdup(char *string);
int my_getline(char s[], int lim);
char *my_fgets(char *string, int num, FILE *stream);