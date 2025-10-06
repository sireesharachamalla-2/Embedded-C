#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char srcFile[100], destFile[100];
    char ch;
    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);
    source = fopen(srcFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }
    destination = fopen(destFile, "a");
    if (destination == NULL) {
        printf("Cannot open destination file.\n");
        fclose(source);
        exit(1);
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Contents of '%s' appended to '%s'\n", srcFile, destFile);

    fclose(source);
    fclose(destination);

    return 0;
}