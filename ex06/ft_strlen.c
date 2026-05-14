/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:00:22 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/14 17:11:31 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*test_str;
// 	int		lenght;

// 	test_str = "Hello, World!";
// 	lenght = ft_strlen(test_str);
// 	printf("String: %s\n", test_str);
// 	printf("Length: %d\n", lenght);
// 	return (0);
// }
