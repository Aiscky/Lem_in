/*
** my_tablen.c for source in /home/woivre_t/rendu/prog_elem/lem_in/source
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Sat Apr 26 14:27:09 2014 Thibault Woivre
** Last update Mon Apr 28 11:58:02 2014 Thibault Woivre
*/

#include	"source.h"

int		my_tablen(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
