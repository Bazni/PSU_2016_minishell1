/*
** list_tab.c for list_tab in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Tue Jan 17 14:34:47 2017 Gwendal Bazin
** Last update Tue Jan 17 17:01:48 2017 Gwendal Bazin
*/

#include "my.h"
#include "sh.h"

t_env		*tab_to_list(char **tab)
{
  t_env		*list;
  size_t	i;

  i = 1;
  if ((list = env_create(tab[0])) == NULL)
    return (NULL);
  while (tab[i] != NULL)
    {
      if ((env_append(list, tab[i])) == -1)
	return (NULL);
      i++;
    }
  return (list);
}

char		**list_to_tab(t_env *list)
{
  char		**tab;
  size_t	i;

  i = 0;
  if ((tab = malloc(sizeof(char*) * (env_len(list) + 1))) == NULL)
      return (NULL);
  while (list->next != NULL)
    {
      tab[i] = my_strdup(list->s);
      list = list->next;
      i++;
    }
  tab[i] = NULL;
  return (tab);
}
