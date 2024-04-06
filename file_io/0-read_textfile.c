#include "main.h"
/**
 * read_textfile - fct which give read a text file throught the std output
 * @filename: file to operate on
 * @letters: number of file's letters to print out
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ouvrir, lire, ecrire;
	char *buffer = malloc (sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	ouvrir = open(filename, O_RDWR);
	if (ouvrir == -1)
		return (0);


	lire = read(ouvrir, buffer, letters);
	if (lire == -1)
		return (0);

	ecrire = write(STDOUT_FILENO, buffer, lire);
	if (ecrire == -1)
		return (0);

	close(ouvrir);
	free (buffer);

	return (ecrire);
}
