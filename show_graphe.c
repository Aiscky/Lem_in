/*
** show_graphe.c for lem_in in /home/woivre_t/rendu/prog_elem/lem_in
** 
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
** 
** Started on  Mon Apr 28 14:12:35 2014 Thibault Woivre
** Last update Mon Apr 28 16:40:14 2014 Thibault Woivre
*/

#include	"graph.h"

int		show_graphe(t_graph *graphe)
{
  int		i;
  t_adj_list	*list;

  list = graphe->adj_list;
  while (list->numero_sommet != graphe->start)
    list = list->next;
  printf("Start: %s\n", list->name);
  list = graphe->adj_list;
  while (list->numero_sommet != graphe->end)
    list = list->next;
    printf("End: %s\n", list->name);
  list = graphe->adj_list;
  while (list != NULL)
    {
      i = 0;
      printf("Numéro sommet: %d\nLiaisons: ", list->numero_sommet);
      while (i != list->nb_sommet_adjacent)
	{
	  printf(" %d", list->adjacents[i]);
	  i++;
	}
      printf("\n");
      list = list->next;
    }
  return (0);
}
