#include <stdio.h>

int main () {
    char filename [] = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("");
        return 1; // in case there is an error in creating/opening the file (e.g. if the file is locked)
    }

    fclose(file); //always have to close file
    return 0;
}