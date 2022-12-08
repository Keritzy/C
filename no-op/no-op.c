#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 128

void vulnerable_function(char *input) {
    char buffer[BUFFER_SIZE];

    // copy the input to the buffer without checking its length
    strcpy(buffer, input);

    printf("The input is: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    // call the vulnerable function with the user-provided input
    vulnerable_function(argv[1]);

    return 0;
}
