/*
** my_str_islower.c for islower in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 21:46:32 2016 Gwendal Bazin
** Last update Mon Oct 10 21:49:30 2016 Gwendal Bazin
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if ((str[i] <= 'a' || str[i] >= 'z'))
	return (0);
      i++;
    }
  return (1);
}
