#test case 1
import math;
A,B=map(float,input("").split());
Tinggi=A;
C=math.sqrt(B*B-A*A);
Alas=C;
Keliling=A+B+C;
Luas=Alas*Tinggi/2;
print(f"Alas = {Alas:.0f} cm");
print(f"Tinggi = {Tinggi:.0f} cm");
print(f"Keliling = {Keliling:.0f} cm");
print(f"Luas = {Luas:.0f} cm^2")
#Test case 2
A=float(input(""));
B=float(input(""));
Tinggi=A;
C=math.sqrt(B*B-A*A);
Alas=C;
Keliling=A+B+C;
Luas=Alas*Tinggi/2;
print(f"Alas = {Alas:.0f} cm");
print(f"Tinggi = {Tinggi:.0f} cm");
print(f"Keliling = {Keliling:.0f} cm");
print(f"Luas = {Luas:.0f} cm^2")