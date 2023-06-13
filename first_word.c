/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:58:37 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/06/13 09:25:47 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if(argc == 2)
		{
			while (argv[1][i] == 32 || argv[1][i] == 9)
				i++;
			while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])  
			{	
			write(1, &argv[1][i],1);
			i++;
			}
		}
	write(1, "\n" ,1);
}
