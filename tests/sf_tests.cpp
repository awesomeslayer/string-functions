#include "../source/string_functions.h"
#include <string.h>

void test_my_puts()
{
    printf("test my_puts: ");

    char T[10] = {'1', '2', '3', '4'};
    printf("have to print: %s, printed: ", T);
    my_puts(T);
}

void test_my_strchr()
{
    printf("test my_strchr: ");

    char symbol = '3';
    char T[5] = {"1234"}; 
    printf("have to print: %c, printed: ", strchr(T, symbol)[0]);
    printf("%c\n", my_strchr(T, symbol)[0]);
}

void test_my_strlen()
{
    printf("test my_strlen: ");

    char T[10] = {1, 2, 3, 4, 5};

    int true_len = 5;

    if(true_len != my_strlen(T))
    {
        printf("true len: %d, my_strlen: %d -> strlen test fail\n", true_len, my_strlen(T));
    }
    else printf("true len: %d, my_strlen: %d -> strlen OK\n", true_len, my_strlen(T));
}

bool test_my_strcpy()
{
    printf("test my_strcpy: ");

    char T[10] = {'1', 'b', 'r'};
    char D[10] = {0};

    my_strcpy(T, D);

    int i = 0;
    while(T[i] != '\0' && D[i] != '\0')
    {
        if(T[i] != D[i])
        {
            printf("strcpy misstake\n");
            return 0;
        }
        i++;
    }
    printf("tests OK\n");
    return 1;
}

void test_my_strncpy()
{
    printf("test my_strncpy: ");

    char T[10] = {'1', 'b', 'r'};
    char D[10] = {0};

    my_strncpy(T, D, 10);

    int i = 0;
    while(T[i] != '\0' && D[i] != '\0')
    {
        if(T[i] != D[i])
        {
            printf("strcpy misstake\n");
            break;
        }
        i++;
    }
    printf("1st(from) string: %s ", T);
    printf("2nd(to) string: %s", D);
    printf("\n");
}


void test_my_strcat()
{
    printf("test my_strcat: ");

    char A[10] = {'1', '2', '3', '4'};
    char B[10] = {'5', '6', '7'};

    printf("1st string: %s, ", A);
    printf("2nd string: %s, ", B);
    printf("finally: ");
    my_strcat(A, B);
    my_puts(A);
}

void test_my_strncat()
{
    printf("test my_strncat: ");

    char A[10] = {'1', '2', '3', '4'};
    char B[10] = {'5', '6', '7'};

    printf("1st string: %s, ", A);
    printf("2nd string: %s, ", B);
    printf("finally: ");

    my_strncat(A, B, my_strlen(B));
    my_puts(A);
}

void test_my_strcmp()
{
    printf("test my_strcmp: ");

    char A[10] = {'1', '2', '3'};
    char B[10] = {'0', '5', '6'};
    printf("1st string: %s, ", A);
    printf("2nd string: %s, ", B);

    printf("Results of cmp in func rate:\n");
    if(my_strcmp(A, B) <= 0)
    {
        my_puts(A);
        my_puts(B);
    }
    else
    {
        my_puts(B);
        my_puts(A);
    }
}

void test_my_strdup()
{
    printf("test my_strdup: ");

    char A[10] = {'1', '2', '3', '4'};
    char *p;
    printf("string: %s, ", A);

    printf("finally printing new string: ");
    p = my_strdup(A);

    my_puts(p);
}

void test_my_getline()
{
    printf("test my_getline (print string): ");

    char A[10] = {0};
    int lim = 256;

    printf("%d\n", my_getline(A, lim));

}

void test_my_fgets()
{
    printf("test my_fgets (print char): ");

    char A[10] = {0};
    int num = 256;
    char *p;

    p = my_fgets(A, num, stdin);
    my_puts(p);
}


