/*
** my_sort_int_tab.c for my_sort_int_tab in /home/gwendal.bazin/CPool_Day04
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Oct 11 12:38:02 2016 Gwendal Bazin
** Last update Mon Nov 07 13:53:18 2016 Gwendal Bazin
*/

#include "my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	test;
  int	i;

  test = 0;
  i = 0;
  while (i < size)
    {
      if (tab[i] > tab[i + 1])
	{
	  test = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = test;
	  i = 0;
	}
      else
	i++;
    }
}
