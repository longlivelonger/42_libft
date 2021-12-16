/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbronwyn <sbronwyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:46:42 by sbronwyn          #+#    #+#             */
/*   Updated: 2021/07/10 17:36:38 by sbronwyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	result = 0;
	i = -1;
	while (s1[++i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			continue ;
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (result);
	if (s1[i] > s2[i])
		return (1);
	return (-1);
}
