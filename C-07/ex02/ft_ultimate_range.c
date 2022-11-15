/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:06:23 by bamsyah           #+#    #+#             */
/*   Updated: 2022/09/13 15:51:11 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*test;
	int	i;
	int	save;

	save = min;
	i = 0;
	if (save >= max)
	{
		range = 0;
		return (0);
	}
	test = malloc(sizeof(int) * (max - save));
	if (!test)
		return (-1);
	while (save < max)
	{
		test[i] = save;
		save++;
		i++;
	}
		*range = test;
	return (max - min);
}
/*int main ()
{
    int *k;
    int min;
    int max;
    int i  = 0;

    min = -6;
    max = 6;
    printf("%d\n", ft_ultimate_range(&k, min, max));
    while(i < (max - min))
    {
        printf("%d", k[i]);
        i++;
    }
}*/
