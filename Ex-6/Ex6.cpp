#include <stdio.h>
#include <math.h>

int main(){
    double x, s, tg, epsilon = 0.0001;
    int n = 1; // Bien n dem thu tu so hang.

    printf("Nhap vao so x : ");
    scanf("%lf", &x);

    s = 0;
    tg = 1; // So hang hien tai trong chuoi. => t(0) = 1, tuong ung x^0 / 0!

    while (fabs(tg) > epsilon){
        s += tg;
        tg = tg * x/n; // Tinh so hang tiep theo theo cong thuc de quy.
        n += 1;
    }

    printf("Ket qua e mu x theo ham la: %10.4lf\n", exp(x));
    printf("Ket qua theo cong thuc gan dung la: %10.4lf", s);

    return 0;
}