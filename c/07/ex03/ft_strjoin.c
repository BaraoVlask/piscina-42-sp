#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_lenght(int size, char **strs, char *sep)
{
	int	word;
	int length;
	int sep_length;

	word = 0;
	length = 0;
	sep_length = ft_strlen(sep);
	while (word < size)
	{
		length += ft_strlen(strs[word]);
		if (word < size)
			length += sep_length;
		word++;
	}
	return (length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		word;
	int		i;
	int		c;

	word = 0;
	i = 0;
	c = 0;
	string = (char *)malloc(ft_lenght(size, strs, sep) * sizeof(char));
	while (word < size)
	{
		i = 0;
		while (strs[word][i] != '\0')
			string[c++] = strs[word][i++];
		i = 0;
		while (sep[i] != '\0' && word != size - 1)
			string[c++] = sep[i++];
		word++;
	}
	string[c] = '\0';
	return (string);
}

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";
	printf("%s\n", ft_strjoin(10, text, " - "));
}
