// Using if-else
int find_biggest_if_else(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Using ternary operator
int find_biggest_ternary_operator(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}