#include <stdio.h>

int main(void) {
    char str[100];
    scanf("%[^\n]", str);

    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] == '\0') break;

        if (str[i] >= 'A' && str[i] <= 'M') {
            str[i] += 13;
        } else if (str[i] >= 'N' && str[i] <= 'Z') {
            str[i] -= 13;
        } else if (str[i] >= 'a' && str[i] <= 'm') {
            str[i] += 13;
        } else if (str[i] >= 'n' && str[i] <= 'z') {
            str[i] -= 13;
        } else continue;
    }

    printf("%s\n", str);

    return 0;
}