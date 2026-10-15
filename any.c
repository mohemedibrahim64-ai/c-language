#include <stdio.h>

int main() {
    // Declare an array of 6 characters
    char m[6];

    printf("Enter");
    

    scanf("%s", m);
    for (int i = 0; i < 5; i++) {
        printf("m[%d] = %c\n", i, m[i]);
    }

    return 0;
}