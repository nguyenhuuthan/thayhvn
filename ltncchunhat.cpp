#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//bt1 tính tổng 3 số 
int tb(int a, int b, int c) {
	return a + b + c;
}
int main() {
	int a, b, c;
	cout << "nhap so a";
	cin >> a;
	cout << "nhap so b";
	cin >> b;
	cout << "nhap so c";
	cin >> c;
	int kq = tb(a, b, c);
	cout << kq;
}


//bt2 tính tổng in ra từ 1 đến n
int tong(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n >= 0) {
			s += n;
		}
	}
	return s;
}
int main() {
	int a;
	cout << "nhap a: ";
	cin >> a;
	int kq = tong(a);
	cout << kq;
}


//bt3 viết hàm lakituso
bool lakytuso(char kytu) {
	if (kytu >= '0' && kytu <= '9') {
		return true;
	}
	return false;
}
int main() {
	char kytu;
	cout<<"nhap n: ";
	cin >> kytu;
	if (lakytuso(kytu)) {
		cout << "true";
	}
	else cout << "no";
}


//bt4 hàm tính ax2 + bx + c = 0
int main(){
	float a, b, c, delta, x1, x2;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;
	if (a == 0) {
		// a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else {
			cout << "Phuong trinh co nghiem duy nhat: " << -c / b;
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Nghiem thu nhat x1 = " << x1 << endl;
			cout << "Nghiem thu hai x2 = " << x2 << endl;
		}
		else if (delta == 0) {
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / 2 * a << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}

}


//bt5 hàm in ra snt nho hon n
bool nt(int n) {
	int dem = 0;
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (nt(i) == true) {
			cout << i << " ";
		}
	}
}
//bt3 Với mỗi n ≥ 1, số Yn được tính như sau : tính y5
long f(int n) {
	if (n == 1 || n == 2 || n == 3) {
		return n;
	}
	else {
		return f(n - 1) + 2 * f(n - 2) + 3 * f(n - 3);
	}
		
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << f(n);

}



//tính n theo công thức quy nạp f(1) =1,
//f(2n) = 2f(n),
//f(2n + 1) = 2f(n) + 3f(n + 1)
int f(int n) {
	if (n == 1 || n == 2) {
		return n;
	}
	else {
		return 2 * f(n / 2) + 3 * f(n / 2) + 1; //2 * f(n) + 3 * f(n + 1);
	}
}
int main() {
	int a;
	cout << "nhap so a: ";
	cin >> a;
	int kq = f(a);
	cout << "so " << a << " co gia tri f(n) la: " << kq;
}

//tìm ước chung lớn nhất
int uocChungLonNhat(int a, int b) {
	if (b == 0) {
		return a;
	}
	return uocChungLonNhat(b, a % b);
}

int main() {
	int a, b;
	cout << "Nhap vao hai so nguyen duong: ";
	cin >> a >> b;

	int ucln = uocChungLonNhat(a, b);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln << endl;

	return 0;
}


int x(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return x(n - 1) + (n - 1) * x(n - 2);
	}
}
int main() {
	int n;
	cout << "nhap n";
	cin >> n;
	int kq = x(n);
	cout << kq;

}