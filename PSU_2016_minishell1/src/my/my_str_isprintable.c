/*
** my_str_isprintable.c for isprintable in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 21:58:03 2016 Gwendal Bazin
** Last update Tue Oct 11 11:14:52 2016 Gwendal Bazin
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] < 33 || str[i] > 126)
	return (0);
      i++;
    }
  return (1);
}
