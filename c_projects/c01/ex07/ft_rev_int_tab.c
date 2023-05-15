/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*     ft_rev_int_tab.c                     :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/14 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
