/*
** my_strupcase.c for strupcase in /home/gwendal.bazin/CPool_Day06
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 10 20:11:14 2016 Gwendal Bazin
** Last update Mon Oct 10 20:24:36 2016 Gwendal Bazin
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
