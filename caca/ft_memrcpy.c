/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memrcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 18:58:47 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 16:43:34 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		((char*)dst)[i] = ((char*)src)[i];
	}
	return (dst);
}
