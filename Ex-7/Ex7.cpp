#include <stdio.h>

int main(){
    unsigned int a, b, ucln; // Unsigned la gia tri chi duong, khong am.

    printf("Nhap vao phan so a/b: ");
    scanf("%d/%d", &a, &b);

    unsigned int tu = a;
    unsigned int mau = b;
    while (tu != mau)
    {
        if (tu > mau)
            tu = tu - mau;
        else
            mau = mau - tu;
    }
    
    ucln = tu;

    printf("Phan so chua rut gon la: %u/%u\n", a, b);
    printf("Phan so sau khi rut gon la: %u/%u", a/ucln, b/ucln);

    return 0;
}