#ifndef MAIN_H
#define MAIN_H

/* protocol for string concatenation */
char *_strcat(char *dest, char *src);

/* protocol for copying a string */
char *_strncpy(char *dest, char *src, int n);

/* protocol for comparing strings */
int _strcmp(char *s1, char *s2);

/* protocol to reversing array */
void reverse_array(int *a, int n);

/* protocol to change string to uppercase */
char *string_toupper(char *n);

#endif /* MAIN_H */
