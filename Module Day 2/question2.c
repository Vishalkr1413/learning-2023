#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;
    unsigned char temp;
    
    for (size_t i = 0; i < size; i++) {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
}

int main() {
    int x = 5;
    int y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 3.14;
    double b = 2.71;
    printf("Before swap: a = %.2f, b = %.2f\n", a, b);
    swap(&a, &b, sizeof(double));
    printf("After swap: a = %.2f, b = %.2f\n", a, b);

    char c1 = 'A';
    char c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}