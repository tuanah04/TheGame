# Otter Run
## Mục lục
  1. [Ý tưởng](#ý-tưởng)
  2. [Hướng dẫn cài đặt](#hướng-dẫn-cài-đặt)
  3. [Các chức năng chính](#các-chức-năng-chính)
  4. [Kĩ thuật được sử dụng](#kĩ-thuật-được-sử-dụng)
  5. [Hướng cải thiện](#hướng-cải-thiện)
  6. [Nguồn tham khảo](#nguồn-tham-khảo)

---
# NỘI DUNG

## Ý tưởng
  Otter Run là bản remake từ Dinosaur Game được tích hợp trong trình duyệt Google Chrome nhưng được bổ sung thêm đồ họa, âm thanh và một vài tính năng phụ.
## Hướng dẫn cài đặt
 #### Yêu cầu: SDL2, SDL2_image, SDL2_mixer, SDL2_ttf
  - Cách cài SDL2 và tương tự với các thư viện còn lại ( [Hướng dẫn](https://www.youtube.com/watch?v=kxi0TMXEG3g) )
  - Sau khi cài xong các thư viện, ta lướt lên trên đầu của trang này và chọn nút màu xanh lá có các kí tự  " <> Code "  -->  Download ZIP
  - Giải nén file ZIP vừa tải
  - Trong folder vừa được giải nén, chọn main.exe
## Các chức năng chính
- Bật, tắt và điều chỉnh tăng giảm âm thanh nền và âm thanh hiệu ứng
- Tạm dừng trò chơi
- Lưu điểm cao xuống file
- Độ khó của trò chơi được tăng dần
## Kĩ thuật được sử dụng
- Mảng 
- Con trỏ, giải phóng bộ nhớ
- Đồ họa
- Bắt sự kiện bàn phím chuột
- Bắt va chạm per-pixel theo từng hoạt ảnh, chuyển động
- Stringstream
- Xử lý nhảy/ rơi theo vật lý
- Cắm cờ
- Sinh số ngẫu nhiên theo điều kiện
- Chia file theo đối tượng
- Đọc, ghi file
## Hướng cải thiện
Otter Run sẽ hướng tới việc có thêm các map, tùy chọn nhân vật yêu thích, lập bảng xếp hạng của các người chơi và đặc biệt là làm cho hiệu ứng chuyển động của game trở nên mượt mà hơn.
## Nguồn tham khảo
- [Lazy Foo](https://lazyfoo.net/tutorials/SDL/)
- [Youtube Channel: Let's Make Games](https://www.youtube.com/watch?v=QQzAHcojEKg&list=PLhfAbcv9cehhkG7ZQK0nfIGJC_C-wSLrx)
