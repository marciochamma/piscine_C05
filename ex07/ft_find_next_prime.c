/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:45:23 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 07:20:46 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	if (nb < 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	i = 0;
	while (i <= 2147483647)
	{
		j = 2;
		while (j < nb + i)
		{
			if ((nb + i) % j == 0)
				break ;
			j++;
		}
		if (j == nb + i)
			return (nb + i);
		i += 2;
	}	
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 0;
// 	printf("%d", ft_find_next_prime(nb));
// 	return (0);
// }
