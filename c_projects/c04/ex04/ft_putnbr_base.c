/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' '
			|| base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	n;

	n = nbr;
	base_size = check_base(base);
	if (base_size == 0)
		return ;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= base_size)
	{
		ft_putnbr_base(n / base_size, base);
		ft_putnbr_base(n % base_size, base);
	}
	else
	{
		write(1, &base[n], 1);
	}
}
