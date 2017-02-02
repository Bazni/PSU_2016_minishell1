/*
** my_atoi.c for atoi in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Nov 17 10:00:04 2016 Gwendal Bazin
** Last update Tue Nov 22 13:51:26 2016 Gwendal Bazin
*/

long	my_atoi(char *str)
{
  long	i;
  long	j;
  long	k;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  k = i;
	  while (str[i] >= '0' && str[i] <= '9')
	    {
	      j = ((j * 10) + (str[i] - 48));
	      i++;
	    }
	  if (str[k - 1] == '-')
	    j *= -1;
	  return (j);
	}
      else
	i++;
    }
  return (0);
}
