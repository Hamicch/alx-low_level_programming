#ifndef FILE_I/O_H_
#define FILE_I/O_H_

#include <unistd.h>
#include <stdio.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* #ifndef BIT_MANIPULATION_H_ */
