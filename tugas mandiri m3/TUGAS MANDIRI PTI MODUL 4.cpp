#include<stdio.h>
int main(void){
	char nama[13],nim[11],kelas[13],jurusan[18],asal[8];
	printf("======================================== \n");
	printf("Menampilkan biodata mahasiswa\n");
	printf("======================================== \n");
	printf("NAMA MAHASISWA		:");
	gets(nama);
	printf("NIM			:");
	gets(nim);
	printf("KELAS			:");
	gets(kelas);
	printf("JURUSAN			:");
	gets(jurusan);
	printf("ASAL			:");
	gets(asal);
	printf("======================================== \n");
	printf("\n");
	printf("======================================== \n");
	
	printf("#DATA MAHASISWA#\n");
	printf("======================================== \n");
	printf("NAMA MAHASISWA		: %s\n",nama);
	printf("NIM MAHASISWA		: %s\n",nim);
	printf("KELAS MAHASISWA		: %s\n",kelas);
	printf("JURUSAN MAHASISWA	: %s\n",jurusan);
	printf("ASAL MAHASISWA		: %s\n",asal);
	printf("======================================== \n");
	
	return 0;
}
