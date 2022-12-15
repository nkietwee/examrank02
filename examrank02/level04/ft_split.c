/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:07:55 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/08 16:16:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*int	ft_countisspace(char *str)
{
	int	i;
	int	countsp;

	i = 0;
	while (str[i])
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '\0')
			return (1);
	i++;
	return (0;
}*/
/*
char	ft_printword()
{


}


int	ft_countword(char *str)
{
	int	i;
	int	count;

	i = 0;
	count++;
	while (str[i] )
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '\0')
			count++;
		i++;
	}
	return (count);
}

char    **ft_split(char *str)
{
	int	count;
	int	i;
	char	*ans;

	count = ft_countword(str);
	i = 0;
	ans = (char **)malooc(sizeof(char *) * count + 1);
	if (!ans)
		return (NULL);
	while (i < count)
	{
		ans[i] = ft_printword();
		i++;
	}


}
*/



char    **ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	char	**res;
	char	*ans;

	res = (char **)malloc(sizeof(char *) * 5000);
	if (!res)
		return(NULL);
	while(str[i])
	{
		ans = (char *)malloc(sizeof(char ) * 5000);
		if ((!((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '\0') ) && (str[i] >= 33 && str[i] <= 126)
		{	
			ans[i] = str[i];
			i++;
		}
	}
	return(ans);
}

int	main(void)
{
	char *str;
	char **ans;

	str = "  asn  jlrep  erge";
	ans = ft_split(str);

	printf("%s", *(ans));
	printf("%s", *(ans + 1));
	printf("%s", *(ans + 2));


}