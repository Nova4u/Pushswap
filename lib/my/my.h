/*
** my.h for my in ~/dev/piscine/PJ9/include
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Oct  8 11:23:34 2015 marc brout
** Last update Sat Oct 17 23:29:27 2015 marc brout
*/
#ifndef MY_H_
#define MY_H_
void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
int my_swap(int, int);
int my_putstr(char *);
int my_strlen(char *);
int my_getnbr(char *);
void my_sort_int_tab(int *, int);
int my_power_rec(int, int);
int my_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char *);
char *my_strncpy(char *, char *, int);
char *my_revstr(char *);
char *my_strstr(char *, char *);
int my_strcmp(char *, char *);
int my_strncmp(char *, char *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_str_isprintable(char *);
int my_showstr(char *);
int my_showmem(char *, int);
char *my_strcat(char *, char *);
char *my_strncat(char *, char *, int);
#endif