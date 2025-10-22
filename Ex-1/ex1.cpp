#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float cv, p, s;

    // Validation
    do
    {
        printf("Nhap vao canh a: ");
        scanf("%d", &a);
        printf("Nhap vao canh b: ");
        scanf("%d", &b);
        printf("Nhap vao canh c: ");
        scanf("%d", &c);
    } while (!(a + b > c) && (a + c > b) && (b + c > a)); // If statement is "correct" to "while", in this case, three sides DON'T form a triangle, loop again.
    
    
    cv = a + b + c ;
    printf("Chu vi hinh tam giac la: %.2f", cv);

    p = cv / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nDien tich hinh tam giac la: %.2f", s);

    return 0;
}
