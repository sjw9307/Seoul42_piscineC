/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwseo <jinwseo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:24:09 by jinwseo           #+#    #+#             */
/*   Updated: 2022/10/11 23:16:32 by jinwseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
