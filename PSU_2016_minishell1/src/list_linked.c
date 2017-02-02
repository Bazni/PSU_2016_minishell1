/*
** chained_list.c for chaine in /home/gwendal.bazin/CPE_2016_Pushswap/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Nov 22 22:45:11 2016 Gwendal Bazin
** Last update Mon Jan 23 15:24:35 2017 Gwendal Bazin
*/

#include <stdlib.h>
#include "my.h"
#include "sh.h"

void	env_print_previous(t_env *node)
{
  while (node != NULL)
    {
      my_printf("%s", node->s);
      node = node->previous;
    }
  my_printf("\n");
}

void	env_print(t_env *node)
{
  while (node->next != NULL)
    {
      my_printf("%s\n", node->s);
      node = node->next;
    }
}

t_env	*env_delete(t_env *node)
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

t_env		*env_getpos(t_env *node, size_t pos)
{
  size_t	i;

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
