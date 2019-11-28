#include <stdlib.h>
#include <stdio.h>
#include "prog1.h"
#include "prog2.h"
#include "shared.h"


int prog2helper() {
    return 2;
}

#ifdef prog2
char * progname = "prog2";
int main(int argc, char ** argv) {
    int i;
    printf("I am prog2\n");
    i = sharedf();
    printf("%d\n", i);
    i = prog1helper();
    printf("%d\n", i);
    i = prog2helper();
    printf("%d\n", i);
    return 0;
}
#endif
