##
## Makefile for makefile in /home/gwendal.bazin/CPool_Day10
##
## Made by Gwendal Bazin
## Login   <gwendal.bazin@epitech.net>
##
## Started on  Fri Oct 14 09:55:47 2016 Gwendal Bazin
## Last update Mon Jan 16 14:09:12 2017 Gwendal Bazin
##
AUTEUR	= gwendal.bazin@epitech.eu
CFLAGS += -I../../include/

SRC	=	my_putchar.c	\
		my_putcharer.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_swap.c	\
		my_putstr.c	\
		my_putstrer.c	\
		my_strlen.c	\
		my_atoi.c	\
		my_sort_int_tab.c	\
		my_power_rec.c	\
		my_square_root.c	\
		my_is_prime.c	\
		my_find_prime_sup.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_revstr.c	\
		my_strstr.c	\
		my_strcmp.c	\
		my_strncmp.c	\
		my_strupcase.c	\
		my_strlowcase.c	\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_isnum.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isprintable.c	\
		my_showstr.c	\
		my_showmem.c	\
		my_strcat.c	\
		my_memset.c	\
		my_strncat.c	\
		my_strdup.c	\
		fonc.c		\
		print_c.c	\
		convert.c	\
		last.c		\
		plus.c		\
		chained_list.c	\
		create_list.c	\
		my_strdup_to.c	\
		my_strchar.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME) clean

$(NAME): $(SRC) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
