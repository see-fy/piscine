/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <tahmaris> </tahmaris>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: <2023>-<03>-<01> <15>:<54> by <tahmaris>          #+#    #+#    */
/*   Updated: <2023>-<03>-<01> <15>:<54> by <tahmaris>     ###   ########.fr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
