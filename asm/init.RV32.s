.text
.global _start

_start:
    call main
    jal _end

_end:
    j _end
