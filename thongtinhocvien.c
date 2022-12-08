#include<stdio.h>
#include<string.h>
#include "thongtinhocvien.h"
#include "printLine.h"



int soLuonghv=0;
int checkSoluong(){
	int slhv=0;
	slhv = soLuonghv;
	return slhv; 
}

///

//////////////////////////////
//Nhap thong tin hoc vien/////
//////////////////////////////
void inputdsThongtinhocvien(hv *a,int n)
{
	int i=n, choice=1;
	int soluonghv=0;
	// vòng lap vo han cho den khi muon dung
	while(1)
	{	
		a[i].id = i+1;
		printf("Hoc vien thu: %d\n",i+1);
		inputThongtinhocvien(&a[i]);	
		tinhDTB(&a[i]);
		xepHang(&a[i]);
		i++;
		printf("\n");
		printLine(50);
		printf("\nContinue? Press:1 Stop? Press:0");
		printf("\n");printLine(50);
		printf("\n");
		scanf("%d",&choice);
		printf("\n");printLine(50);printf("\n");
		if(choice==0)
		{
			soluonghv=i;
			soLuonghv=i;
			return soLuonghv;
			break;
		}
	}
}

void inputThongtinhocvien(hv *a){
	
		
		printf("Nhap ma hoc vien: ");scanf("%d",&a->mahv);
		fflush(stdin);
		printf("Nhap ho va ten: ");gets(a->hoten);
		printf("Nhap gioi tinh: ");gets(a->gioitinh);
		nhapNgaysinh(&a->ngaysinh);
		fflush(stdin);
		printf("Nhap que quan: ");gets(a->quequan);
		printf("Nhap lop: ");gets(a->lop);	
}

void outputThongtinhocvien(hv a)
{
		
		printf("\n%-5d%-15d%-30s%-15s%-d/%-d/%-10d%-20s%-15s",a.id,a.mahv,a.hoten,a.gioitinh,a.ngaysinh.ngay,a.ngaysinh.thang,a.ngaysinh.nam,a.quequan,a.lop);			
}
void outputdsThongtinhocvien(hv *a,int n)
{
	int i;
		printf("\n%-5s%-15s%-30s%-15s%-15s%-20s%-15s","ID","Ma hoc vien","Ho va ten","Gioi tinh","Ngay sinh","Que quan","Lop");
		for(i=0;i<n;i++)
		{
			outputThongtinhocvien(a[i]);
		}	
}


//////////////////////////////
///Nhap thong tin cac mon hoc/
//////////////////////////////


///////
// lay gia tri so buoi gan vao bien toan cuc
//

///////////////

void inputCacmonhoc(hv *a)
{
	printf("\nNhap ten mon: ");fflush(stdin);gets(a->monhoc.tenmon);
	printf("\nNhap ma mon: ");gets(a->monhoc.mamon);
	printf("\nNhap so buoi: ");scanf("%d",&a->monhoc.sobuoi);
}
void inputdsCacmonhoc(hv *a,int n)
{
	int i,choice=1;
	int mahocvien;
	while(1)
	{
		int flag=0;
		check:
		printf("\nNhap thong tin ma hoc vien ban muon them cac mon hoc: ");
		scanf("%d",&mahocvien);
		for(i=0;i<n;i++)
		{
			if(mahocvien==(*(a+i)).mahv)
			{
				
				inputCacmonhoc(&a[i]);
				tinhDTB(&a[i]);
				xepHang(&a[i]);
				flag=1;
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					goto out;
					break;
				}
			}
		}
		if(flag==0){
				printf("\nKhong the tim thay ma sinh vien nay!");
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					out:
					break;
				}
				goto check;
				}
	}
}
void outputCacmonhoc(hv a)
{
	printf("\n%-5d%-15d%-30s%-15s%-15d",a.id,a.mahv,a.monhoc.tenmon,a.monhoc.mamon,a.monhoc.sobuoi);	
}
void outputdsCacmonhoc(hv *a,int n)
{
	int i;
	printf("\n%-5s%-15s%-30s%-15s%-15s","ID","Ma hoc vien","Ten mon","Ma mon","So buoi");
	for(i=0;i<n;i++)
	{
		outputCacmonhoc(a[i]);
	}	
}


///////////////////////////////////////
//Nhap thong tin quan li hoc tap///////
///////////////////////////////////////

