#include <stdio.h>

int maths_add(int a, int b) {

        return a + b;
}

int maths_subtract(int a, int b) {

        return a - b;
}

int main() {

        printf("5 add 7:  %d\n", maths_add(5,7));
        printf("12 subtract 4:  %d\n", maths_subtract(12,4));
        //printf("6 multiply 3:  %d\n", maths_multiply(6,3));
        //printf("14 divide 6:  %d\n", maths_divide(14,6));
        return 0;
}
