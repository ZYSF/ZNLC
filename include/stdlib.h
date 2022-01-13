#ifndef _FAKELIBC_STDLIB_H
#define _FAKELIBC_STDLIB_H

void* malloc(long sz);
void* calloc(long n, long sz);
void free(void* mem);
char* getenv(const char* name);
void exit(int x);

long strtol(const char* str, char**endvar, int base);
long long strtoll(const char* str, char**endvar, int base);
unsigned long strtoul(const char* str, char**endvar, int base);
unsigned long long strtoull(const char* str, char**endvar, int base);

float strtof(const char* str, char**endvar);
double strtod(const char* str, char**endvar);

/* From ifndef at top of file: */
#endif
