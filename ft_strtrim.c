/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 17:55:55 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:35:04 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int end;
	int start;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	while (ft_iswhitespace(s[end]))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
