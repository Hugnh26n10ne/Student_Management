#include<stdio.h>
#include "Date.h" //lay thu vien tu tao .h


//lay ham tu thu vien
void nhapNgaysinh(Date *d){
	printf("Nhap ngay thang nam: ");
	scanf("%d%d%d",&d->ngay,&d->thang,&d->nam);
}

