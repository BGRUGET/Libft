/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 20:36:24 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 18:00:23 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t lend;
	size_t lens;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	len = 0;
	if (size == 0)
		return (lens);
	if (size - 1 < lend)
		return (lens + size);
	while (len + lend < size - 1 && src[len])
	{
		dst[len + lend] = src[len];
		len++;
	}
	dst[len + lend] = '\0';
	return (lend + lens);
}
