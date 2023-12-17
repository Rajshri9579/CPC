
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char arr[]) {
    int length = strlen(arr);
    for (int i = 0; i < length / 2; i++)        {
    char temp = arr[i];
    arr[i] = arr[length - i - 1];
    arr[length - i - 1] = temp;
    }
}

int main() {
    char arr[10][50];
    for (int i = 0; i < 10; i++) {
    printf("Enter string no %d: ", i + 1);
    scanf("%s", arr[i]);
    }

    for (int i = 0; i < 10; i++) {
    reverseString(arr[i]);
    printf("Reverse of String %d is: %s\n", i + 1, arr[i]);
    }
    return 0;
}


