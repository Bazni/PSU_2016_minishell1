/*
** my.h for my in /home/gwendal.bazin/CPool_Day09/include
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Oct 13 11:48:28 2016 Gwendal Bazin
** Last update Mon Jan 23 15:24:14 2017 Gwendal Bazin
*/

#ifndef MY_H_
# define MY_H_

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define WRITE(fd, str) write(fd, str, my_strlen(str))

typedef struct		s_node
{
  int			nb;
  struct s_node		*next;
  struct s_node		*previous;
}			t_node;

typedef	struct s_tab_ptr
{
  int		(*listFonc[14])();
}		t_tab_ptr;

void	my_putchar(char c);
void	my_putcharer(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_putstrer(char *str);
size_t	my_strlen(char *str);
long	my_atoi(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int size);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_is_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *dest, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int n);
void	*my_memset(char *s, char c, size_t nb);
char	*my_strdup(char *str);
char	*my_strdup_to(char *str, char c);
size_t	my_strchar(char *str, char c);

int	hexa_lte(va_list *args);
int	hexa_ctement(va_list *args);
int	uniint(va_list *args);
int	put_c(va_list *args);
int	binary(va_list *args);
int	octal(va_list *args);
int	put_s(va_list *args);
int	put_s_upper(va_list *args);
int	my_putnbr(va_list *args);
int	suc();
int	pour_narnia(va_list *args);
int	my_printf(char *s, ...);

t_node	*create(int nb);
void	*append(t_node *node, int nb);
void	*insert(t_node *node, int nb);
t_node	*getlast(t_node *node);
void	print_previous(t_node *node);
t_node	*getpos(t_node *node, long pos);
t_node	*delete(t_node *node);
void	print(t_node *node);

t_node	*rb(t_node *node);
t_node	*rrb(t_node *node);
t_node	*rotate_to_k(t_node *node, int k, int ac);
int	find_k(t_node *node);

#endif
