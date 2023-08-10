#include<stdio.h>
#include<conio.h>

main()

{
    int a,b,hasil,jumlah,kurang,kali,persen;
    float bagi;
	printf("Ketik dua bilangan bulat : 100 30 \n");
	printf("Formulasi kedua bilangan adalah :\n");
	a=100,b=30;
    jumlah=a+b;
    kurang=a-b;
    kali=a*b;
    bagi= float (a)/b;
    persen=a%b;
    printf("%d + %d = %i\n",a,b,jumlah);
    printf("%d - %d = %i\n",a,b,kurang);
    printf("%d * %d = %i\n",a,b,kali);
    printf("%d / %d = %f\n",a,b,bagi);
	printf("%d %% %d = %i\n",a,b,persen);
	 
    getch();

}

