/*
** env.c for env in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Fri Jan 13 13:38:02 2017 Gwendal Bazin
** Last update Sun Jan 22 23:00:12 2017 Gwendal Bazin
*/

#include "my.h"
#include "sh.h"

char		**copy_env(char **env)
{
  char		**new_env;
  size_t	i, j, k;

  i = j = 0;
  while (env[i] != NULL)
    i++;
  if ((new_env = malloc(sizeof(char*) * (i + 1))) == NULL)
    return (NULL);
  while (j < i)
    {
      k = 0;
      if ((new_env[j] = malloc(sizeof(char) * (my_strlen(env[j]) + 1))) == NULL)
	return (NULL);
      while (k < my_strlen(env[j]))
	{
	  new_env[j][k] = env[j][k];
	  k++;
	}
      new_env[j][k] = '\0';
      j++;
    }
  new_env[i] = NULL;
  return (new_env);
}

char		*my_getenv(char **env, char *elem)
{
  size_t	i, k;
  size_t	len;

  len = my_strlen(elem);
  i = k = 0;
  while (env[i] != NULL)
    {
      while (env[i][k] == elem[k])
	{
	  if (elem[k + 1] == '\0')
	    return (my_strdup(&env[i][len]));
	  k++;
	}
      i++;
    }
  return (NULL);
}

char		*test_access(char **tab_path, char *cmd)
{
  size_t	i;
  char		*tmp;

  i = 0;
  if (access(cmd, F_OK) == 0)
    if (access(cmd, X_OK) == 0)
      return (cmd);
  while (tab_path[i] != NULL)
    {
      tmp = cat_alloc(tab_path[i], "/");
      tmp = cat_alloc(tmp, cmd);
      if (access(tmp, F_OK) == 0)
	if (access(tmp, X_OK) == 0)
	  return (tmp);
	else
	  free(tmp);
      else
	free(tmp);
      i++;
    }
  return (NULL);
}

char		*my_access(char *path, char *cmd)
{
  char		**tab_path;
  size_t	len;
  size_t	i, j, k;

  i = 0;
  len = 1;
  while (path[i] != '\0')
    if (path[i++] == ':')
      len++;
  if ((tab_path = malloc(sizeof(char*) * (len + 1))) == NULL)
    return (NULL);
  i = j = 0;
  while (i < len)
    {
      k = 0;
      if ((tab_path[i] = malloc(sizeof(char) * (my_strlen(path) + 1))) == NULL)
	return (NULL);
      my_memset(tab_path[i], '\0', my_strlen(path) - 1);
      while (path[j] != '\0' && path[j] != ':')
	tab_path[i][k++] = path[j++];
      tab_path[i++][k] = '\0';
      j++;
    }
  tab_path[len] = NULL;
  return (test_access(tab_path, cmd));
}

char	*good_path(char **env, char *cmd)
{
  char	**new_env;
  char	*path;
  char	*good_path;

  new_env = copy_env(env);
  path = my_getenv(new_env, "PATH=");
  good_path = my_access(path, cmd);
  if (good_path == NULL)
    return (NULL);
  return (good_path);
}
