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
