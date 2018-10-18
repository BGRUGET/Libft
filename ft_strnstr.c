/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 17:00:45 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 22:09:40 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	j;

	i = 0;
	l = 0;
	if (h[i] == '\0' && n[l] == '\0')
		return ((char *)h + i);
	while (h[i])
	{
		l = 0;
		if (h[i] == n[l] || n[l] == '\0')
		{
			j = i;
			while (h[j] == n[l] && n[l] && j < len)
			{
				j++;
				l++;
			}
			if (n[l] == '\0')
				return ((char *)h + i);
		}
		i++;
	}
	return (NULL);
}
