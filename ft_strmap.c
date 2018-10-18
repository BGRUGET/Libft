/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 22:16:37 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 23:54:18 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(str = (char *)ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
