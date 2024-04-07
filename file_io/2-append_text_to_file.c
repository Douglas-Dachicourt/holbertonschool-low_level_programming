#include "main.h"
/**
 *
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int len = 0;
	int ouvrir, ecrire;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (-1);
	} else
	{
		while (text_content[i] != '\0')
		{
			i++;
			len++;
		}
	}
	ouvrir = open(filename, O_RDWR | O_APPEND);
	if (ouvrir == -1)
		return (-0);

	ecrire = write(ouvrir, text_content, len);
	if (ecrire == -1)
		return (0);

	close(ouvrir);

return (1);

}
