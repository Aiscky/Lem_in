/*
** main.c for lem_in in /home/woivre_t/rendu/prog_elem/lem_in
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Apr 21 14:31:37 2014 Thibault Woivre
** Last update Mon Apr 28 16:17:37 2014 Thibault Woivre
*/

#include	"graph.h"

int		main(int ac, char **av)
{
  char		*s;
  t_graph	*graphe;
  int		nb_fourmi;

  if (ac != 1)
    {
      my_putstr("Usage: perl gmin.pl | ./lem_in\n");
      exit(1);
    }
  s = get_next_line(0);
  if (!my_str_isnum(s) || my_getnbr(s) < 0)
    {
      my_putstr("Usage:\n nb_fourmis\n salle x-y\n tubes x-y\n");
      exit(1);
    }
  nb_fourmi = my_getnbr(s);
  free(s);
  graphe = perl_to_graph();
  show_graphe(graphe);
  return (0);
}
