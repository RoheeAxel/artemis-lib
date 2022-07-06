/*
** EPITECH PROJECT, 2022
** include
** File description:
** artemis lib
*/

#ifndef MYH
#define MYH
//STRING
int a_strlen(const char *str);
int a_len_to_char(const char *str, const char c);
int a_strcmp(const char *str1, const char *str2);
char *a_strcat(const char *str1, const char *str2);
char *a_trim(char *str);
char *a_revstr(const char *str);
char **a_stwa(char *str, char lim);
int a_word_array_len(const char **str);

//DISPLAY
void a_putnbr(int nbr, int base);
void a_putstr(const char *str, int file_descriptor);
void a_putchar(char c, int file_descriptor);
void a_putwordarray(char **word_array, int file_desc, char separator);

//DIGITS
int a_is_digit(const char *str);
int a_get_nbr(const char *str);
void a_sort_int_array(int *array, int size);
int **a_create_int_tab(int size_x, int size_y, int nbr);

//MATHS
int a_sqrt(int nb);
int a_abs(int nb);
int a_pow(int nb, int power);

//UTILITIES
void *a_calloc(unsigned int type_size, unsigned int size);
void *a_memcpy(void *dest, const void *src, int n);
void *a_realloc(void *ptr, int size, int old_size);
void a_free(void *ptr);
char *a_get_input(void);

//DATA STRUCTURES

//LIST

typedef struct maillon maillon;

struct maillon
{
    int value;
    maillon *next;
    maillon *prev;
};

typedef struct linked_list {
    int size;
    maillon *first;
    maillon *last;
} a_list;

void a_display_list(a_list *liste, int base);
a_list *a_list_create(void);
void a_list_append(a_list *list, int value);
int a_list_pop(a_list *list);
int a_list_index(a_list *list, int index);
#endif/*MYH*/
