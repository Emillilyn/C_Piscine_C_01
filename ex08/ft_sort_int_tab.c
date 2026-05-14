/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:37:51 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 17:47:04 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	temp;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}

// void	ft_sort_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int arr[] = {42, 7, 13, 0, -5, 100, 2};
// 	int size = 7;
// 	int i;

// 	printf("Before: ");
// 	i = 0;
// 	while (i < size)
// 		printf("%d ", arr[i++]);
// 	printf("\n");

// 	ft_sort_int_tab(arr, size);

// 	printf("After: ");
// 	i = 0;
// 	while (i < size)
// 		printf("%d ", arr[i++]);
// 	printf("\n");
// 	return (0);
// }
