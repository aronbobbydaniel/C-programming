#include <stdio.h>

struct polynomial {
    int coeff;
    int expo;
};

int main() {
    struct polynomial poly1[10], poly2[10], result[20];
    int n1, n2, k = 0, i = 0, j = 0;

    printf("Enter the degree of polynomial 1: ");
    scanf("%d", &n1);

    printf("Enter the terms of polynomial 1 in descending order of exponent:\n");
    for (i = 0; i < n1; i++) {
        printf("Enter coefficient and exponent of term %d: ", i + 1);
        scanf("%d %d", &poly1[i].coeff, &poly1[i].expo);
    }

    printf("Enter the degree of polynomial 2: ");
    scanf("%d", &n2);

    printf("Enter the terms of polynomial 2 in descending order of exponent:\n");
    for (j = 0; j < n2; j++) {
        printf("Enter coefficient and exponent of term %d: ", j + 1);
        scanf("%d %d", &poly2[j].coeff, &poly2[j].expo);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2) {
        if (poly1[i].expo == poly2[j].expo) {
            int sum_coeff = poly1[i].coeff + poly2[j].coeff;
            if (sum_coeff != 0) {  
                result[k].expo = poly1[i].expo;
                k++;
            }
            i++;
            j++;
        } else if (poly1[i].expo > poly2[j].expo) {
            result[k++] = poly1[i++];
        } else {
            result[k++] = poly2[j++];
        }
    }

    
    while (i < n1) {
        result[k++] = poly1[i++];
    }
    while (j < n2) {
        result[k++] = poly2[j++];
    }

  for (i = 0; i < k; i++) {
    printf("%d x^%d", result[i].coeff, result[i].expo);
    if (i != k - 1) {
        printf(" + ");
    }
}
 printf("\n");

    return 0;
}

