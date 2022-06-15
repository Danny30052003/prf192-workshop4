#include <stdio.h>
void prime() {
    int n, i, count;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n/2; i++) {
       if(n%i == 0) {
           count++;
       }
    }
    if(count == 2) printf("%d is a Prime\n\n", n);
    else printf("%d is not a Prime\n\n", n);
}

void findMaxMin() {
    int remainder, min, max, n;
    printf("Enter digit: ");
    scanf("%d", &n);
    remainder = n % 10;
    n = n / 10;
    min = max = remainder;
    while(n>0) {
        remainder = n % 10;
        n = n / 10;
        if(min > remainder) min = remainder;
        if(max < remainder) max = remainder;
    }
    printf("Lowest Number = %d, Highest Number = %d\n\n", min, max);
}

int main() {
    int n;
    printf("----- Menu -----\n");
    printf("1 - Process primes\n");
    printf("2 - Print min, max digit in an integer\n");
    printf("3 - Quit\n");
    printf("----------------\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("\nYou have selected 1!\n");
        prime();
        main();
        break;
    case 2:
        printf("\nYou have selected 2!\n");
        findMaxMin();
        main();
        break;
    case 3:
        printf("You have quitted the program!\n\n");
        break;
    default:
        printf("\n%d is not an option! Please try again\n\n", n);
        main();
        break;
    }
}