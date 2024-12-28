#Test Case 1
Jari=float(input(" "));
Tinggi=float(input(" "));
phi=22/7;
rt=Jari+Tinggi;
Volume=phi*Jari*Jari*Tinggi;
Luas=2*phi*Jari*rt
Keliling=2*phi*Jari
print(f"Volume = {Volume:.2f}");
print(f"Luas = {Luas:.2f}");
print(f"Keliling = {Keliling:.2f}");
#Test case 2
Jari,Tinggi=map(float, input("").split());
rt=Jari+Tinggi;
Volume=phi*Jari*Jari*Tinggi;
Luas=2*phi*Jari*rt
Keliling=2*phi*Jari
print(f"Volume = {Volume:.2f}");
print(f"Luas = {Luas:.2f}");
print(f"Keliling = {Keliling:.2f}");