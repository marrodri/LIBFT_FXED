/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:47:19 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/12 15:47:22 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power_of(int n, int expo)
{
	int	i;
	int	power;

	i = 1;
	power = 1;
	while (i < n)
	{
		power = power * expo;
		i++;
	}
	return (power);
}
