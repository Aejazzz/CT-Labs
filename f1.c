#include <stdio.h>
#include <string.h>

void main() {
    char str[100], temp;
    int i, j = 0;

    printf("\nEnter the string: ");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("\nReversed string is: %s", str);
    return;
}
