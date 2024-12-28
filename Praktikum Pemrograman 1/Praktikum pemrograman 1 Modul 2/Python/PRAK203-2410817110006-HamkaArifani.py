#Test Case 1
a,b,i,j,x,y=map(float,input("").split());
ab=a-b;
ij=i/j;
xy=x+y;
Hasil=ab*ij-xy;
print (f"{Hasil:.3f}");
#Test Case 2
ax,bx=map(float,input("").split());
ix,jx=map(float,input("").split());
xx,yx=map(float,input("").split());
abx=ax-bx;
ijx=ix/jx;
xyx=xx+yx;
Hasilx=abx*ijx-xyx;
print (f"{Hasilx:.3f}");