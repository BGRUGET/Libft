/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 13:15:26 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 16:56:53 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *h, const char *n)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = 0;
	if (h[i] == '\0' && n[len] == '\0')
		return ((char *)h + i);
	while (h[i])
	{
		len = 0;
		if (h[i] == n[len] || n[len] == '\0')
		{
			j = i;
			while (h[j] == n[len] && n[len])
			{
				j++;
				len++;
			}
			if (n[len] == '\0')
				return ((char *)h + i);
		}
		i++;
	}
	return (NULL);
}
