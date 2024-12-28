#include <stdio.h>
int main (){
    //Test Case 1
    double a, b, ab, i, j, ij, xy, x, y, Hasil;
    scanf("%lf %lf %lf %lf %lf %lf",&a, &b, &i, &j, &x, &y);
    ab=a-b;
    ij=i/j;
    xy=x+y;
    Hasil=ab*ij-xy;
    printf("%.3f\n",Hasil);
    //Test Case 2
    double ax, bx, abx, ix, jx, ijx, xyx, xx, yx, Hasilx;
    scanf("%lf %lf", &ax, &bx);
    scanf("%lf %lf ", &ix, &jx);
    scanf("%lf %lf", &xx, &yx);
    abx=ax-bx;
    ijx=ix/jx;
    xyx=xx+yx;
    Hasilx=abx*ijx-xyx;
    printf("%.3f\n",Hasilx);
    return 0;
}