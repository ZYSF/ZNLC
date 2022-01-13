#ifndef _FAKELIBC_SETJMP_H
#define _FAKELIBC_SETJMP_H

/*struct jmp_buf_struct {
    int todo;
};

typedef struct jmp_buf_struct jmp_buf;*/
typedef int jmp_buf;

#define setjmp(x) \
    0
//    (printf("WARNING: Unimplemented: setjmp\n") && 0)
#define longjmp(x,y) \
    printf("WARNING: Unimplemented: longjmp\n")

/* From ifndef at top of file: */
#endif
