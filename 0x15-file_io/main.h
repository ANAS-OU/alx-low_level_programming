#ifndef MAIN_H
#define MAIN_H

/**********************
 * Standard Libraries
 **********************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**********************
 * Defined Constantes
 **********************/
#define BUFSIZE 1024

/**********************
 * Functions Prototype
 **********************/
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_handler(char *filename, int status);

#endif /* MAIN_H */
