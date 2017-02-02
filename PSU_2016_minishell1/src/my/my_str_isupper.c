/*
** my_str_isupper.c for isupper in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 21:52:30 2016 Gwendal Bazin
** Last update Mon Oct 10 21:53:49 2016 Gwendal Bazin
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if ((str[i] <= 'A' || str[i] >= 'Z'))
	return (0);
      i++;
    }
  return (1);
}
