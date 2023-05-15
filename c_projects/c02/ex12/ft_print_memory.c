/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*        ft_print_memory.c                 :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_hex(unsigned char c)
{
	char	hex[2];

	hex[0] = "0123456789abcdef"[c / 16];
	hex[1] = "0123456789abcdef"[c % 16];
	write(1, &hex, 2);
}

void	ft_print_ascii(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hex(ptr[i]);
		if (i % 2)
			write(1, " ", 1);
		if (i % 16 == 15 || i == size - 1)
		{
			ft_print_ascii(ptr[i]);
			write(1, "\n", 1);
		}
		i++;
	}
	return (addr);
}
