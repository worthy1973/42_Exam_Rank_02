/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:53:27 by dlopez-i          #+#    #+#             */
/*   Updated: 2023/06/13 15:12:32 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}
*/

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	write (1,  &str[i++], 1);
}
/*
int main()
{
ft_putstr("Hola que haseee");
}*/
