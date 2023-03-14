/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                       :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/08 19:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_comb(int *arr, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        char c = arr[i] + '0';
        write(1, &c, 1);
        i++;
    }
    if (arr[0] != 10 - n)
        write(1, ", ", 2);
}

void generate_comb(int *arr, int n, int pos, int last)
{
    int i;

    if (pos == n)
    {
        print_comb(arr, n);
        return ;
    }
    i = last + 1;
    while (i <= 9)
    {
        arr[pos] = i;
        generate_comb(arr, n, pos + 1, i);
        i++;
    }
}

void ft_print_combn(int n)
{
    int arr[10];
    int i;

    i = 0;
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    generate_comb(arr, n, 0, -1);
}
