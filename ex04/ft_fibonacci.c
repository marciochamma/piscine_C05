/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:10:20 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/20 19:28:34 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}

// int	main(void)
// {
// 	int	index;

// 	index = 3;
// 	printf("%d", ft_fibonacci(index));
// 	return (0);
// }
