#include <stdio.h>

typedef float realnumber;
typedef int integer;

int main() {

    integer x = 5;
    realnumber y = 3.141592;

    printf("x = %d\n", x);
    printf("y = %.6f\n", y);

    return 0;
}
