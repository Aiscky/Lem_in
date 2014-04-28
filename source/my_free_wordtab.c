/*
** my_free_wordtab.c for my_free_wordtab in /home/woivre_t/rendu/MUL_2013_fdf
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Thu Dec  5 16:17:40 2013 Thibault Woivre
** Last update Mon Mar 31 13:32:33 2014 Thibault Woivre
*/

#include	"source.h"

int		my_free_wordtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab[i]);
  free(tab);
  return (0);
}
