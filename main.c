#include <stdio.h>
#include <stdlib.h>
#include "thongtinhocvien.h"
#include "pressKey.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	hv a[100];	
	int soluonghv;
	soluonghv=checkSoluong();
	printf("\nSo luong hoc vien : %d\n",soluonghv);
	
	int luachon, luachon1, luachon2;
	char fileName[] = "hocvien.txt";
	int soluongHV = 0;
    int idCount = 0;
    int mahv;
    // nhap danh sach sinh vien tu file
    soluonghv=docfile(a, fileName);
	printf("\nSo luong hoc vien : %d\n",soluonghv);

	while(1)
	{
		printf("\n======================= Danh sach quan li hoc vien ==========================");
		printf("\n===    1.Nhap thong tin:...                                               ===");
		printf("\n===    2.Hien thi thong tin:...                                           ===");
		printf("\n===    3.Ghi thong tin ra file.                                           ===");
		printf("\n===    4.Tim kiem hoc vien theo ma hoc vien (thong tin co ban , diem so). ===");
		printf("\n===    5.Sap xep hoc vien theo thu tu tang dan.                           ===");
		printf("\n===    6.Xoa hoc vien theo ID.                                            ===");
		printf("\n===    0.Thoat.                                                           ===");
		printf("\n=============================================================================");
		printf("\nVui long nhap lua chon cua ban (0->6): ");scanf("%d",&luachon);
	
		switch(luachon)
		{
			case 1:
				printf("\n\t*********************** Danh sach nhap thong tin ****************************");
				printf("\n\t***    1.Thong tin hoc vien.                                              ***");
				printf("\n\t***    2.Thong tin cac mon hoc.                                           ***");
				printf("\n\t***    3.Thong tin quan li hoc tap.                                       ***");
				printf("\n\t***    0.Thoat.                                                           ***");
				printf("\n\t*****************************************************************************");
				printf("\n\tVui long nhap lua chon cua ban (0->3): ");scanf("%d",&luachon1);
				switch(luachon1)
				{
					case 1:
						
						printf("\n1.Nhap thong tin hoc vien.\n");
						inputdsThongtinhocvien(a,soluonghv);
						soluonghv=checkSoluong();
						printf("\nThem hoc vien thanh cong!");
						pressKey();
						break;
					case 2:
						printf("\n2.Nhap thong tin cac mon hoc.\n");
						soluonghv=checkSoluong();
						inputdsCacmonhoc(a,soluonghv);
						pressKey();
						break;
					case 3:
						printf("\n3.Nhap thong tin quan li hoc tap.\n");
						soluonghv=checkSoluong();
						inputdsQuanlihoctap(a,soluonghv);
						pressKey();
						break;
					case 0:
						printf("\nBan da thoat khoi danh sach hien thong tin!");
						pressKey();
						break;
					default:
						printf("\nKhong co chuc nang nay!");
						printf("\nVui long chon lai chuc nang trong menu!");
						pressKey();
						break;
				}
				break;
			case 2:
				printf("\n\t*********************** Danh sach hien thi thong tin ************************");
				printf("\n\t***    1.So luong hoc vien.                                               ***");
				printf("\n\t***    2.Thong tin hoc vien.                                              ***");
				printf("\n\t***    3.Thong tin cac mon hoc.                                           ***");
				printf("\n\t***    4.Thong tin quan li hoc tap.                                       ***");
				printf("\n\t***    0.Thoat.                                                           ***");
				printf("\n\t*****************************************************************************");
				printf("\n\tVui long nhap lua chon cua ban (0-4): ");scanf("%d",&luachon2);
				switch(luachon2)
				{
					case 1:
						printf("\n1.So luong hoc vien.");soluonghv=checkSoluong();
						printf("\n==================================");
						printf("\n**** So luong hoc vien: %d     ****",soluonghv);
						printf("\n==================================\n");
						pressKey();
						break;
					case 2:
						printf("\n2.Thong tin hoc vien.");
						soluonghv=checkSoluong();
						outputdsThongtinhocvien(a,soluonghv);
						printf("\nHien hoc vien thanh cong!");
						pressKey();
						break;
					case 3:
						printf("\n3.Thong tin cac mon hoc.");
						soluonghv=checkSoluong();
						outputdsCacmonhoc(a,soluonghv);
						printf("\nHien cac mon hoc thanh cong!");
						pressKey();
						break;
					case 4:
						printf("\n4.Thong tin quan li hoc tap.");
						soluonghv=checkSoluong();
//						tinhDTB(a,soluonghv);
//						xepHang(a,soluonghv);
						outputdsQuanlihoctap(a,soluonghv);
						printf("\nHien cac mon hoc thanh cong!");
						pressKey();
						break;
					case 0:
						printf("\nBan da thoat khoi danh sach hien thong tin!");
						pressKey();
						break;
					default:
						printf("\nKhong co chuc nang nay!");
						printf("\nVui long chon lai chuc nang trong menu!");
						pressKey();
						break;
				}
				break;
			case 3:
				if(soluonghv > 0){
                    printf("\n3.Ghi thong tin ra file.");
//                   tinhDTB(a,soluonghv);
//					xepHang(a,soluonghv);
                    ghifile(a, soluonghv, fileName);
                }else{
                    printf("\nSanh sach hoc vien trong!");
                }
                printf("\nGhi danh sach hoc vien vao file %s thanh cong!", fileName);
				pressKey();
				break;
			case 4:
				printf("\n4.Tim kiem hoc vien theo ma hoc vien (thong tin co ban , diem so).");
				soluonghv=checkSoluong();
//				tinhDTB(a,soluonghv);
//				xepHang(a,soluonghv);
				timkiemHV(a,soluonghv);
				printf("\nHien thong tin tim kiem thanh cong!");
				pressKey();
				break;
			case 5:
				printf("\n5.Sap xep hoc vien theo thu tu tang dan.");
		
				printf("\n\t*********************** Danh sach sap xep hoc vien   ************************");
				printf("\n\t***    1.Sap xep hoc vien theo DTB.                                       ***");
				printf("\n\t***    2.Sap xep hoc vien theo Ten.                                       ***");
				printf("\n\t***    0.Thoat.                                                           ***");
				printf("\n\t*****************************************************************************");
				printf("\n\tVui long nhap lua chon cua ban (0-2): ");scanf("%d",&luachon2);
				switch(luachon2)
				{
					case 1:
						printf("\n1.Sap xep hoc vien theo DTB.");soluonghv=checkSoluong();
						printf("\n==================================\n");
						sapxepTheoDTB(a,soluonghv);
						printf("\nSap xep hoc vien thanh cong!");
						printf("\n==================================\n");
						pressKey();
						break;
					case 2:
						printf("\n2.Sap xep hoc vien theo Ten.");
						soluonghv=checkSoluong();
						sapXepTheoTen(a,soluonghv);
						printf("\Sap xep hoc vien thanh cong!");
						pressKey();
						break;
					case 0:
						printf("\nBan da thoat khoi danh sach hien thong tin!");
						pressKey();
						break;
					default:
						printf("\nKhong co chuc nang nay!");
						printf("\nVui long chon lai chuc nang trong menu!");
						pressKey();
						break;
				}
				break;
			case 6:
			
				printf("\n6.Xoa hoc vien theo ID.");
				soluonghv=checkSoluong();
				printf("\nNhap ma hoc vien ban muon xoa:");scanf("%d",&mahv);
				xoaTheoMahv(a,mahv,soluonghv);
				printf("\nXoa hoc vien thanh cong!");
				pressKey();
				break;
			case 0:
				printf("\nBan da thoat khoi chuong trinh !");
				getchar();
				return 0;
				
		}	
	}
	
	
	

	return 0;
}
