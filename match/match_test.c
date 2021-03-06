/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:00:59 by plogan            #+#    #+#             */
/*   Updated: 2017/03/19 13:29:11 by plogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) + match(s1 + 1, s2));
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d", match(argv[1], argv[2]));
	return (0);
}
