#ifndef _HOME_ANUPAM_YALE_EXAMPLES_MYSTRING_MYSTRING_H_
#define _HOME_ANUPAM_YALE_EXAMPLES_MYSTRING_MYSTRING_H_
/* make a struct string * that holds a copy of s */
/* returns 0 if malloc fails */
struct string *makeString(const char *s);

/* destroy a struct string * */
void destroyString(struct string *);

/* return the length of a struct string * */
int stringLength(struct string *);

/* return the character at position index in the struct string * */
/* or retuns -1 if index is out of bonds */
int stringCharAt(struct string *s, int index);

#endif  // _HOME_ANUPAM_YALE_EXAMPLES_MYSTRING_MYSTRING_H_
