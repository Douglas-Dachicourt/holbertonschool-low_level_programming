#include "main.h"
/**
 * create_file - fct which create a file to be written on
 * @filename: name of the file created
 * @text_content: content to write on the file
 * Return: 1 if fct is success
 */
int create_file(const char *filename, char *text_content)
{
	int create;
	ssize_t wr;
	int i = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
			len++;
		}
	}

	create = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (create == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(create, text_content, len);
		if (wr == -1)
		{
			close(create);
			return (-1);
		}
	}

	close(create);

	return (1);
}
