/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:44:18 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 16:52:17 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 42;
// 	b = 5;
// 	printf("Before: a = %d, b = %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("After: a (div) = %d, b (mod) = %d\n", a, b);
// 	return (0);
// }
