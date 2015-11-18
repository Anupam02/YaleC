#include <stdio.h>
#include <ctype.h>

#define EXPRESSION_ERROR (-1)

int peekchar(void) {
    int c;
    c = getchar();
    if (c != EOF) ungetc(c, stdin);

    return c;
}


int readNumber(void) {
  int accumulator;        /* the number so far */
  int c;                  /* next character */

  accumulator = 0;

  while ((c = peekchar()) != EOF && isdigit(c)) {
    c = getchar();                     /* consume it */
    accumulator *= 10;                 /* shift previous digits over */
    accumulator += (c - '0');          /* add decimal value of new digit */
  }

  return accumulator;
}

/*  read on expression from stdin and return its value */
/*  returns EXPRESSION_ERROR on error */

int readExpression(void) {
    int e1;         /* value of first sub-expression */
    int e2;         /* value of second sub-expression */
    int c;
    int op;         /* operation '+' or '*' */

    c = peekchar();
    if (c == '(') {
        c = getchar();

        e1 = readExpression();
        op = getchar();
        e2 = readExpression();

        c = getchar();  /* this had better be ')' */
        if (c != ')') return EXPRESSION_ERROR;

        /* else */
        switch(op) {
            case '*':
                return e1*e2;
                break;
            case '+':
                return e1+e2;
                break;
            default:
                return EXPRESSION_ERROR;
                break;
        }
    } else if (isdigit(c)) {
        return readNumber();
    } else {
        return EXPRESSION_ERROR;
    }
}

int main()
{
    int ans = readExpression();
    printf("%d\n",ans);
    return 0;
}
