/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani <dani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:48:20 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/06/13 19:28:05 by dani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write (1,  &c, 1); 

}
int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i] + 32);
			else if (argv[1][i] >= 'a'  && argv[1][i] <= 'z')
				ft_putchar(argv[1][i] - 32);
			else
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	
	write(1, "\n",1);
	
}
