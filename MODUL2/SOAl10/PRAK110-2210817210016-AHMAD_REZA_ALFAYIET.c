#include <stdio.h>
#include <math.h>

int main()
{
    float alas = 5, tinggi = 12, B;
    printf ("Alas     = %.f cm\n", alas);
    printf ("Tinggi   = %.f cm\n", tinggi);

    B = sqrt((pow(alas,2) + pow(tinggi,2)));
    printf ("Sisi A   = %.f cm\n", tinggi);
    printf ("Sisi B   = %.f cm\n", B);
    printf ("Sisi C   = %.f cm\n", alas);
    printf ("Keliling = %.f cm\n", alas + tinggi + B);
    printf ("Luas     = %.f cm^2\n", (alas * tinggi) / 2);
}
