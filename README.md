# ZNLC
Zak's New Library for C-like environments

(Or a recursive acronym for ZNLC is Not LibC.)

## Introduction

This was developed as a minimal "libc"-like wrapper for building ZNCC and examples.

It is NOT intended as a full libc replacement, but only the necessary parts to link simple programs (you'd still need to implement most of the functions yourself).

When building self-hosting versions of the compiler and/or examples and tests, this library usually only serves to provide simplified versions of system headers, and still needs the relevant system libraries at link-/run-time. This ensures that the compiler doesn't need to keep up with minor API differences and that header directories remain obvious, and also allows Linux-like targets to be built from other platforms.

## See Also

https://github.com/ZYSF/ZNCC/
