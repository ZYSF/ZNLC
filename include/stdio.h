#ifndef _FAKELIBC_STDIO_H
#define _FAKELIBC_STDIO_H

struct FILE_internals {};

typedef struct FILE_internals FILE;

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

extern FILE* stderr;
extern FILE* stdin;
extern FILE* stdout;

#define EOF ((int)-1)

int printf(const char* fmt, ...);
int fprintf(FILE* f, const char* fmt, ...);

FILE* fopen(const char* name, const char* mode);
int fclose(FILE* f);
int fflush(FILE* f);

/* From ifndef at top of file: */
#endif
