#include <stdlib.h>
#include <stdio.h>
#include "prog1.h"
#include "shared.h"

char * progname = "prog1";

int prog1helper() {
    return 1;
}

int main(int argc, char ** argv) {
    int i;
    printf("I am prog1\n");
    i = sharedf();
    printf("%d\n", i);
    i = prog1helper();
    printf("%d\n", i);
    return 0;
}
