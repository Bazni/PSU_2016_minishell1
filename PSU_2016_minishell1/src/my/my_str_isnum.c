/*
** my_str_isnum.c for str_isnum in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 21:34:48 2016 Gwendal Bazin
** Last update Mon Oct 10 21:38:52 2016 Gwendal Bazin
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if ((str[i] <= '0' || str[i] >= '9'))
	return (0);
      i++;
    }
  return (1);
}
