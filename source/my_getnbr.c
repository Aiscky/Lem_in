/*
** my_getnbr.c for my_getnbr in /home/woivre_t/rendu/Piscine-C-Jour_04
**
** Made by Thibault Woivre
** Login   <woivre_t@epitech.net>
**
** Started on  Thu Oct 10 09:50:55 2013 Thibault Woivre
** Last update Mon Apr  7 11:38:16 2014 Thibault Woivre
*/

int	my_var(int *var)
{
  var[0] = 0;
  var[1] = 0;
  var[2] = 0;
  return (0);
}

int	my_getnbr(char *str)
{
  int	var[3];

  my_var(var);
  while (str[var[0]] != 0)
    {
      if (str[var[0]] <= '9' && str[var[0]] >= '1')
	{
	  while (str[var[0]] <= '9' && str[var[0]] >= '0')
	    {
	      var[2] = var[2] * 10 + str[var[0]] - 48;
	      var[0] = var[0] + 1;
	    }
	  return ((var[1] == 1) ? -var[2] : var[2]);
	}
      else if (str[var[0]] == '-')
        var[1] = 1;
      else if (str[var[0]] == '+')
        var[1] = 0;
      var[0] = var[0] + 1;
    }
  return (0);
}
