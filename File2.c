#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("filestring.txt", "r");

    if (ptr == NULL) {
        printf("Error: File not found or could not be opened.\n");
        return 1;
    }

    char str[100];
    fgets(str, 100, ptr);   // reads one full line (including spaces)
    printf("File content: %s", str);

    fclose(ptr);
    return 0;
}
