/*
** cd.c for cd in /home/bazni/PSU_2016_minishell1/src
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Sun Jan 22 18:56:06 2017 Gwendal Bazin
** Last update Mon Jan 23 15:23:52 2017 Gwendal Bazin
*/

#include <string.h>
#include "sh.h"
#include "my.h"

char	*tilde(t_env *env, char *cmd)
{
  char	*path;

  path = my_getenv(list_to_tab(env), "HOME=");
  return (my_strcat(path, cmd));
}

int	cd_access(char *path)
{
  if (access(path, F_OK) == -1)
    {
      WRITE(2, path);
      WRITE(2, ": No such file or directory.\n");
      return (-1);
    }
  else if (access(path, R_OK) == -1)
    {
      my_printf("%s: Permission denied.\n");
      return (-1);
    }
  return (0);
}

void	my_cd(t_env *env, char *cmd)
{
  char	*path;
  char	**tmp;
  int	i;

  i = 0;
  tmp = list_to_tab(env);
  if (my_strcmp("cd", cmd) == 0)
    path = my_getenv(tmp, "HOME=");
  else
    {
      while (cmd[i] != ' ')
	i++;
      path = my_strdup(&cmd[i + 1]);
      if (cmd[i + 1] == '~')
	path = tilde(env, &cmd[i + 2]);
    }
  if (cd_access(path) == 0)
    {
      if (chdir(path) == -1)
	my_printf("Error: Chdir Failed\n");
    }
}
