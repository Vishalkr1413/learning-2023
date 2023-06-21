#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                largest = largest * 10 + (num / divisor) % 10;
            }
            divisor *= 10;
        }
        
        if (largest > num) {
            return largest;
        }
        
        largest = 0;
    }
    
    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int result = findLargestNumber(num);
    
    printf("Largest number by deleting a digit: %d\n", result);

    return 0;
}