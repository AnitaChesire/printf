#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int put_char(int c);
void print_d(int n);
void print_i(int n);

#endif
