#include <stdio.h>

int main()
{
    int A = 400000, B = 350000, diskonA, diskonB;
    printf ("Harga sepatu A adalah %d\n", A);
    printf ("Harga sepatu B adalah %d\n", B);
    diskonA = A * 13 / 100;
    diskonB = B * 21 / 100;
    printf ("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", A - diskonA);
    printf ("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", B - diskonB);

    return 0;
}
