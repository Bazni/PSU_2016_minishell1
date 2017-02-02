/*
** chained_list.c for chaine in /home/gwendal.bazin/CPE_2016_Pushswap/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Nov 22 22:45:11 2016 Gwendal Bazin
** Last update Mon Nov 28 14:04:48 2016 Gwendal Bazin
*/

#include <stdlib.h>
#include "my.h"

void	print_previous(t_node *node)
{
  while (node != NULL)
    {
      my_printf("%d ", node->nb);
      node = node->previous;
    }
  my_printf("\n");
}

void	print(t_node *node)
{
  t_node	*tmp;

  tmp = node;
  while (tmp->next != node)
    {
      my_printf("%d ", tmp->nb);
      tmp = tmp->next;
    }
  my_printf("%d", tmp->nb);
  my_printf("\n");
}

t_node	*delete(t_node *node)
{
  if (node == NULL)
    return (node);
  else if (node->previous == NULL)
    node->next->previous = NULL;
  else if (node->next == NULL)
    node->previous->next = NULL;
  else
    {
      node->next->previous = node->previous;
      node->previous->next = node->next;
    }
  return (node->next);
}

t_node	*getpos(t_node *node, long pos)
{
  long	i;

  i = 0;
  while (i < pos)
    {
      node = node->next;
      if (node->next == NULL)
	return (NULL);
      i++;
    }
  return (node);
}
