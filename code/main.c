#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dirent.h"

#include "sign.c"

char *id;

int main() {
    while (1) {
        while (!(id=signinup())) {}

        int id_num = 0;
        char **id_list = get_filenames("../data/personal_info", &id_num);
        if (!id_list) {
            perror("get_filenames failed");
            return 1;
        }

        if (!check_id(id)) {
            printf("id not found\n");
        } else {
            printf("signed in as %s\n", id);
            break;
        }
    }



    return 0;
}