void inputQuanlihoctap(hv *a)
{
	printf("\nNhap so buoi di: ");scanf("%d",&a->hoctap.sobuoidi);
	printf("\nNhap diem dieu kien: ");scanf("%d",&a->hoctap.diemdk);
	printf("\nNghi qua 20 phan so buoi thi diem thi = 0 !!!");
	printf("\nNhap diem thi: ");scanf("%d",&a->hoctap.diemthi);
}
void inputdsQuanlihoctap(hv *a,int n)
{
	int i,choice=1;
	int mahocvien;
	while(1)
	{
		int flag=0;
		check:
		printf("\nNhap thong tin ma hoc vien ban muon them cac mon hoc: ");
		scanf("%d",&mahocvien);
		for(i=0;i<n;i++)
		{
			if(mahocvien==(*(a+i)).mahv)
			{
				
				inputQuanlihoctap(&a[i]);
				tinhDTB(&a[i]);
				xepHang(&a[i]);
				flag=1;
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					goto out;
					break;
				}
			}
		}
		if(flag==0){
				printf("\nKhong the tim thay ma sinh vien nay!");
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					out:
					break;
				}
				goto check;
				}
	}
}


//tinh diem tb
void tinhDTB(hv *a )
{
	a->hoctap.dtb=(( (a->hoctap.diemthi*a->hoctap.sobuoidi)-(a->hoctap.diemthi*(a->monhoc.sobuoi-a->hoctap.sobuoidi))) /100);
	
}

void xepHang(hv *a)
{

		if(a->hoctap.dtb>9 &&(a->monhoc.sobuoi-a->hoctap.sobuoidi)<(0.2*a->monhoc.sobuoi) )
		{
			strcpy(a->hoctap.xeploai,"Xuat sac");
		}
		else if( a->hoctap.dtb>8.5 &&(a->monhoc.sobuoi-a->hoctap.sobuoidi)<(0.2*a->monhoc.sobuoi) )
		{
			strcpy(a->hoctap.xeploai,"Gioi");
		}
		else if(a->hoctap.dtb>7.5 &&(a->monhoc.sobuoi-a->hoctap.sobuoidi)<(0.2*a->monhoc.sobuoi) )
		{
			strcpy(a->hoctap.xeploai,"Kha");
		}
		else if(a->hoctap.dtb>6 &&(a->monhoc.sobuoi-a->hoctap.sobuoidi)<(0.2*a->monhoc.sobuoi) )
		{
			strcpy(a->hoctap.xeploai,"Trung binh");
		}else if((a->monhoc.sobuoi-a->hoctap.sobuoidi)>=(0.2*a->monhoc.sobuoi) ){
		
			strcpy(a->hoctap.xeploai,"Yeu(nghi nh)");
		}else{
			strcpy(a->hoctap.xeploai,"Yeu");
		}
	
}





void outputQuanlihoctap(hv a){
	if((a.monhoc.sobuoi-a.hoctap.sobuoidi)>=(0.2*a.monhoc.sobuoi))
	{
		a.hoctap.diemthi=0;
	}
	
		printf("\n%-5d%-15d%5d/%-10d%-15d%-15d%-15.2f%-15s",a.id,a.mahv,a.hoctap.sobuoidi,a.monhoc.sobuoi,a.hoctap.diemdk,a.hoctap.diemthi,a.hoctap.dtb,a.hoctap.xeploai);	
}
void outputdsQuanlihoctap(hv *a,int n)
{
	int i;
	
		printf("\n%-5s%-15s%-15s%-15s%-15s%-15s%-15s","ID","Ma hoc vien","So buoi di","Diem DK","Diem thi","Diem TB","Xep Loai");
	for(i=0;i<n;i++)
	{
		outputQuanlihoctap(a[i]);	
	}	
}
//ghi thong tin ra file
void ghifile(hv a[], int n, char fileName[])
{
	int i;
	FILE *fout;
	fflush(stdin);
	fout = fopen(fileName,"w");
	for (i=0;i<n;i++)
	{	
		fprintf(fout,"%-5d%-15d%-30s%-15s%-3d%-3d%-6d%-20s%-15s%-30s%-15s%-15d%-5d%-15d%-15d%-15.2f%-15s\n",a[i].id,a[i].mahv,a[i].hoten,a[i].gioitinh,a[i].ngaysinh.ngay,a[i].ngaysinh.thang,a[i].ngaysinh.nam,a[i].quequan,a[i].lop,a[i].monhoc.tenmon,a[i].monhoc.mamon,a[i].monhoc.sobuoi,a[i].hoctap.sobuoidi,a[i].hoctap.diemdk,a[i].hoctap.diemthi,a[i].hoctap.dtb,a[i].hoctap.xeploai);
	}
	fclose(fout);
}

