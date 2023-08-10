#include <stdio.h>
int main(){
 int a, b, c, d, hasil1a, hasil1b, hasil2a, hasil2b, des1, des2;
 
 printf ("Membandingkan Dua Buah Bilangan Pecahan Jika diBagi\n\n");
 printf ("Masukan nilai pecahan ke-1 (contoh 1/2) = ");
 scanf ("%d/%d",&a,&b);
 printf ("Masukan nilai pecahan ke-2 (contoh 1/2) = ");
 scanf ("%d/%d",&c,&d);
 
 hasil1a = a * d;
 hasil1b = b * c;
 hasil2a = c * b;
 hasil2b = d * a;
 
 des1 = hasil1a / hasil1b;
 des2 = hasil2a / hasil2b;
 
 
 if (des1 < des2)
 {
  printf ("hasil bagi pecahan ke-1 %d/%d < hasil bagi pecahan ke-2 %d/%d ",hasil1a,hasil1b,hasil2a,hasil2b);
 }
 else
  if (des2 < des1)
  {
   printf ("hasil bagi pecahan ke-1 %d/%d > hasil bagi pecahan ke-2 %d/%d ",hasil1a,hasil1b,hasil2a,hasil2b);
  }
  else   
   if (des1 == des2)
   {
    printf ("hasil bagi pecahan ke-1 %d/%d = hasil bagi pecahan ke-2 %d/%d ",hasil1a,hasil1b,hasil2a,hasil2b);
   } 

	return 0;
}
