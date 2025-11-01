#include <stdio.h>

int main(){
    int n, i, j, kt;

    printf("Nhap vao so n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to tu 1 den %d la: \n", n);
    for (i = 2; i <= n; i++){ // Lap den khi i <= n.
        kt = 0;
        for (j = 2; j < i; j++){
            if (i%j == 0){  // Neu chia het
                kt = 1;  // => khong la so nguyen to
                break; // thoat vong lap for (j = 2....); Vong lap for (i = 2...) se lap tiep cho den khi i <= n.
            }
        }
        if (kt == 0){ // Neu kt = 0, tuc la so nguyen to, in ra man hinh.
        printf("%d\t", i);
    }
    }
    return 0;
}