//doc file tu fileName
int  docfile(hv a[], char fileName[])
{
	int i=0;
	hv temp;
	FILE*fin;
	fflush(stdin);
	fin=fopen(fileName,"r");
	
	printf("Chuan bi doc file: ");puts(fileName);
	//doc thong tin		
	while (fscanf(fin,"%5d%15d%[^\n]30s%[^\n]15s%3d%3d%6d%[^\n]20s%[^\n]15s%[^\n]30s%[^\n]15s%15d%5d%15d%15d%15.2f%[^\n]15s",&a[i].id,&a[i].mahv,a[i].hoten,a[i].gioitinh,&a[i].ngaysinh.ngay,&a[i].ngaysinh.thang,&a[i].ngaysinh.nam,a[i].quequan,a[i].lop,a[i].monhoc.tenmon,a[i].monhoc.mamon,a[i].monhoc.sobuoi,a[i].hoctap.sobuoidi,a[i].hoctap.diemdk,a[i].hoctap.diemthi,a[i].hoctap.dtb,a[i].hoctap.xeploai) != EOF) 
	{
		printf ("\nDoc ban ghi thu: %d",i);
	   	i++;
		
    }	
	printf("\nDoc du lieu thanh cong...");
	printf("\nSo luong hoc vien co san trong file la: %d",i );
	fclose(fin);
	// tra ve so luong hoc vien duoc doc tu file
    return i;
	
}

//int idLonNhat (hv a[], int n) {
//    int idMax = 0,i;
//    if (n > 0) {
//        idMax = a[0].id;
//        for(i = 0;i < n; i++) {
//            if (a[i].id > idMax) {
//                idMax = a[i].id;
//            }
//        }
//    }
//    return idMax;
//}


//
void timKiemTheoTen(hv a[], char ten[], int n) {
    hv arrayFound[100];
    char tenHV[30];
    int found = 0;
    int i;
    for( i = 0; i < n; i++) {
        strcpy(tenHV, a[i].hoten);
        if(strstr(strupr(tenHV), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    printf("\n%-5s%-15s%-30s%-15s%-15s%-15s%-15s%-15s","ID","Ma hoc vien","Ho va ten","So buoi di","Diem DK","Diem thi","Diem TB","Xep Loai");
	printf("\n%-5d%-15d%-30s%5d/%-10d%-15d%-15d%-15.2f%-15s",a[found].id,a[found].mahv,a[found].hoten,a[found].hoctap.sobuoidi,a[found].monhoc.sobuoi,a[found].hoctap.diemdk,a[found].hoctap.diemthi,a[found].hoctap.dtb,a[found].hoctap.xeploai);
				
}
//
void sapxepTheoDTB(hv a[], int n) {
    //Sap xep theo DTB tang dan
    hv tmp;
    int i,j;
    for(i = 0;i < n;i++) {
        for( j = i+1; j < n;j++) {
            if(a[i].hoctap.dtb > a[j].hoctap.dtb) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
//
void sapXepTheoTen(hv a[], int n) {
    //Sap xep sinh vien theo ten theo thu tu tang dan
    hv tmp;
    int i,j;
    char tenHV1[30];
    char tenHV2[30];
    for(i = 0;i < n; i++) {
    	strcpy(tenHV1, a[i].hoten);
        for(j = i+1; j < n; j++) {
        	strcpy(tenHV2, a[j].hoten);
            if(strcmp(strupr(tenHV1), strupr(tenHV2)) > 0) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}


//xoa thong tin
int xoaTheoMahv(hv a[], int mahv, int n) {
    int found = 0;
    int i,j;
    for(i = 0; i < n; i++) {
        if (a[i].mahv == mahv) {
            found = 1;
            printLine(40);
            for ( j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            printf( "\nDa xoa SV co ID = %d\n",mahv );
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", mahv);
        return 0;
    } else {
        return 1;
    }
}




// tim kiem hoc vien
void timkiemHV(hv a[], int n)
{
	int i=0,mahocvien,choice=1,flag=1;
	while(1)
	{
		check:
		printf("\nNhap thong tin ma hoc vien ban muon tim: ");
		scanf("%d",&mahocvien);	
		for(i=0;i<n; i++)
		{
			if(mahocvien==a[i].mahv)
			{
				printf("\n%-5s%-15s%-30s%-15s%-15s%-15s%-15s%-15s","ID","Ma hoc vien","Ho va ten","So buoi di","Diem DK","Diem thi","Diem TB","Xep Loai");
				printf("\n%-5d%-15d%-30s%5d/%-10d%-15d%-15d%-15.2f%-15s",a[i].id,a[i].mahv,a[i].hoten,a[i].hoctap.sobuoidi,a[i].monhoc.sobuoi,a[i].hoctap.diemdk,a[i].hoctap.diemthi,a[i].hoctap.dtb,a[i].hoctap.xeploai);
				flag=1;
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					goto out;
					break;
				}
			}
			
		}
		if(flag==0){
				printf("\nKhong the tim thay ma sinh vien nay!");
				printf("\n");
				printLine(50);
				printf("\nContinue? Press:1 Stop? Press:0");
				printf("\n");printLine(50);printf("\n");
				scanf("%d",&choice);
				printf("\n");printLine(50);printf("\n");
				if(choice==0)
				{
					out:
					break;
				}
				goto check;
				}
		
	}	
	
}
