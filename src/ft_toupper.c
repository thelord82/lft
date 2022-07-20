/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:16:03 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:16:04 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Turns 'c' into its ASCII uppercase
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c ^= 1 << 5;
	return (c);
}
