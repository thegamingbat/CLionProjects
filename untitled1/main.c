#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

// Function to read from a file
void readFile(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

// Function to write to a file
void writeFile(const char *fileName, const char *content) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    fputs(content, file);

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <read|write> <filename> [content]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *operation = argv[1];
    const char *fileName = argv[2];

    if (strcmp(operation, "read") == 0) {
        readFile(fileName);
    } else if (strcmp(operation, "write") == 0) {
        if (argc < 4) {
            fprintf(stderr, "Error: Content to write must be provided\n");
            exit(EXIT_FAILURE);
        }
        const char *content = argv[3];
        writeFile(fileName, content);
    } else {
        fprintf(stderr, "Unknown operation: %s\n", operation);
        exit(EXIT_FAILURE);
    }

    return 0;
}
