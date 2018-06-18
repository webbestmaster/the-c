#include <stdio.h>

/* count line in file */

int main() {
	int c, hasSpace;

	hasSpace = 0;

	c = getchar();

	while (c != EOF) {
		if (c != ' ') {
			hasSpace = 0;
			putchar(c);
		} else {
			if (hasSpace == 0) {
				hasSpace = 1;
				putchar(c);
			}
		}

		c = getchar();
	}

	return 0;
}
