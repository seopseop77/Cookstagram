#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "print.c"
#include "sign.c"

int main() {
    printf("Hello, World!\n");
    scanf("%d", NULL);
    refresh_print("Hello, World!\n");
    refresh_print("input : ");

    char *str = get_str();

    printf("%s\n", str);

    int num = 0;
    scanf("%d", &num);
    refresh_print("%d\n", num);

    return 0;
}