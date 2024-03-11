/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:57:45 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/21 07:08:14 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 0;
// 	printf("%d", ft_iterative_factorial(nb));
// 	return (0);
// }
