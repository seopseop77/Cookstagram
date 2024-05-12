#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sign.c"

char *id;

int main() {
    while (!(id=signinup())) {} // 성공적으로 sign in 할때까지 반복

    return 0;
}

