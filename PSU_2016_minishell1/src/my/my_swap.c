/*
** my_swap.c for my_swap in /home/gwendal.bazin/CPool_Day04
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Oct  6 09:44:44 2016 Gwendal Bazin
** Last update Mon Nov 07 13:54:53 2016 Gwendal Bazin
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
  return (0);
}
