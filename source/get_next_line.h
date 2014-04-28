/*
** get_next_line.h for get_next_line in /home/woivre_t/rendu/get_nbext_line-2017-woivre_t
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Nov 18 12:51:57 2013 Thibault Woivre
** Last update Sun Dec  8 22:53:31 2013 Thibault Woivre
*/

#ifndef		MY_GET_NEXT_LINE_H_
# define	MY_GET_NEXT_LINE_H_

# include	<stdio.h>
# include	<stdlib.h>
# include	<fcntl.h>
# include	<unistd.h>

# define	BUFFER_SIZE 16000000

char            *get_next_line(const int fd);
char            *creat_str(int *flag, int *i, int *k, char *buffer);

#endif
