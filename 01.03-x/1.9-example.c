#include <stdio.h>
#include "my-get-line.h"

#define MAX_LINE 1000

//int myGetLine(char line[]);

void copy(char to[], char from[]);

int max; // max length of line

int main() {
	int len; // length of current line
//	int max;

	char line[MAX_LINE];
	char longest[MAX_LINE];

	// need to show extern variable
//	extern int max;

	max = 0;

	while ((len = myGetLine(line)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("%s", longest);
	}

	return 0;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
