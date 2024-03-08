#pragma once
#include<iostream>
using namespace std;

const int MAX = 100;

//3.Tính tổng các phần tử nguyên tố
		//Input: a, m, n, s = 0 Output : s
	
void TongPTNguyenTo(int a[][MAX], int m, int n);

//4.Tính tổng các phần tử chẵn trên cột k

	//	Input: a, m, n,k, s = 0 Output : s
	
long long TongChanK(const int a[][MAX], int m, int n, int k);

// 5. Đếm số phần tử âm trên dòng k
// Input: a, m, n, k
// Output: Số lượng phần tử âm trên dòng k

long long DemAmK(const int a[][MAX], int m, int n, int k);

//6.	Đếm số phần tử cực đại, biết phần tử cực đại là những phần tử lớn hơn các phần tử xung quanh nó
// Input: a, m, n, 
// Output: Số lượng phần tử cực đại lớn hơn các phần tử sung quanh nó 
long long DemCucDai(const int a[][MAX], int m, int n);
//7.	Tìm max
// Input: a, m, n
// Output: Giá trị lớn nhất trong mảng a

long long TimMax(const int a[][MAX], int m, int n);
//8. Tìm Max âm 
// Input: a, n,m
//OutPut: Giá Trị âm lớn nhất trong mảng a
long long TimMaxAm(const int a[][MAX], int m, int n);
//9.Liệt kê phần tử là số chính phương 
//Input : a,m,n,
//OutPut: Phần Tử là số chính phương trong ma trận 
bool KTCP(int x);
void lietKeSoChinhPhuong(const int a[][MAX], int m, int n);
//10.	Kiểm tra xem ma trận có tồn tại phần tử cực đại. Nếu có hàm trả về 1, ngược lại hàm trả về 0
// Input : a,m,n
//OutPut: x=1 or x=0
long long KiemTraCucDai(const int a[][MAX], int m, int n);