/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 20:36:26 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 23:35:09 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char static	**ft_input_tab(char const *s, char c, char **tab, int nbword)
{
	int i;
	int len;
	int start;
	int j;

	i = 0;
	j = 0;
	while (nbword >= 0)
	{
		while (s[i] == c)
			i++;
		start = i;
		len = 0;
		while (s[i] != c && s[i])
		{
			i++;
			len++;
		}
		if (!(tab[j] = ft_strsub(s, start, len)))
			return (NULL);
		j++;
		nbword--;
	}
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nbword;

	if (!s || !c)
		return (NULL);
	nbword = ft_countword(s, c);
	if (!(tab = malloc(sizeof(char *) * (nbword + 1))))
		return (NULL);
	tab[nbword] = NULL;
	nbword--;
	return (ft_input_tab(s, c, tab, nbword));
}
