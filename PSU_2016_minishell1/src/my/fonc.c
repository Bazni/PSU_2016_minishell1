/*
** fonc.c for fonc in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Tue Nov 08 23:53:18 2016 Gwendal Bazin
** Last update Thu Nov 17 17:48:25 2016 Gwendal Bazin
*/
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int	disp_p(long test, char letter, int i)
{
  if (test / 16)
    {
      disp_p(test / 16, letter, i);
      i++;
    }
  if ((test % 16) > 9)
    my_putchar((test % 16) + letter);
  else
my_putchar(test % 16 + '0');
  return (i + 1);
}

int	pointer(va_list *args)
{
  int	i;
  void	*test;

  i = 0;
  test = va_arg(*args, void *);
  my_putstr("0x");
  i += disp_p((long)test, 'W', i);
  return (i + 2);
}

int	bistro(char *s, int i)
{
  char	*base;
  int	cnt;

  cnt = 0;
  base = "csSdioubxXpm%";
  i += 1;
  while (base[cnt] != '\0')
    {
      if (s[i] == base[cnt])
	return (cnt);
      cnt++;
    }
  return (-1);
}

void	init_tab(t_tab_ptr *tabptr)
{
  tabptr->listFonc[0] = put_c;
  tabptr->listFonc[1] = put_s;
  tabptr->listFonc[2] = put_s_upper;
  tabptr->listFonc[3] = my_putnbr;
  tabptr->listFonc[4] = my_putnbr;
  tabptr->listFonc[5] = octal;
  tabptr->listFonc[6] = uniint;
  tabptr->listFonc[7] = binary;
  tabptr->listFonc[8] = hexa_lte;
  tabptr->listFonc[9] = hexa_ctement;
  tabptr->listFonc[10] = pointer;
  tabptr->listFonc[11] = suc;
  tabptr->listFonc[12] = pour_narnia;
  tabptr->listFonc[13] = NULL;
}

int		my_printf(char *s, ...)
{
  va_list	args;
  int		len, i;
  t_tab_ptr	tabptr;

  init_tab(&tabptr);
  len = i = 0;
  va_start(args, s);
  while (s[i] != '\0')
    {
      if (s[i] == '%')
	{
	  if (bistro(s, i) != -1)
	    len += tabptr.listFonc[bistro(s, i)](args);
	  else
	    len += my_printf("%c", s[i--]);
	  i++;
	}
      else
	my_putchar(s[i]);
      i++;
      len++;
    }
  va_end(args);
  return (len - 1);
}
