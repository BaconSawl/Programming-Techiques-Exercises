#include <stdio.h>
#include <math.h>

/*
    Bai toan nay khong khac gi voi: S = 1 + 2 + 3 + ... + n 
*/

int main(){
    float s, pi;
    int n,i;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    s = 0;
    for (i = 0; i <= n; i++){
        s = s + pow(-1,i)/(2*i + 1); // Theo de bai n(1) = 1, n(2) = -1/3, n(3) = 1/5..
                                    // Bai da cho cong thuc o giua, tang n roi cong vao tong EZ
    }
    pi = s * 4;

    printf("So gan dung pi la: %10.3f", pi);

    return 0;
}