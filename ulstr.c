/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:48:20 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/06/13 14:36:07 by dlopez-i         ###   ########.fr       */
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
			if(argv[1][i] >= 65  && argv[1][i] <= 90)
				ft_putchar(argv[1][i] + 32);
			else if (argv[1][i] >= 97  && argv[1][i] <= 122)
				ft_putchar(argv[1][i] - 32);
			else
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	
	write(1, "\n",1);
	
}
