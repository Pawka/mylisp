#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
    puts("MyLisp");
    puts("Press Ctrl+C to Exit\n");

    while (1) {
        char* input = readline("mylisp> ");

        add_history(input);

        printf("No you're a %s", input);

        free(input);
    }

    return 0;
}
