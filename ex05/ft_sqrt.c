/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:34:45 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/21 10:31:43 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46341 && i <= nb)
	{
		if ((i * i == nb))
			return (i);
		else
			i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 4;
// 	printf("%d", ft_sqrt(nb));
// 	return (0);
// }
