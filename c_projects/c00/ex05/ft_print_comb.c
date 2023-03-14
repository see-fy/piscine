/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                        :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/01 18:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write(1, digit, 3);
				if (digit[0] != '7' || digit[1] != '8' || digit[2] != '9')
					write(1, ", ", 2);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
