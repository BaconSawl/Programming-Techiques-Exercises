#include <stdio.h>
#include <math.h>

int main(){
    int n = 1;
    double x, s, tg, epsilon = 0.0001;

    printf("Nhap vao x: ");
    scanf("%lf", &x);

    s = 0; // Tong
    tg = 1; // tg la so hang hien tai trong chuoi, giong nhu i

    while (fabs(tg) >= epsilon) // Fabs dung de tra ve gia tri tuyet doi cua double
    {
        s = s + tg;
        tg = -tg * x * x / ((2 * n) * (2 * n - 1)); 
        n += 1;
    }
    

    printf("Ket qua khi tinh bang ham Sin(x): %10.4lf\n", cos(x));
    printf("Ket qua khi tinh bang cong thuc gan dung: %10.4lf", s);

    return 0;
}