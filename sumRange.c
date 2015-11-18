# include <stdio.h> /* This is needed for declaration of printf and fprintf*/
# include <stdlib.h> /* This is needed to get the declaration of atoi */

int sumRange(int start, int end) {
    int i;
    int sum;

    sum = 0;
    for (i = start; i < end; i++) {
        sum += i;
    }
    return sum;
}

int main(int argc, char **argv) {
    int start; 
    int end;

    if (argc != 3) {
        fprintf(stderr,"Usage: %s\n start end", argv[0]);
        return 1;
    }

    /* Convert start and end positions from strings to ints  */
    start = atoi(argv[1]);
    end = atoi(argv[2]);
    
    /* Call sumRange and print the result  */
    printf("sumRange(%d, %d) = %d\n", start, end, sumRange(start,end));
    return 0;
}
