//thu vien xu li thong tin hoc vien
#include <stdio.h>
#include "Date.h" //lay ngay thang nam sinh trong thu vien Date.h
#include "printLine.h" // ham draw trang tri


//khai bao kieu du lieu mo rong thongtinhocvien
typedef struct thongtinhocvien {
	int id;
	int mahv;
	char  hoten[50];
	char gioitinh[10];
	Date ngaysinh;
	char quequan[20];
	char lop[10];
	// khai bao kieu du lieu mo rong cacmonhoc
	struct cacmonhoc{
		char tenmon[30];
		char mamon[20];
		int sobuoi;
	}monhoc;
	//
	struct quanlihoctap{
		int sobuoidi;
		int diemdk;
		int diemthi;
		float dtb;
		char xeploai[40];
	}hoctap;
	
}hv;


//tao cac ham
void inputThongtinhocvien(hv *a);
void inputdsThongtinhocvien(hv *a,int n);

//laysoluonghocvien
int checkSoluong();
//

void outputdsThongtinhocvien(hv *a, int n);
void outputThongtinhocvien(hv a);



void inputCacmonhoc(hv *a);//nhap vao thong tin monhoc
void inputdsCacmonhoc(hv *a,int n);//tim kiem mahv neu trung voi mahv trong mang thongtinhocvien thi chay inputCacmonhoc

void outputCacmonhoc(hv a); 
void outputdsCacmonhoc(hv *a,int n);


//input
void inputQuanlihoctap(hv *a);
void inputdsQuanlihoctap(hv *a , int n);
//output
void outputQuanlihoctap(hv a);
void outputdsQuanlihoctap(hv *a,int n);
//tinh diem tb
void tinhDTB(hv *a);
//tinh xep hang
void xepHang(hv *a);



//ghi file
void ghifile(hv a[], int n, char fileName[]);
//docfile
int docfile(hv a[], char fileName[]);

void sapxepTheoDTB(hv a[], int n);
void sapXepTheoTen(hv a[], int n);

int xoaTheoMahv(hv a[], int mahv, int n);

//timkiem
void timkiemHV(hv a[], int n);

