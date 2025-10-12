#include <stdio.h>

typedef struct BankAccountInfo {
    char bname[200];
    char cname[200];
    int accno;
    float bbalance;
} bank;

void bankinfo(bank customer[], int n);

int main() {
    int n;
    printf("ENTER NO OF CUSTOMERS: ");
    scanf("%d", &n);

    bank customer[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Customer %d ---\n", i + 1);

        printf("ENTER BANK NAME : ");
        scanf("%s", customer[i].bname);

        printf("ENTER CUSTOMER NAME : ");
        scanf("%s", customer[i].cname);

        printf("ENTER ACCOUNT NO : ");
        scanf("%d", &customer[i].accno);

        printf("ENTER BALANCE : ");
        scanf("%f", &customer[i].bbalance);
    }

    bankinfo(customer, n);
    return 0;
}

void bankinfo(bank customer[], int n) {
    printf("\n======= CUSTOMER DETAILS =======\n");
    for (int i = 0; i < n; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("BANK NAME     : %s\n", customer[i].bname);
        printf("CUSTOMER NAME : %s\n", customer[i].cname);
        printf("ACCOUNT NO    : %d\n", customer[i].accno);
        printf("BALANCE       : %.2f\n", customer[i].bbalance);
    }
    printf("================================\n");
}
