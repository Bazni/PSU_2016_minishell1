/*
** create_list.c for create in /home/gwendal.bazin/CPE_2016_Pushswap
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Sat Nov 19 11:05:43 2016 Gwendal Bazin
** Last update Tue Jan 17 16:21:07 2017 Gwendal Bazin
*/

#include "my.h"

t_node	*create(int nb)
{
  t_node	*node;

  if ((node = malloc(sizeof(t_node))) == NULL)
    return (NULL);
  node->nb = nb;
  node->next = NULL;
  node->previous = NULL;
  return (node);
}

void	*append(t_node *node, int nb)
{
  while (node->next != NULL)
    node = node->next;
  if ((node->next = malloc(sizeof(t_node))) == NULL)
    return (NULL);
  node->next->previous = node;
  node = node->next;
  node->nb = nb;
  node->next = NULL;
}

void	*insert(t_node *node, int nb)
{
  t_node	*new;

  if ((new = malloc(sizeof(t_node))) == NULL)
    return (NULL);
  new->nb = nb;
  new->next = node->next;
  node->next = new;
  new->previous = node;
  new->next->previous = new;
}

t_node	*getlast(t_node *node)
{
  while (node->next != NULL)
    node = node->next;
  return (node);
}
