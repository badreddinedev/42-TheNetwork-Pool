/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:20:33 by bamsyah           #+#    #+#             */
/*   Updated: 2022/09/13 15:51:57 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*nbr;

	i = 0;
	if (min >= max)
		return (0);
	nbr = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (nbr);
}
/*int main ()
{
    int *p = ft_range(-6, 6);
    int i = 0;
    while(i < (6 + 6))
        printf("%d\n", p[i++]);
    return(0);
}*/
