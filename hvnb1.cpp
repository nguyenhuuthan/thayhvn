//biến cục bộ, biến toàn cục
//tham số, tham chiếu


#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
using namespace std;
//b1
//hàm trả về int
int tong(int& n, int& m) {
	return n + m; 
}
//hàm trả về void
void tong2(int n, int m, int &ketqua) {
	ketqua = n + m;
}
int main() {
	int n = 10;
	int m = 20;
	int kq;
	tong2(n, m, kq);
	cout << "tong 2 so la: " << kq;
}

//b2
int dem(string s) {
	int dem = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] != ' ') {
			dem++;
		}
	}
	return dem;
}
string nhapc() {
	string s;
	cout << "nhap chuoi: ";
	getline(cin, s);
	return s;
}


int main() {
	string s;
	s = nhapc();
	cout << "cac ki tu khac khoang trang la: " << dem(s);

}


//b3
int demtu2(string s) {
	int dem = 0;
	if (s[0] != ' ') {
		dem++;
	}
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != ' ' && s[i - 1] == ' ') 
			dem++;
	}
	return dem;
}

int main() {
	string s;
	cout << "nhap chuoi: ";
	getline(cin, s);
	cout<< demtu2(s);
}


//b4b4 học về con trỏ
int main() {
	int n;
	n = 200;
	cout << "gia tri cua bien n la: " << n << endl;
	cout << "dia chi cua bien la n la: " << &n << endl;
	//khai bao con tro
	int* p;		//con tro p = null
	p = &n;
	cout << "dia chi cua con tro p: " << p << endl;
	cout << "gia tri vung ma con tro chi toi: " << *p << endl;
	n = 555;
	cout << "gia tri vung nho p sau khi thay doi: " << *p << endl;
	*p = 999;
}

void hoanvi(int& a, int& b) {	//dùng địa chỉ
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void hoanvi1(int *a,int *b) {	//dùng con trỏ
	int tam;
	tam = *a;
	*a = *b;
	*b = tam;
}


// b5 viết hàm trả về tổng 2 số
int tong_hieu(int a, int b, int* hieu) {
	int tong, hieu;
	tong = a + b;
	*hieu = a - b;
	return tong;
}
int main() {
	int a = 5, b = 12, tong, hieu;
	cout << "dung dia chi";
	hoanvi(a, b);				//truyền tham chiếu địa chỉ
	cout << "a= " << a << ", b= " << b << endl;
	cout << "dung con tro";
	hoanvi1(&a, &b);			//truyền con trỏ
	cout << "a= " << a << ", b= " << b << endl;
	tong = tong_hieu(a, b, &hieu);
	cout << "tong = " << tong << " , hieu= " << hieu << endl;
}




















