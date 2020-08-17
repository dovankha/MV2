#include <iostream>
using namespace std;

void lietKeUocLe(int n)
{
	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
			cout << i << " ";
	}
}

int tinhTongUocChan(int n)
{
	int sum = 0;
	for (int i = 2; i <= n; i += 2)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int tinhTongUocNho(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Nhap vao so nguyen duong n = ";
	cin >> n;
	lietKeUocLe(n);
	
	cout << "\nTong cac uoc chan cua " << n << " la: " << tinhTongUocChan(n) << endl;
	cout << "\nTong cac uoc nho hon " << n << " la: " << tinhTongUocNho(n) << endl;
	return 0;
}
