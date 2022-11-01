#include<stdio.h>
main(){
	
	int Matriks_A['m']['n'],Matriks_B['m']['n'],Matriks_C['m']['n'];
	int baris_A,kolom_A,baris_B,kolom_B,baris_C,kolom_C,x,y;
	
	printf("\n\t\t\t###PENJUMLAHAN DAN PENGURANGAN MATRIKS###\n");
	printf("\nMasukkan Ordo Matriks A (baris x kolom) = \n");
	printf("Baris : ");
	scanf("%i",&baris_A);
	printf("Kolom : ");
	scanf("%i",&kolom_A);
	printf("Masukkan elemen Matriks A : \n");
	for (x=0;x<=baris_A-1;x++){
		for (y=0;y<=kolom_A-1;y++){
		printf("Elemen Matriks A [%d,%d] = ", x+1,y+1);
		scanf("%d",&Matriks_A [x] [y]);
	}
	}
	
	printf("===========================================\n");
	printf("Masukkan Ordo Matriks B (baris x kolom) = \n");
	printf("Baris : ");
	scanf("%i",&baris_B);
	printf("Kolom : ");
	scanf("%i",&kolom_B);
	
	if(baris_A!=baris_B&&kolom_A!=kolom_B ||baris_A!=kolom_B&&kolom_A!=baris_B||baris_A==kolom_A&&kolom_B!=baris_B){
	printf("Ordo Kedua Matriks Harus Sama!\n\n");
	}
	else if(baris_A==baris_B&&kolom_A==kolom_B){
		printf("Masukkan elemen Matriks B : \n");
		for (x=0;x<=baris_B-1;x++){
			for (y=0;y<=kolom_B-1;y++){
			printf("Elemen Matriks B [%d,%d] = ", x+1,y+1);
			scanf("%d",&Matriks_B [x] [y]);
			}
		}
			printf("\n---------------------------------\n");
			printf("PENJUMLAHAN MATRIKS\n");
			printf("Matriks A + Matriks B = Matriks C\n");
		for (x=0;x<=baris_A-1;x++){
			for (y=0;y<=kolom_A-1;y++){
			Matriks_C [x] [y] = Matriks_A [x] [y] + Matriks_B [x] [y];
			printf("Elemen Matriks C [%d,%d] = %d\n", x+1,y+1,Matriks_C [x] [y]);
			}
		}
		printf("\n-----------------------------------------\n");
		printf("PENGURANGAN MATRIKS\n");
		printf("Matriks A - Matriks B = Matriks C\n");
		for (x=0;x<=baris_A-1;x++){
			for (y=0;y<=kolom_A-1;y++){
			Matriks_C [x] [y] = Matriks_A [x] [y] - Matriks_B [x] [y];
			printf("Elemen Matriks C [%d,%d] = %d\n", x+1,y+1,Matriks_C [x] [y]);
		}
	}
	}
	else{
		printf("Input Yang Anda Masukkan Salah ! ");
}
}