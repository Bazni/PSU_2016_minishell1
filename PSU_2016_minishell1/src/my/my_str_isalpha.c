/*
** my_str_isalpha.c for is_alpha in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 21:08:39 2016 Gwendal Bazin
** Last update Mon Oct 24 14:55:13 2016 Gwendal Bazin
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if ((str[i] <= 'A' || str[i] >= 'Z') && (str[i] <= 'a' || str[i] >= 'z'))
	return (0);
      i++;
    }
  return (1);
}
