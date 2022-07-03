#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

char my_puts(const char *string)
{
    assert(string);

    for(int i = 0; *(string + i) != '\0'; i++)
    {
        printf("%c", *(string + i));
    }

    return putchar('\n');
}

char *my_strchr(char *string,  char symbol)
{
    assert(string);

    int i = 0;

    while(string[i] != '\0')
    {
        if(string[i] == symbol)
        {
            return &string[i];
        }

        i++;
    }
    return NULL;
}

int my_strlen(const char *string)
{
    assert(string);

    int len = 0;

    while(string[len] != '\0')
    {
        len++;
    }

    return len;
}

void my_strcpy(char *string_in, char *string_out)
{
    assert(string_in);
    assert(string_out);

    while((*string_out++ = *string_in++) != '\0')
        ;
}

void my_strncpy(char *string_in, char* string_out, int number_out)
{
    assert(string_in);
    assert(string_out);

    int i = 0;
    while(i < number_out && string_in[i] != '\0')
    {
        string_out[i] = string_in[i];
        i++;
    }
}

void my_strcat(char *string_in, char *string_out)
{
    assert(string_in);
    assert(string_out);

    int i = 0;

    int len = my_strlen(string_in);

    while(string_out[i] != '\0')
    {
        string_in[len + i] = string_out[i];
        i++;
    }

}

void my_strncat(char *string_in, char *string_out, int string_out_lenght)
{
    assert(string_in);
    assert(string_out);

    int len = my_strlen(string_in);

    for(int i =0; i < string_out_lenght; i++)
    {
        string_in[len+i]=string_out[i];
    }
}

int my_strcmp(char *s, char*t)
{
    assert(s);
    assert(t);

    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

char *my_strdup(char *string)
{
    assert(string);

    char *p;
    p = (char *) calloc(my_strlen(string) + 1, sizeof(char));

    if(p != NULL)
        my_strcpy(string, p);
    return p;
}

int my_getline(char s[], int lim) 
{
    assert(s);

    int c, i;
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
        if(c == 'n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}

char *my_fgets(char *string, int num, FILE *stream)
{
    assert(string);

    int c;
    char *cs;

    cs = string;
    while(--num > 0 && (c = getc(stream)) != EOF)
    {
        if((*cs = c) == '\n' || (*cs = c) == '\0') break;
        cs++;

    }
    *cs = '\0';
    return(c == EOF && cs == string) ? NULL : string;
}
