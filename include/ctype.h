#ifndef _FAKELIBC_CTYPE_H
#define _FAKELIBC_CTYPE_H
/*
#define isspace fake_isspace
#define isdigit fake_isdigit
#define isxdigit fake_isxdigit
#define isalpha fake_isalpha
#define isalnum fake_isalnum

static int fake_isspace(int ch) {
    return (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n');
}

static int fake_isdigit(int ch) {
    return (ch >= '0') && (ch <= '9');
}

static int fake_isxdigit(int ch) {
    return isdigit(ch) || ((ch >= 'a') && (ch <= 'f')) || ((ch >= 'A') && (ch <= 'F'));
}

static int fake_isalpha(int ch) {
    return ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z'));
}

static int fake_isalnum(int ch) {
    return isalpha(ch) || isdigit(ch);
}
*/
/* From ifndef at top of file: */
#endif
