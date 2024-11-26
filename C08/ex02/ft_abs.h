/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:46:13 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 19:14:31 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

/* int	ft_abs(int a)
{
	if (a < 0)
		a = -a;
	return (a);
}
# define ABS(Value) ft_abs((Value)) */
# define ABS(Value) ({int a = (Value); if (a < 0) a = -a; a; })

#endif
