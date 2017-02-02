/*
** create_list.c for create in /home/gwendal.bazin/CPE_2016_Pushswap
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Sat Nov 19 11:05:43 2016 Gwendal Bazin
** Last update Sun Jan 22 22:42:55 2017 Gwendal Bazin
*/

#include "sh.h"
#include "my.h"

t_env	*env_create(char *s)
{
  t_env	*node;

  if ((node = malloc(sizeof(t_env))) == NULL)
    return (NULL);
  node->s = my_strdup(s);
  node->next = NULL;
  node->previous = NULL;
  return (node);
}

int	env_append(t_env *node, char *s)
{
  while (node->next != NULL)
    node = node->next;
  if ((node->next = malloc(sizeof(t_env))) == NULL)
    return (-1);
  node->next->previous = node;
  node = node->next;
  node->s = my_strdup(s);
  node->next = NULL;
  return (0);
}

int	env_insert(t_env *node, char *s)
{
  t_env	*new;

  if ((new = malloc(sizeof(t_env))) == NULL)
    return (-1);
  new->s = my_strdup(s);
  new->next = node->next;
  node->next = new;
  new->previous = node;
  new->next->previous = new;
  return (0);
}

t_env	*env_getlast(t_env *node)
{
  while (node->next != NULL)
    node = node->next;
  return (node);
}

size_t		env_len(t_env *node)
{
  size_t	i;

  i = 0;
  while (node->next != NULL)
    {
      node = node->next;
      i++;
    }
  return (i);
}
