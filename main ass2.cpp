#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include<string.h>


int menu(){
	printf("\n");
	
    printf("+=============================  Menu  ===========================+\n");
    printf("|1. Kiem tra so nguyen                                           |\n");
    printf("|2. Tim uoc so chung va boi so chung cua 2 so                    |\n");
    printf("|3. Chuong trinh tinh tien cho quan karaoke                      |\n");
    printf("|4. Tinh tien dien                                               |\n");
    printf("|5. Chuc nang doi tien                                           |\n");
    printf("|6. Xay dung chuong trinh tinh lai xuat vay ngan hang vay tra gop|\n");
    printf("|7. Xay dung chuong trinh vay tien mua xe                        |\n");
    printf("|8. Sap xep thong tin sinh vien                                  |\n");
    printf("|9. Xay dung game FPT-LOTT                                       |\n");
    printf("|10. Xay dung chuong trinh tinh toan phan so                     |\n");
    printf("|11. Exit                                                        |\n");
    printf("+------------------------===== END =====-------------------------+\n");
	printf("Moi ban chon so tu[1-11]\n");
	int chon ;
	scanf("%d",&chon);
	return chon;
	}
	void kiemTraSoNguyen(){
		int n ;
		printf("Nhap so nguyen can kiem tra:");
		scanf("%d",&n);
		 if(n < 2){
        printf("\n%d khong phai so nguyen to!", n);
        
    }else{
	
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to!\n", n);
    }else{
        printf("\n%d khong phai so nguyen to!\n", n);
    }
		}
		int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("%d la so chinh phuong!\n", n);
          return;
        }
        ++i;
    }
    printf("%d khong phai so chinh phuong!\n", n);
		}
		void timUcVaBc(){
			 int a,b,uc,bc;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN(%d,%d)=%d\n",a,b,uc);
            break;
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN(%d,%d)=%d\n",a,b,bc);
            break;
        }
    }
			}
			void tinhTienQuanKaraoke(){
				int start,end,tongTien,tongGio;
				tongTien = 0;
				do{
				printf("Nhap gio bat dau :");
				scanf("%d",&start);
				printf("Nhap gio ket thuc:");
				scanf("%d",&end);
				if (start<12 || start>23 || end<12||end >23) {
					printf("Gio nay dong cua . Vui long quay lai sau\n");
				} else {
					tongGio = end - start;
					if(tongGio<=3){
						tongTien = tongGio * 150000;
						} else {
						tongTien = 3*150000+(tongGio-3)*0.7*150000;
							if(tongTien == 12 && tongTien == 17){
								tongTien =tongTien*0.9;
							}
						}
						printf("So tien phai tra la:%d",tongTien);
						}
					}
				
				while(start<12 || start>23 || end<12 || end >23);
					
				}
				void tinhTienDien(){
	float soDien, tienDIen; 
	int bac1=1678, bac2=1734, bac3=2014, bac4=2536, bac5=2834, bac6=2927; 
	   printf("Moi ban nhap so tien (kWh): ");
	   scanf("%f",&soDien);
	if(soDien<0){
		printf("\nVui long nhap lai So Dien\nSo dine khong duoc nho hon 0\n"); 
	}else if(soDien<=50){
		tienDIen = soDien * bac1;
		printf("\nBan da dung dien trong khoang 0-50 kWh so dien ban phai tra la: %.2f",tienDIen); 
	}else if(soDien<=100){
		tienDIen = 50 * bac1 + ((soDien - 50) * bac2); 
		printf("\nban da dung dien trong khoang 51-100 kWh so tien ban phai tra la: %.2f",tienDIen);		 
	}else if(soDien<=200){
		tienDIen = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3);
		printf("\nBan da dung dien trong khoang 101-200 kWh so dien ban phai tra la: %.2f",tienDIen); 
	}else if(soDien<=300){
		tienDIen = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3) + ((soDien - 200) * bac4);
		printf("\nban da dung dien trong khoang 201-300 kWh so tien ban phai tra la: %.2f",tienDIen);
	}else if(soDien<=400){
		tienDIen = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3) + ((soDien - 200) * bac4) + ((soDien - 300) * bac5);
		printf("\nban da dung dien trong khoang 301-400 kWh so tien ban phai tra la: %.2f",tienDIen);
	}else if(soDien>400){
		tienDIen = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3) + ((soDien - 200) * bac4) + ((soDien - 300) * bac5) + ((soDien - 400) * bac6);
		printf("\nban da dung dien da dung tren 400 kWh so tien ban phai tra la: %.2f",tienDIen);
	}
	
		}
