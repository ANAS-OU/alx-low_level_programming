#ifndef MAIN_H
#define MAIN_H

/**********************
 * Standard Libraries
 **********************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**********************
 * Functions Prototype
 **********************/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
unsigned int _strlen(char *s);

#endif /* MAIN_H */
