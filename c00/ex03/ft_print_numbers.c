/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <ecarchi-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:18:42 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/14 11:19:07 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = 48;
	while (a <= 57)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main()
{
	ft_print_numbers();
}*/
