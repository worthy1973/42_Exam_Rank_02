/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:18:44 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/06/07 19:17:09 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int c)
{
	write(1 , &c, 1);
}

int main (int ac, char **av)
{
	int i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		if (!(av[1][i] >= 'a' && av[1][i] <= 'z') && !(av[1][i] >= 'A' && av[1][i] <= 'Z'))
			ft_putchar(av[1][i]);
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			if (av[1][i] == 'z')
				ft_putchar('a');
			else
				ft_putchar(((int)av[1][i] + 1));
		}
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			if (av[1][i] == 'Z')
				ft_putchar('A');
			else
				ft_putchar(((int)av[1][i] + 1));
		}
		i++;
	}
	ft_putchar('\n');
}

