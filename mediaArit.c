#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Armazena os valores para x, x2, p1 e p2
    double x, x2;
    int p1, p2;
    double pot = pow(10,9);
    // Recebe o valor de x enquanto ele não atende ao requisito
    do {
        scanf("%lf\n", &x);
    } while ( 0 > x > pot);

    // Recebe o valor x2
    do {
        scanf("%lf", &x2);
    } while (0 > x2 > pot);

    // Recebe o valor de p1 e p2
    do {
        scanf("%d %d", &p1, &p2);
    } while ( 0 > p1 > 100 || 0 > p2 > 100 );

    // Calcula o valor de x1
    double x1 = (((p1 + p2) * x) - (x2 * p2)) / p1;

    //x = ((x1 * p1) + (x2 * p2)) / (p1 + p2);

    printf("%lf",x1);
   
    return 0;
}