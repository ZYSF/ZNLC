#ifndef _FAKELIBC_STDARG_H
#define _FAKELIBC_STDARG_H

//struct va_list_struct {int x;};
//typedef struct va_list_struct va_list;
typedef int va_list;
/* From ifndef at top of file: */

void va_start(int x,...){
    printf("WARNING: Unimplemented: va_start\n");
}
void va_end(int x,...){
    printf("WARNING: Unimplemented: va_end\n");}
#endif
