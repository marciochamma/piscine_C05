/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:20:08 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/20 19:24:46 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		result = 1;
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 5;
// 	printf("%d", ft_recursive_factorial(nb));
// 	return (0);
// }
