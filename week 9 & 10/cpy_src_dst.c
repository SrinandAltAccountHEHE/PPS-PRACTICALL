#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char ch;
    source_file = fopen("source_file.txt", "r");
    if(source_file == NULL) {
        perror("Error opening source file");
        return 1;
    } 
    destination_file = fopen("Destination.txt", "w");
    if(destination_file == NULL) {
        perror("Error opening destination file");
        return 1;
    }
    while((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }
    fclose(source_file);
    fclose(destination_file);
    printf("File successfully changed");
}