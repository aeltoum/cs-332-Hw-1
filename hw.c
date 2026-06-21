#include <stdio.h>

int sumOfDigits(int n) {
    if (n <= 0) {
        return -1;
    }

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int UABMaxMinDiff(int arr[], int len) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return max - min;
}

void replaceEvenWithZero(int arr[], int len, int result[]) {
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            result[i] = 0;
        }
        else result[i] = arr[i];
    }
}

int perfectSquare(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }

    int i;
    for (i = 0; i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

    int countVowels(char input[]) {
        int i, count = 0;
        for (i = 0; input[i] != '\0'; i++){
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || 
            input[i]== 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
                count++;
            }
        }
        return count;
    }


void printArray(int arr[], int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i < len - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    printf("sumOfDigits\n");
    printf("n=123  : %d\n", sumOfDigits(123));
    printf("n=405  : %d\n", sumOfDigits(405));
    printf("n=0    : %d\n", sumOfDigits(0));
    printf("n=7    : %d\n", sumOfDigits(7));
    printf("n=-308 : %d\n", sumOfDigits(-308));

    printf("\nUABMaxMinDiff\n");
    int a1[] = {3, 7, 2, 9};
    int a2[] = {5, 5, 5, 5, 5, 5};
    int a3[] = {-2, 4, -1, 6, 5};
    printf("[3,7,2,9]      -> %d\n", UABMaxMinDiff(a1, 4));
    printf("[5,5,5,5,5,5]  -> %d\n", UABMaxMinDiff(a2, 6));
    printf("[-2,4,-1,6,5]  -> %d\n", UABMaxMinDiff(a3, 5));

    printf("\nreplaceEvenWithZero\n");
    int b1[] = {1, 2, 3, 4};
    int b2[] = {2, 4, 6};
    int b3[] = {1, 3, 5};
    int result[6];
    replaceEvenWithZero(b1, 4, result);
    printf("[1,2,3,4] : "); printArray(result, 4);
    replaceEvenWithZero(b2, 3, result);
    printf("[2,4,6] : "); printArray(result, 3);
    replaceEvenWithZero(b3, 3, result);
    printf("[1,3,5] : "); printArray(result, 3);

    printf("\n=== perfectSquare ===\n");
    printf("n=16 -> %s\n", perfectSquare(16) ? "True" : "False");
    printf("n=15 -> %s\n", perfectSquare(15) ? "True" : "False");
    printf("n=25 -> %s\n", perfectSquare(25) ? "True" : "False");
    printf("n=36 -> %s\n", perfectSquare(36) ? "True" : "False");

    printf("\n=== countVowels ===\n");
    printf("\"Hello World\" -> %d\n", countVowels("Hello World"));
    printf("\"UAB CS\"      -> %d\n", countVowels("UAB CS"));
    printf("\"Python\"      -> %d\n", countVowels("Python"));
    printf("\"aeiou\"       -> %d\n", countVowels("aeiou"));

    return 0;
}