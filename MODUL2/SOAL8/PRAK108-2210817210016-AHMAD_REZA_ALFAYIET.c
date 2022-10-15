#include <stdio.h>

int main()
{
    float Jarak = 14, Keliling = 5,Keliling_asli, Jari;

    printf ("Diketahui : \n");
    printf ("Pak Dengklek mengelilingi taman = %.f Putaran \n", Keliling);
    printf ("Jarak tempuh Pak Dengklek = %.f Kilometer \n\n", Jarak);
    Keliling_asli = Jarak / Keliling;
    Jari = Keliling_asli / (2 * 3.14);

    printf ("Jawaban : \n");
    printf ("Jari-jari taman yang dikelilingi Pak Dengkles adalah %.2f Kilometer \n", Jari);

    return 0;
}
