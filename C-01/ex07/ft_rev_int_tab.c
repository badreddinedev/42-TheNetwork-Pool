/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:59:38 by bamsyah           #+#    #+#             */
/*   Updated: 2022/08/30 23:27:31 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = size - 1;
		swp = tab[j];
		tab[j] = tab[i];
		tab[i] = swp;
		i++;
		size--;
	}
}
