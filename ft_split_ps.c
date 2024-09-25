#include "push_swap.h"

// splits a string into an array of words

// to free the allocated memory if anything goes wrong
static void	ft_freedup(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

// to count how many words exists in the array,
// so we know the size for the malloc
static int	ft_count_words(char const *s, char delimiter)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == delimiter && s[i])
			i++;
		if (s[i] && s[i] != delimiter)
			words++;
		while (s[i] && s[i] != delimiter)
			i++;
	}
	return (words);
}

// to separate each word in the correct order
static char	**ft_split_words(char **array, char const *s, char c)
{
	char	**word;
	size_t	word_len;
	size_t	i;

	word = array;
	word_len = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{ 
                        word_len++;
			if (s[i + 1] == '\0' || s[i + 1] == c)
			{
				*word = ft_substr(s, i - word_len + 1, word_len);
				if (!(*word))
					return (ft_freedup(array), NULL);
				word++;
				word_len = 0;
			}
                       
		}
	}
	*word = NULL;
	return (array);
}

char	**ft_split_ps(char **s, char c)
{
	char	**array;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(*s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_split_words(array, *s, c);
	return (array);
}
/*int main()
{
        char c[] = "eu sou o hugo";
        char **s = ft_split(c,' ');
       int i;
       i = 0;
        while (s[i])
       {
               printf("%s[%d]\n",s[i],i);
               i++;
       }

}*/
