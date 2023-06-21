#include <stdio.h>

void findSmallestAndLargestDigits(int numbers[], int n) {
    int smallestDigit = 9;
    int largestDigit = 0;
    
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        while (num > 0) {
            int digit = num % 10;
            
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            
            num /= 10;
        }
    }
    
    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    findSmallestAndLargestDigits(numbers, n);

    return 0;
}