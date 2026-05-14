/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:18:57 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 16:24:06 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	val1;
// 	int	val2;

// 	val1 = 42;
// 	val2 = 21;
// 	printf("before swap: a = %d, b = %d\n", val1, val2);
// 	ft_swap(&val1, &val2);
// 	printf("after swap: a = %d, b = %d\n", val1, val2);
// 	return (0);
// }
