/*
** graph3.c for lem_in in /home/woivre_t/rendu/prog_elem/lem_in
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Sat Apr 26 17:13:04 2014 Thibault Woivre
** Last update Mon Apr 28 16:27:51 2014 Thibault Woivre
*/

#include	"graph.h"

int		check_tab(int nb, int *tab, int n)
{
  int		i;

  i = 0;
  while (i != n)
    {
      if (tab[i] == nb)
	return (1);
      i++;
    }
  return (0);
}

int		aff_liaison(int *tab_salle)
{
  my_put_nbr(tab_salle[0]);
  my_putchar('-');
  my_put_nbr(tab_salle[1]);
  return (0);
}
