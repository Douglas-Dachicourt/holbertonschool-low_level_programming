#include "main.h"
/**
 * append_text_to_file - fct which add text to an end of file
 * @filename: file to update
 * @text_content: text to add
 * Return: 1 if fct succeed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int len = 0;
	int ouvrir, ecrire;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		i++;
		len++;
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
