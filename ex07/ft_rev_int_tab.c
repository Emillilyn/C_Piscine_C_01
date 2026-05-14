/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:13:04 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 17:35:46 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	arr[] = {1, 2, 3, 4, 5};
// 	int	size;
// 	int	i;

// 	size = 5;
// 	printf("Before: ");
// 	for (i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	ft_rev_int_tab(arr, size);
// 	printf("After: ");
// 	for (i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	return (0);
// }
