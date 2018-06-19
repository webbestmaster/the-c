#include <stdio.h>

#define MAX_LINE 1000

int myGetLine(char line[]);

void copy(char to[], char from[]);

int main() {
	int len; // length of current line
	int max; // max length of line

	char line[MAX_LINE];
	char longest[MAX_LINE];

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

int myGetLine(char s[]) {
	int c, i;
	i = 0;

	while ((c = getchar()) != EOF && c != '\n') {
		s[i] = c;
		i++;
	}


/*
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
*/

	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
