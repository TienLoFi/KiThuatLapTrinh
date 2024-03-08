#include "bt4.h"

int a[MAX][MAX] =
{
    {1,2,4,4},
    {5,-8,6, 4}
};
int m = 2, n = 4;
int k;
int main() {

  
    long long kq;
    int tt;

    do {
        system("cls");
        cout << "\nCAC THAO TAC TREN MA TRAN";
        cout << "\n -------------------------";
        cout << "\nMa Tran \n{1, 2, 4, 4}\n{5, -8, 6, 4}";
        cout << "\n1. Nhap Ma Tran.";
        cout << "\n2. Xuat Ma Tran.";
        cout << "\n3. Tong Cac Phan Tu trong Ma Tran.";
        cout << "\n4. Tong Cac Phan Tu chan trong Ma Tran.";
        cout << "\n5. Tong Cac Phan Tu Nguyen trong Ma Tran.";
        cout << "\n6. Dem Luong Cac Phan Tu Am trong Ma Tran.";
        cout << "\n7. Dem So Luong Cac Phan Tu Chan  Cot K trong Ma Tran.";
        cout << "\n8. Dem So Luong Cac Phan Tu am tren dong K trong Ma Tran.";
        cout << "\n9. Dem So Luong Cac Phan tu la so nguyen to trong ma tran.";
        cout << "\n10. Dem So Luong cac phan tu la so cuc dai trong ma tran.";
        cout << "\n0.ket thuc chuong trinh .";
        cout << "\n\nBan Chon Cong Viec Nao: ";
        cin >> tt;

        switch (tt) 
        {
        case 1:
         
            NhapMT(a, m, n);
            break;
        case 2:
            cout << "\ncac phan tu trong ma tran\n";
            XuatMT(a, m, n);
            break;
        case 3:
            kq = TongMT(a, m, n);
            cout << "\nTong Cac Phan Tu trong Ma Tran: " << kq;
            break;
        case 4:
            kq = TongPTChan(a, m, n);
            cout << "\nTong Cac Phan Tu Chan trong Ma Tran: " << kq;
            break;
        case 5:
            kq = TongPTNguyenTo(a, m, n);
            cout << "\nTong Cac Phan Tu Nguyen To trong Ma Tran: " << kq;
            break;
        case 6:
            kq = DemAm(a, m, n);
            cout << "\nSo Luong Cac Phan Tu Am trong Ma Tran: " << kq;
            break;
        case 7:
            cout << "\nNhap cot k = "; cin >> k;
            kq = TongChanK(a, m, n,k);
            cout << "\nSo Luong Cac Phan Tu Chan cua cot k trong Ma Tran: " << kq;
            break;
        case 8:
            cout << "\nNhap dong k = "; cin >> k;
            kq = DemAmK(a, m, n,k);
            cout << "\nSo Luong Cac Phan Tu Am tren dong k trong Ma Tran: " << kq;
            break;
        case 9: 
            kq = DemNT(a, m, n);
            cout << "\nSo Luong phan tu la so nguyen to trong ma tran la: " << kq;
            break;
        case 10: 
            kq = DemCucDai(a, m, n);
            cout << "\nSo Luong so cuc dai lon hon so xung quanh no la: " << kq;
        case 0:
            cout << "\nTam Biet Ban Tien.\n";
            break;
        default:
            cout << "\nLua chon khong hop le. Vui long nhap lai.\n";
        }
        cout << "\n";
        system("pause");
    } while (tt != 0);

    return 0;
}
