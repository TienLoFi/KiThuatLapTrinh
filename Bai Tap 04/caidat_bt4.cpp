#include"bt4.h"
//----------------



//CAU 1
void NhapMT(int a[][MAX], int& m, int& n)
{
	cout << "\nNhap so dong m= "; cin >> m;
	cout << "\nNhap so cot n= "; cin >> n;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			cout << " a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
}

void XuatMT(int a[][MAX], int m, int n)
{
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";

		}
		cout << "\n";

	}
}
//CAU 2-------------------------------------
long long TongMT(const int a[][MAX], int m, int n)
{
	long long s = 0;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			s += a[i][j];

		}


	}
	return s;
}

//CAU 3---------------------
long long TongPTChan(const int a[][MAX], int m, int n)
{

	long long  tongchan = 0;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				tongchan += a[i][j];



		}
	}

	return tongchan;

}
// Hàm kiểm tra số nguyên tố
bool KTNT(int k)
{
	if (k <= 1)
		return false;
	for (int i = 2; i < (int)sqrt(k); i++)
		if (k % i == 0)
			return false;

	return true;
}
// ---------
long long TongPTNguyenTo(const int a[][MAX], int m, int n)
{

	long long  tongnguyento = 0;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			if (KTNT(a[i][j]) == true)
				tongnguyento += a[i][j];
		}


	}


	return tongnguyento;


}
//----cau 4.	Tính tổng các phần tử chẵn trên cột k của ma trận-----
long long TongChanK(const int a[][MAX], int m, int n, int k)
{

	long long  tongchank = 0;


	for (int i = 0; i < m; ++i)
	{
		if (a[i][k] % 2 == 0)
			tongchank += a[i][k];



	}


	return tongchank;

}

//----cau 5---
long long DemAm(const int a[][MAX], int m, int n)
{

	int  dem = 0;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				dem++;

		}


	}
	return dem;
}
//--6.	Đếm số phần tử âm trên dòng k--

long long DemAmK(const int a[][MAX], int m, int n, int k)
{

	int  dem = 0;
	for (int j = 0; j < n; j++) {
		if (a[k][j] < 0) {
			dem++;

		}
	}
	return dem;

}

//----cau 7.	Đếm số phần tử là số nguyên tố trong ma trận----
long long DemNT(const int a[][MAX], int m, int n)
{
	int  dem = 0;
	for (int i = 0; i <= m - 1; i = i + 1)
	{

		for (int j = 0; j < n; j++)
		{
			if (KTNT(a[i][j]) == true)
				dem++;

		}


	}
	return dem;
}

//--cau 8 dem so phan tu cu dai trong ma trận 
long long DemCucDai(const int a[][MAX], int m, int n)
{
	int dem = 0;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] &&
				a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1]) {
				++dem;
			}
		}
	}

	return dem;
}