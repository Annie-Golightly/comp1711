#include "utils.h" //this file sets up the function of utils.h
FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
    exit(1);
    }
return file;
}