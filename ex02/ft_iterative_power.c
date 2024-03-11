/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:49:38 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/20 19:25:50 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if (power < 0)
		return (1);
	result = 1;
	i = 0;
	while (++i <= power)
		result *= nb;
	return (result);
}

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 10;
// 	power = 2;
// 	printf("%d", ft_iterative_power(nb, power));
// }
