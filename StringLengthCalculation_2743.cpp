#include <stdio.h>

int main(void) {
	char str[101] = { 0, };
	scanf("%[A-z]", str);

	int str_length = 0;

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\0') {
			str_length = i;
			break;
		}
	}

	printf("%d\n", str_length);

	return 0;
}