//		struct sinhVien{
//			char tenSV[30];
//			float diem;
//			};
//			void nhapBai8(	struct sinhVien dssv[] ,int n);
//			
//				
//		void sapXepBai8(	struct sinhVien dssv[] ,int n);
//			void xuatBai8(	struct sinhVien dssv[] ,int n);
//			int CN8(){
//				struct sinhVien dssv[50];
//				int n=3;
//				nhapBai8(dssv,n);
//				sapXepBai8(dssv,n);
//				xuatBai8(dssv,n);
//				}
//				void nhapBai8(	struct sinhVien dssv[] ,int n){
//					for(int i = 0;i<n;i++){
//						printf("Nhap ten:");
//						fflush(stdin);
//						gets(dssv.[i].tenSV);
//						printf("Nhap diem:");
//						scanf("%f",&dssv.diem);
//						}
//					}
//						void sapXepBai8(struct sinhVien dssv[] ,int n){
//							struct sinhVien sv;
//							for(int i=0;i>0;i--){
//								for (int i=0;j<=i;j++){
//									if(dssv[j-1].diem<dssv[j].diem){
//										sv=dssv[j-1].diem<dssv.[j].diem;
//										dssv[j]=sv;
//										}
//									}
//								}
//							}
//								void xuatBai8(	struct sinhVien dssv[] ,int n){
//									char xepLoai[10];
//									printf("%20s  | %5s |%10s\n","Ho ten","Diem","Xeploai");
//									for(int i=0;i<n;i++){
//										if(dssv.[i].diem>=9){
//											strcpy(xepLoai,"Xuat sac");
//											}else if(dssv.[i].diem>=8){
//												strcpy(xepLoai,"Gioi");
//												}else if(dssv.[i].diem>=6.5){
//													strcpy(xepLoai,"Kha");
//													}else if(dssv.[i].diem>=5){
//														strcpy(xepLoai,"Trung binh");
//														}else {
//													strcpy(xepLoai,"Yeu");	
//															}
//										}
//										printf("%-20s| %5.1f|%10s\n",dssv.[i].ten,dssv.[i].diem,xepLoai);
//									}
		void doiTien(){
		int soTien;
int soto200, soto100, soto50, soto20, soto10,soto5,soto2,soto1;
int phandu;
printf("Xin nhap vao so tien can doi (phai la so nguyen duong): ");
scanf("%d", &soTien);
if (soTien <= 0){
printf("\nXin nguoi dung nhap lai so tien phai la so nguyen duong:");
scanf("%d", &soTien);
}
soto200 = soTien / 200; 
phandu = soTien % 200; 
soto100 = phandu / 100; 
phandu = phandu % 100; 
soto50 = phandu / 50; 
phandu = phandu % 50; 
soto20 = phandu / 20;
phandu = phandu % 20;
soto10 = phandu / 10;
phandu = phandu % 10;
soto5  = phandu / 5 ;
phandu = phandu % 5 ;
soto2  = phandu / 2 ;
phandu = phandu % 2 ;
soto1  = phandu / 1 ;
phandu = phandu % 1 ;
printf("\nSo to 200 nghin dong la : %d", soto200);
printf("\nSo to 100 nghin dong là: %d", soto100);
printf("\nSo to 50 nghin dong la: %d", soto50);
printf("\nSo to 20 nghin dong la: %d", soto20);
printf("\nSo to 10 nghin dong la: %d", soto10);
printf("\nSo to 5 nghin dong la: %d", soto5);
printf("\nSo to 2 nghin dong la: %d", soto2);
printf("\nSo to 1 nghin dong la: %d", soto1);
		}
	void Laisuat(int tienvay){
	int nam = 1;
	int tienlai;
	int tiengoc = tienvay /288;
	int tientra;
	int tiencon;
	tiencon = tienvay;
	printf("Ky han | Lai phai tra | Goc phai tra | so tien phai tra | so tien con lai | \n");
	for(int i = 1; i <= 288; i++){
		tienlai = tiencon * 0.06;
		tientra = tiengoc + tienlai;
		tiencon = tiencon - tiengoc;
		printf("--------------------------------------------\n");
		printf("%6d | ",i);
		printf("%12d | ",tienlai);
		printf("%12d | ",tiengoc);
	    printf("%16d | ",tientra);
		printf("%15d | ",tiencon);
		printf("\n");
		if(i % 12 == 0){
			nam++;
			printf("\n");
			printf("//===========================Ket thuc %d nam========================\n",nam);
			printf("\n");
		}
	}
	printf("Chuong trinh tra gop mua xe \n");
		int tienxe = 800000;
		tienvay = 0;
		int tientratruoc = 0;
		tientratruoc = tienxe * 0.2;
		tienvay = tienxe * 0.8;
		printf("Tien vay: %d\n",tienvay);
	    if(tienvay >500000){
	    
	    	tientratruoc = tienxe - tienvay;
	    	Laisuat(tienvay);
	    	printf("So tien vay cua ban vuot han muc quy dinh \n");
	    	printf("tien tra truoc: %d \n",tientratruoc);
	    	printf("tien vay: %d \n",tienvay);
		}else{
		
		
	    	printf("tien tra truoc: %d \n",tientratruoc);
	    	printf("tien vay: %d \n",tienvay);
		}
}		
				


 
main(){
    while(true){
        int chon = menu();
        if(chon>11 || chon <1){
        	printf("Chon so tu 1-11 .Vui long chon lai \n");
        	}else{
			
            
        switch(chon){
        	case 1:
        kiemTraSoNguyen();
        		break;
			case 2:
			 timUcVaBc();
			 break;
			case 3:
			tinhTienQuanKaraoke();
			 break;
			case 4:
		tinhTienDien();
			  	break;
            case 5:
              doiTien();
            break;
            case 6:
              
            break;
            case 7:
              Laisuat(500000);
            break;
            case 8:
              
            break;
            case 9:
              
            break;
            case 10:
              
            break;
            
            case 11:
          	exit(0);
           	break;
                	
        }
        }

    }
}



		
		
	
