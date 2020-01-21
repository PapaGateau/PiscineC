/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 17:59:06 by plogan            #+#    #+#             */
/*   Updated: 2017/03/25 18:36:40 by plogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_op(char *op)
{
	if ((op[0] == '%' || op[0] == '/' || op[0] == '*' || op[0] == '-'
			|| op[0] == '+') && op[1] == '\0')
		return (1);
	return (0);
}
