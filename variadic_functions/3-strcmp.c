
/**
 * _strcmp - fct qui compare deux chaines de char entre elles
 * @s1: premiere chaine de char a tester
 * @s2: deuxieme chaine de char a tester
 *
 *Return: valeur + si s1>s2, valeur - si s1 < s2, sinon valeur nulle
 */
int _strcmp(char *s1, char *s2)
{
	int value, i, j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
		{
			value = 0;
		} else
		{
			if (s1[i] > s2[j])
			{
				return (value = s1[i] - s2[j]);
			} else if (s1[i] < s2[j])
			{
				return (value =  -s2[j] + s1[i]);
			}
		}
	}
return (0);
}
