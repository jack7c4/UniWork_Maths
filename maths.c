#include <stdio.h>

int maths_add(int a, int b) {

        return a + b;
}

int maths_subtract(int a, int b) {

        return a - b;
}

int maths_multiply(int a, int b) {

        return a * b;
}

int maths_divide(int a, int b) {

        return a / b;
}

int maths_mod(int a, int b) {

        return a % b;
}

int main() {

        printf("5 add 7:  %d\n", maths_add(5,7));
        printf("12 subtract 4:  %d\n", maths_subtract(12,4));
        printf("6 multiply 3:  %d\n", maths_multiply(6,3));
        printf("14 divide 6:  %d\n", maths_divide(14,6));
        printf("11 mod 24:  %d\n", maths_mod(11,24));

        int ns[5];
        printf("\nPlease enter five numbers:  ");
        scanf("%d %d %d %d %d", &ns[0], &ns[1], &ns[2], &ns[3], &ns[4]);
        printf("\nAverage of numbers is: %d\n", (ns[0] + ns[1] + ns[2] + ns[3] + ns[4])/5);
        return 0;
}
