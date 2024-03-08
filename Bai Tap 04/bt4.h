#pragma once
#include<iostream>
using namespace std;

const int MAX = 100;

void NhapMT(int a[][MAX], int& m, int& n);
void XuatMT(int a[][MAX], int m, int n);
long long TongMT(const int a[][MAX], int m, int n);	
long long TongPTChan(const int a[][MAX], int m, int n); 
long long TongPTNguyenTo(const int a[][MAX], int m, int n);
long long DemAm(const int a[][MAX], int m, int n); 
long long TongChanK(const int a[][MAX], int m, int n, int k); 
long long DemNT(const int a[][MAX], int m, int n);
long long DemAmK(const int a[][MAX], int m, int n, int k);
long long DemCucDai(const int a[][MAX], int m, int n);
