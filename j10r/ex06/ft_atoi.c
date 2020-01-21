/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:55:33 by plogan            #+#    #+#             */
/*   Updated: 2017/03/27 18:13:09 by plogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v'
			|| c == '\f')
		return (1);
	else
		return (0);
}

int		ft_is_num(char c)
{
	if (c == '\0')
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	long	total;
	int		is_neg;

	i = 0;
	total = 0;
	is_neg = 0;
	while (str[i])
	{
		if (ft_is_num(str[i]) || is_neg != 0)
			break ;
		else if (str[i] == '-' || str[i] == '+')
			is_neg = (str[i] == '-') ? -1 : 1;
		else if (ft_is_whitespace(str[i]) != 1)
			return (0);
		i++;
	}
	while (str[i])
	{
		if (ft_is_num(str[i]) == 0)
			break ;
		total = (total * 10) + str[i] - '0';
		i++;
	}
	return (is_neg == -1) ? (int)-total : (int)total;
}
