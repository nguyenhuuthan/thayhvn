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


//bt6 Tìm UCLN, BCNN của 2 số nguyên dương
int ucln(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return ucln(b, a % b);
	}
}
int bcnn(int a, int b) {
	return (a * b) / ucln(a, b);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << ucln(a, b) << endl;
	cout << bcnn(a, b);
	
	
}


//bt7 Tính căn 2 + căn 2 + căn 2(n) 
//  n = 1 : S(1) = sqrt(2) 
//  n = 2:  S(2) = sqrt(2 + sqrt(2))
//  n = 3: S(3) = sqrt(2 + sqrt(2 + sqrt(2)))
float tinh(int a) {
	float s = sqrt(2);
	for (int i = 2; i <= a; i++) {
		s = sqrt(2 + s);
		return s;
	}
}
int main() {
	int n;
	cin >> n;
	cout << "de quy " << tinh(n);
}


//bt8   Y1=1, Y2=2, Y3=3,Yn = Yn - 1 + 2Yn - 2 + 3Yn - 3 nếu n ≥4
//Y1=1;
//Y2=2;
//Y3=3
//Y4= Y3+2Y2+3Y1= 3+2*2+3*1=10
//Y5= Y4+2Y3+3Y2=10+2*3+3*2=22
int Y(int n) {
	if (n == 1 || n == 2 || n == 3) {
		return n;
	}
	return Y(n - 1) + 2 * Y(n - 2) + 3 * Y(n - 3);
}

int main() {
	int n;
	cout << "Nhap n= ";
	cin >> n;
	cout << "Yn la: " << Y(n);

}


//bt9 f(1) = 1, f(2n) = 2f(n), f(2n + 1) = 2f(n) + 3f(n + 1)). Tính f(5) và f(n)
//f(1) =1,
//f(2n) =2f(n),
//f(2n+1)= 2f(n) + 3f(n+1)
int f(int n){
	if (n == 1)
		return n;
	if (n % 2 == 0)
		return 2 * f(n / 2);
	else
		return 2 * f((n - 1) / 2) + 3 * f((n + 1) / 2);
}
int main() {
	int n;
	cout << "Nhap n= ";
	cin >> n;
	cout << "f(n) la: " << f(n);
	return 0;
}


//bt10 Với mỗi n ≥ 1, số Xn được tính như sau X1=1, X2=1, Xn = Xn - 1 + (n - 1)Xn - 2 với n ≥3
//N=1: X1=1
//N=2: X2=1
//N=3: X3=X2+2*X1=1+2*1=3
//N=4: X4=X3+3*X2=3+3*1=6
//N=5: X5=X4+4*X3=6+4*3=18
int X(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	else
		return X(n - 1) + (n - 1) * X(n - 2);
}
int main() {
	int n;
	cout << "nhap n= ";
	cin >> n;
	cout << "X(n) la: " << X(n);
}

