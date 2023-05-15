/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*        ft_strcapitalize.c                :+:      :+:    :+: n             */
/*                                                    +:+ +:+         +:+     */
/*   By: tahmaris <tahmaris@42.fr>                +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:35:00 by tahmaris          #+#    #+#             */
/*   Updated: 2023/03/15 21:35:00 by tahmaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (0);
	}
	return (1);
}

int	is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}

int	is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	if (is_lowercase(str[0]))
	{
		str[0] -= 'a' - 'A';
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i]) && !is_alpha(str[i])
			&& is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 'a' + 'A';
		i++;
	}
	return (str);
}
