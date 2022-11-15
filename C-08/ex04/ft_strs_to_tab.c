/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:40:55 by bamsyah           #+#    #+#             */
/*   Updated: 2022/09/15 16:59:02 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*t;

	t = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stocks;
	int			len;

	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stocks)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		stocks[i].size = len;
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i], len);
		i++;
	}
	stocks[i].str = 0;
	return (stocks);
}
