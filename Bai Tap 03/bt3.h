#pragma once
#include<iostream>

//1.	Khai báo sau có ý nghĩa gì? Anh/Chị hãy giải thích.
int a[4][5] = { 0 };
//- Giải Thích : Khai Báo Trên Là Khai Báo Mảng Hai Chiều Có Kích Thước Là 4 hàng và 5 cột . Mỗi phần tử được có kiểu dữ liệu là int và được khởi tạo là 0
//2.	Anh/Chị cho biết 02 điều khác biệt giữa mảng 1 chiều và mảng 2 chiều
// -Giải Thích: MẢNG MỘT CHIỀU LÀ : Một Dãy Phần Tử Liên Tiếp Có Cùng Kiểu Dữ Liệu , Mỗi Phần Tử Được Truy Cập Bằng Một Chỉ Số Nhất Định
// MẢNG HAI CHIỀU LÀ : Trong Mảng Một Chiều Mỗi Mảng Con Trong Mảng Hai Chiều Là Một Dòng Cuả Ma Trận truy cập bằng hai chỉ số, một cho hàng và một cho cột.
//3.	Anh / Chị hãy phân biệt 02 khuôn mẫu hàm dưới đây
//long long TongChan(int a[][MAX], int m, int n); 
// -Giẩi Thích : Khai Báo Này Không Có Const Có Nghĩa Là Cho Phép Hàm Thay Đổi Giá Trị Trong Mảng a
// 
//long long TongChan(const int a[][MAX], int m, int n);
// -Giải Thích : Khai Báo Này Có Const Tức Là Không Thể Thay Đổi Giá Trị Trong Mảng a
//4.	Theo Anh / Chị khuôn mẫu hàm xuất ma trận dưới đây có hợp lý không ? Hãy giải thích.
//void XuatMT(int a[][MAX], int m, int& n);
// --Giải Thích : Khuôn mẫu hàm này là hợp lý vì nó cho phép hàm xuất ma trận a[][] có kích thước m x n, với m là số hàng và n là số cột được truyền vào hàm. Tham số n được truyền bằng tham chiếu để hàm có thể cập nhật giá trị của số cột nếu cần thiết. 
//5.	Anh / Chị hãy tìm 03 bài toán trong thực tế có thể tổ chức cấu trúc dữ liệu bằng mảng 2 chiều
// Trả Lời:
//BẢNG 1: Bảng điểm của lớp học: Mỗi hàng của ma trận đại diện cho một học sinh và mỗi cột đại diện cho một môn học. Bằng cách này, bạn có thể lưu trữ điểm của mỗi học sinh cho từng môn học trong một cấu trúc dữ liệu mảng hai chiều.

//BẢNG 2:Bảng lịch thi đấu thể thao : Một bảng lịch thi đấu đơn giản có thể được biểu diễn bằng một mảng hai chiều, trong đó mỗi hàng đại diện cho một trận đấu và mỗi cột đại diện cho các thông tin như thời gian, địa điểm và các đội tham gia.
// 
//BẢNG 3. Bảng số liệu bán hàng: Mỗi hàng trong mảng đại diện cho một sản phẩm hoặc một loại hàng hóa, trong khi mỗi cột đại diện cho các thuộc tính hoặc thông tin khác nhau (ví dụ: số lượng tồn kho, doanh số bán hàng). Bằng cách này, bạn có thể theo dõi thông tin về doanh số bán hàng và tồn kho của từng sản phẩm trong một cấu trúc dữ liệu mảng hai chiều.
