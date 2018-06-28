#import <stdio.h>

#define MAX_LINE 1000 // max length of line

int getLine(char line[], int max);

int strIndex(char source[], char searchFor[]);

char patter[] = "ould"; // patter for search

int main() {
	char line[MAX_LINE];
	int found = 0;

	while (getLine(line, MAX_LINE) > 0) {
		if (strIndex(line, patter) >= 0) {
			printf("%s", line);
			found += 1;
		}
	}

	return found;
}


int getLine(char s[], int lim) {
	int c, i;

	i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}

	if (c == '\n') {
		s[i++] = c;
	}

	s[i] = '\0';

	return i;
}

int strIndex(char s[], char t[]) {
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return  i;
	}
	return  -1;
}


