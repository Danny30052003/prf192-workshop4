#include <stdio.h>
void fibo() {
    int t1 = 1, t2 = 1, f = 1, n, i;
    printf("Enter nth in fibonancy: ");
    scanf("%d", &n);
    for(i = 3; i <= n; i++) {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    printf("%dth Fibonancy = %d\n\n", n, f);
}

void dateValidation() {
    int d, m, y, maxd;
    printf("Input date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        //Month 1, 3, 5, 7, 8, 10, 12 have 31 days
        maxd = 31;
    } else if(m == 4 || m == 6 || m == 9 || m == 11) {
        //month 4, 6, 9, 11 have 30 days
        maxd = 30;
    } else if (m == 2) {
        if(y%4 == 0) {
        //leap year, feb have 29 days
            maxd = 29;
        } else {
            maxd = 28;
        }
    }
    if(y >= 0 && m >= 0 && m <= 12 && d > 0 && d <= maxd) {
        printf("%d/%d/%d is a valid date\n\n", d, m, y);
    } else {
        printf("%d/%d/%d is not a valid date\n\n", d, m, y);
    }
}

int main() {
    int n;
    printf("----- Menu -----\n");
    printf("1 - Fibonacci Sequence\n");
    printf("2 - Check a date\n");
    printf("3 - Quit\n");
    printf("----------------\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("\nYou have selected 1!\n");
        fibo();
        main();
        break;
    case 2:       
        printf("\nYou have selected 2!\n");
        dateValidation();
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