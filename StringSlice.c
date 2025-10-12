#include <stdio.h>

void slice(char Str[], int n, int m);

int main() {
    
    char Str[200];
    printf("Enter the String: ");
    fgets(Str, 200, stdin);

    slice(Str, 3, 6);  // Example: index 3 se 6 tak
    return 0;
}

void slice(char Str[], int n, int m) {
    char newStr[200];
    int j = 0;

    for (int i = n; i < m && Str[i] != '\0'; i++) {
        newStr[j] = Str[i];
        j++;
    }

    newStr[j] = '\0';  // null terminate karna zaroori hai
    puts(newStr);
}
