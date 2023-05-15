/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_valid_position(char *tab, int x, int pos)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == pos + '0')
			return (0);
		i++;
	}
	i = 0;
	while (i < x)
	{
		if (tab[i] == pos - x + i + '0' || tab[i] == pos + x - i + '0')
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(char *tab, int *x, int *max)
{
	*x = 0;
	while (*x < 10)
	{
		ft_putchar(tab[*x]);
		*x = *x + 1;
	}
	ft_putchar('\n');
	*max = *max + 1;
}

void	ft_backtracking(char *tab, int x, int *max)
{
	if (x == 10)
	{
		ft_print_solution(tab, &x, &(*max));
		return ;
	}
	tab[x] = '0';
	while (tab[x] - '0' < 10)
	{
		if (ft_is_valid_position(tab, x, tab[x] - '0'))
			ft_backtracking(tab, x + 1, &(*max));
		tab[x]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		max;

	max = 0;
	ft_backtracking(board, 0, &max);
	return (max);
}

int main(void)
{
    ft_ten_queens_puzzle();
    return 0;
}
