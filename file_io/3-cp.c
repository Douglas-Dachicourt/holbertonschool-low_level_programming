#include "main.h"
#define BUFFER_SIZE 1024
/**
 * print_usage_and_exit - fct to print an error message
 */
void print_usage_and_exit(void)
{
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}
/**
 * print_error_and_exit - fct to print an error message
 * @error_message: error message to print out
 */
void print_error_and_exit(const char *error_message)
{
    dprintf(STDERR_FILENO, "%s\n", error_message);
    exit(98);
}
/**
 * main - prgrm which copie content of a source file to another file
 * @argc: number of arguments
 * @argv: arguments' content
 * Return: 0 if the programm succeed
 */
int main(int argc, char *argv[]) {

	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

    if (argc != 3)
        print_usage_and_exit();

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit("Error: Can't read from file");
    }

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        print_error_and_exit("Error: Can't write to file");

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
        ssize_t bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            print_error_and_exit("Error: Can't write to file");
        }
    }
    if (bytes_read == -1) {
        print_error_and_exit("Error: Can't read from file");
    }
    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    return 0;
}
