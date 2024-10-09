#include <stdio.h>
#include "Bangmauansi.cpp"

void GiaiMenu1(int n) {
	for (int i = 1;i <= n;i++)
		printf(" %d", i);                       //LIỆT KÊ CÁC SỐ NGUYÊN TỪ 1 ĐẾN N 
	
}

void GiaiMenu2(int x) {
	for (int j = 2;j <= x;j++)                 //LIỆT KÊ CÁC SỐ NGUYÊN TỪ 2 ĐẾN N 
		printf(" %d", j);
}

void GiaiMenu3(int a) {
	for (int num = 2; num <= a; num++) {
		int sum = 0;
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0) {                     //LIỆT KÊ CÁC SỐ HOÀN HẢO TỪ 1 ĐẾN N
				sum += i;                           //SHH LÀ CÁC ƯỚC SỐ + LẠI = SỐ GỐC 
			}
		}
		if (sum == num) {
			printf("%d\n", num);
		}
		else {
			printf("Khong phai");
		}
	}
}




void GiaiMenu4(int b) {
	printf("Cac uoc so cua %d la: ", b);
		for (int i = 1; i < b; i++) { 
			if (b % i == 0) {                  //LIỆT KÊ CÁC ƯỚC SỐ CỦA N
				printf(" %d ", i);
			}
		}
	
}

void GiaiMenu5(int c) {
	for (int i = 1;i < c;i++)          //LIỆT KÊ CÁC SỐ CHỈNH PHƯƠNG TỪ 1 ĐẾN N 
		if (i % 2 == 0) 
			printf(" %d", i);
		
	
}

void GiaiMenu6(int g) {
	int l = 0, k = 1, temp;
	printf("Cac so Fibonacci dau tien: %d %d ", l, k);
	for (int i = 3; i <= g; i++) {
		temp = l + k;                                   //LIỆT KÊ SỐ FIBONACCI ĐẦU TIÊN 
		printf("%d ", temp);
		l = k;
		k = temp;
	}
}


void XuatMenu() {
	RED;printf("\n\nMenu Cong Viec\n");
	printf("======================\n");
	printf("1: Liet ke so nguyen 1<=n<=100\n");
	printf("2: Liet ke so nguyen tu 2 den n\n");
	printf("3: Liet ke so hoan hao tu 1 den n\n");
	printf("4: Liet ke cac uoc so cua n\n");                        //Menu xuất ra màn hình 
	printf("5: Liet ke cac so chinh phuong tu 1 den n\n");
	printf("6: Liet ke n so Fibonacci dau tien\n");
	printf("0: Thoat Menu\n");
}

int main() {
	int chon;
	do {
		XuatMenu();
		printf("Nhap cong viec ma ban muon lam: ");scanf_s("%d", &chon);
		switch (chon) {
		case 1:
			int n;
			printf("Nhap so nguyen n (1<=n<=100): ");scanf_s("%d", &n);
			GiaiMenu1(n);
			break;

		case 2:
			int x;
			printf("Nhap so nguyen x: ");scanf_s("%d", &x);
			GiaiMenu2(x);
			break;

		case 3:
			int a;
			printf("Nhap so nguyen a: ");scanf_s("%d", &a);
			GiaiMenu3(a);
			break;

		case 4:
			int b;
			printf("Nhap so nguyen b: ");scanf_s("%d", &b);
			GiaiMenu4(b);
			break;

		case 5:
			int c;
			printf("Nhap so nguyen c: ");scanf_s("%d", &c);
			GiaiMenu5(c);
			break;

		case 6:
			int g;
			printf("Nhap so nguyen n: ");scanf_s("%d", &g);
			GiaiMenu6(g);
			break;


		default:
			chon = 0;
			break;
		}
	} while (chon != 0);

		return 0;

}
