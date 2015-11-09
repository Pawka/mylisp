#include <stdio.h>

/* static means this var is local to this file */
static char input[2048];

int main(int argc, char** argv) {
    puts("MyLisp");
    puts("Press Ctrl+C to Exit\n");

    while (1) {
        fputs("mylisp> ", stdout);
        fgets(input, 2048, stdin);

        printf("No you're a %s", input);
    }

    return 0;
}
