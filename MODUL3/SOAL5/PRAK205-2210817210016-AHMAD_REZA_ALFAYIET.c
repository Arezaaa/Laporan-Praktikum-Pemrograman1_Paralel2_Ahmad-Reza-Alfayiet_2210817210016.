#include <stdio.h>
#include <math.h>

int main()
{
    float alas, tinggi, luas, A, B, keliling;

    scanf ("%f %f", &A, &B);

    alas = sqrt(pow(B,2) - pow(A,2));
    tinggi = A;
    keliling = A + B + alas;
    luas = (alas * tinggi) / 2;

    printf ("Alas = %.f cm\n", alas);
    printf ("Tinggi = %.f cm\n", tinggi);
    printf ("Keliling = %.f cm\n", keliling);
    printf ("Luas = %.f cm^2\n", luas);

    return 0;
}
