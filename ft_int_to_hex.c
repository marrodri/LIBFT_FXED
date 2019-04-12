/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:47:01 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/12 15:47:04 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_size(int n)
{
	int size;
	int i;

	size = 0;
	i = 1;
	while (i <= n)
	{
		size++;
		i = i * 16;
	}
	return (size);
}

static char		set_hex(int *n, char *ind, int size)
{
	int		ans;
	char	hex;
	int		power;

	ans = 0;
	power = 0;
	power = (ft_power_of(size, 16));
	ans = *n / power;
	*n = *n - (ans * power);
	hex = ind[ans];
	return (hex);
}

char			*ft_int_to_hex(int n)
{
	char	*hex;
	char	*index;
	int		size;
	int		i;

	i = 0;
	size = check_size(n);
	index = "0123456789abcdef";
	hex = (char*)malloc((size) * sizeof(char));
	while (size > 0)
	{
		hex[i] = set_hex(&n, index, size);
		i++;
		size--;
	}
	hex[i] = '\0';
	return (hex);
}
