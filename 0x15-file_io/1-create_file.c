#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File to be created
 * @text_content: contents of the file
 * Return: file or output
 */

int create_file(const char *filename, char *text_content)
{
int file, letters, action;

if (!filename)
{
return (-1);
}
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file == -1)
{
return (-1);
}
if (!text_content)
{
text_content = "";
}
for (letters = 0; text_content[letters]; ++letters)
{
action = write(file, text_content, letters);
}
if (action == -1)
{
return (-1);
}
close(file);
return (1);
}
