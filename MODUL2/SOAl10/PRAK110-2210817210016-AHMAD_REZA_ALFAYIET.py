import math

alas = 5; tinggi = 12
print ("Alas     =", alas, "cm")
print ("Tinggi   =", tinggi, "cm")

B = math.sqrt((pow(alas,2) + pow(tinggi,2)))
print ("Sisi A   =", tinggi, "cm")
print ("Sisi B   =", round(B), "cm")
print ("Sisi C   =", alas, "cm")
print ("Keliling =", round(alas + tinggi + B), "cm")
print ("Luas     =", round((alas * tinggi) / 2), "cm\u00B2")