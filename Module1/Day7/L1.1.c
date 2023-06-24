/* 1. File Copy: Write a C program to copy a file using file operations */

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
    }

    destinationFile = fopen("destination.txt", "w");

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File successfully copied...\n");

    return 0;
}