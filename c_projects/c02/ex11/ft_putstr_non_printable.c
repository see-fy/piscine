/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*        ft_putstr_non_printable.c         :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, hex, 2);
		}
		i++;
	}
}
