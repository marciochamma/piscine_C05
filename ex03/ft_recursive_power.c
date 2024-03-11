/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:34:38 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 07:13:03 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 10;
// 	power = 2;
// 	printf("%d", ft_recursive_power(nb, power));
// 	return (0);
// }
