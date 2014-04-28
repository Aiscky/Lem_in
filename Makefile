##
## Makefile for Makefile in /home/woivre_t/rendu/PSU_2013_minishell1
## 
## Made by Thibault Woivre
## Login   <woivre_t@epitech.net>
## 
## Started on  Fri Dec 13 14:27:23 2013 Thibault Woivre
## Last update Mon Apr 28 16:29:53 2014 Thibault Woivre
##

NAME		= lem_in

SRC		= main.c \
		  graph.c \
		  graph2.c \
		  graph3.c \
		  show_graphe.c \
		  source/my_put_nbr.c \
		  source/get_next_line.c \
		  source/my_putchar.c \
		  source/my_strcpy.c \
		  source/my_getnbr.c \
		  source/my_str_isnum.c \
		  source/my_tablen.c \
		  source/my_free_wordtab.c \
		  source/find_expr.c \
		  source/my_strlen.c \
		  source/my_putstr.c \
		  source/my_strcmp.c \
		  source/my_strncmp.c \
		  source/xmalloc.c \
		  source/my_str_to_wordtab.c \
		  source/my_strdup.c \
		  source/my_strncpy.c \
		  source/aff_exit.c

OBJ		= $(SRC:.c=.o)

CFLAGS		= -g -ansi -pedantic -w -Wall -Wextra -Werror --std=c99

all:		$(NAME)

$(NAME)		:$(OBJ)
		@cc $(CFLAGS) -o $(NAME) $(OBJ)

clean		:
		@rm -f $(OBJ)

fclean		:clean
		@rm -f $(NAME)

re:		fclean all
