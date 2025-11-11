#include <stdio.h>
#define PI 3.14
int main () { 
    float width,height;
    printf ( " nhap vao Chieu rong va chieu dai hinh chu nhat: " );
    scanf ( "%f%f", &width, &height );
    printf ( " Dien tich hinh chu nhat la: %.1f\n", width * height );
    printf(" Chu vi hinh chu nhat la: %.1f\n", (width + height) * 2);
    return 0;
} 