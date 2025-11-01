#include <stdio.h>
#include <math.h>

/*
    Bai toan su dung cong thuc Taylor cua sin(x).
    1. Bat dau voi tg = x
    2. Cong vao tong s
    3. Tinh so tiep theo theo cong thuc tg
    4. Lap cho den khi tg rat nho ( tg < 10^4 )
*/

int main(){
    double x, s, tg, epsilon = 0.0001;  // Do chinh xac bai cho la 10^4
    int n = 1; // Thu tu so hang trong chuoi, chay tu so dau tien

    printf("Nhap vao x: ");
    scanf("%lf", &x);

    s = 0; // Tong
    tg = 1; // tg la so hang hien tai trong chuoi, giong nhu i

    while (fabs(tg) >= epsilon) // Fabs dung de tra ve gia tri tuyet doi cua double
    {
        s = s + tg;
        tg = -tg * x * x / ((2 * n) * (2 * n + 1)); 
        n += 1;
    }
    

    printf("Ket qua khi tinh bang ham Sin(x): %10.4lf\n", sin(x));
    printf("Ket qua khi tinh bang cong thuc gan dung: %10.4lf", s);

    return 0;
}