#ifndef _FAKELIBC_STRING_H
#define _FAKELIBC_STRING_H

#include <stddef.h>

//size_t strlen(const char* foo);
#define strlen fake_strlen
size_t fake_strlen(const char* foo) {
    if (foo == NULL) {
        return 0;
    } else {
        size_t i = 0;
        while (foo[i] != 0) i++;
        return i;
    }
}

char* strcat(char* str, const char* cat);
char* strcpy(char* buffer, const char* str);
const char* strpbrk(const char* str, const char* search);
int strcmp(const char* a, const char* b);

//void* memcpy(void* dst, const void* src, size_t nbytes);
#define memcpy fake_memcpy
void* fake_memcpy(void* dst, const void* src, size_t nbytes) {
    //printf("fake_memcpy(%lx, %lx, %ld)\n", dst, src, nbytes);
    char* cdst = (char*) dst;
    const char* csrc = (char*) src;
    size_t i = 0;
    for (i = 0; i < nbytes; i++) {
        //printf("fake_memcpy %ld\n", i);
        cdst[i] = csrc[i];
    }
    //printf("fake_memcpy done!\n");
    return dst;
}

void* memset(void* mem, int byt, size_t nbytes);

/* From ifndef at top of file: */
#endif
