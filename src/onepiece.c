/**
 *  Read a file and prints the content
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch, file_name[25];
    FILE *fp;

    fp = fopen("../files/onepiece.txt", "r");

    if (fp == NULL) {
        perror("Error opening the file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp)) != EOF) 
    printf("%c", ch);

    fclose(fp);
    return 0;
}