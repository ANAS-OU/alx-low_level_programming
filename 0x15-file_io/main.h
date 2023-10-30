#ifndef MAIN_H
#define MAIN_H

/**********************
 * Standard Libraries
 **********************/
#include <stdio.h>
#include <unistd.h>

/**********************
 * Defined Constantes
 **********************/
#define BUFSIZE 1024

/**********************
 * Functions Prototype
 **********************/
unsigned int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
