#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_result, text_length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[text_length])
text_length++;
}
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
write_result = write(file_descriptor, text_content, text_length);
if (write_result == -1)
{
close(file_descriptor);
return (-1);
}
close(file_descriptor);
return (1);
}
