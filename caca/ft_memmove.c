/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 17:41:43 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:03:22 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t l)
{
	return ((d < s) ? ft_memcpy(d, (void *)s, l) : ft_memrcpy(d, (void *)s, l));
}
