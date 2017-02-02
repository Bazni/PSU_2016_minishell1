##
## Makefile for make in /home/gwendal.bazin/PSU_2016_my_ls
## 
## Made by Gwendal Bazin
## Login   <gwendal.bazin@epitech.net>
## 
## Started on  Sat Dec  3 22:47:42 2016 Gwendal Bazin
## Last update Mon Jan 23 11:54:28 2017 Gwendal Bazin
##


NAME		=	mysh

DIR		=	src/

SRC		=	$(DIR)main.c		\
			$(DIR)fork.c		\
			$(DIR)env.c		\
			$(DIR)error.c		\
			$(DIR)builtin.c		\
			$(DIR)create_linked.c	\
			$(DIR)list_linked.c	\
			$(DIR)list_tab.c	\
			$(DIR)cd.c		\
			$(DIR)get_next_line.c

OBJ		= $(SRC:.c=.o)

CFLAGS		+= -Wall -Wextra -Wpedantic #-Werror
CFLAGS		+= -I./include/

CC		= gcc -g
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -L./$(DIR)my -lmy -L./$(DIR)/gnl -lgnl

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
