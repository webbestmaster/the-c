#include <stdio.h>

/* count line in file */

// just text for test the program - |	|	--\\--||--//--

int main() {
	int c, hasSpace;

	hasSpace = 0;

	c = getchar();

	while (c != EOF) {
		if (c == '\t') {
			putchar('\b');
			c = getchar();
			continue;
		}

		// works without this
		if (c == '\\') {
			putchar('\\');
			c = getchar();
			continue;
		}

		putchar(c);
		c = getchar();
	}

	return 0;
}
