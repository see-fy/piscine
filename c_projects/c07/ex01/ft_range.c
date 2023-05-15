/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		len;
	int		i;

	if (min >= max)
		return (NULL);
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
