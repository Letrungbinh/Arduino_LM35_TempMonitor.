# 🌡️ Arduino LM35 Temperature Monitor

## 📌 Mô tả
Dự án sử dụng Arduino để đo nhiệt độ từ cảm biến LM35 (3 kênh A0, A1, A2) và gửi dữ liệu qua Serial.  
Hệ thống hỗ trợ xuất dữ liệu dạng CSV và JSON để dễ dàng tích hợp với ứng dụng PC hoặc hệ thống IoT.

---

## 🚀 Tính năng
- Đọc nhiệt độ từ 3 cảm biến LM35 (A0, A1, A2)
- Chuyển đổi giá trị ADC sang nhiệt độ (°C)
- Xuất dữ liệu qua Serial:
  - CSV (Comma-Separated Values)
  - JSON (JavaScript Object Notation)
- Dễ dàng mở rộng và tích hợp

---

## 🔌 Phần cứng

| Thành phần        | Mô tả                          |
|------------------|-------------------------------|
| Arduino Uno      | Vi điều khiển chính           |
| LM35             | Cảm biến nhiệt độ             |
| Dây nối          | Kết nối mạch                  |
| Breadboard       | Lắp ráp mạch                  |

---

## 🛠️ Hướng dẫn sử dụng

### 1. Kết nối phần cứng
- LM35 VCC → 5V
- LM35 GND → GND
- LM35 OUT → A0 / A1 / A2

### 2. Nạp code
- Mở Arduino IDE
- Chọn board Arduino Uno
- Upload file `.ino`

### 3. Xem dữ liệu
- Mở Serial Monitor (9600 baud)
- Kết quả:
  - CSV: `25.3,26.1,27.0`
  - JSON: `{"temp1":25.3,"temp2":26.1,"temp3":27.0}`

---

## 📂 Cấu trúc thư mục


Arduino_LM35_TempMonitor/
│
├── firmware/
│ └── LM35_TempReader/
│ └── LM35_TempReader.ino
│
├── pc_app/ # Ứng dụng PC (nếu có)
├── docs/ # Tài liệu
├── libs/ # Thư viện
├── simulation/ # Mô phỏng Proteus
└── README.md


---

## 👨‍💻 Thành viên nhóm

- SV A: Lê Trung Bình
- SV B: Cao Phong

---

## 📌 Ghi chú
- Công thức chuyển đổi:
  ADC → Nhiệt độ (°C) = (adcValue * 500.0) / 1023.0
- LM35: 10mV / °C