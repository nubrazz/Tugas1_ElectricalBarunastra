# Tugas Diagram ERC dan FERC

| Nama | Division | Sub-Division |
| ----- | ---------- | ---------- |
| Nibras Faros Siahaan | ELC | Microcontroller |


# Electrical Remote Control (ERC)

Repository ini berisi desain dan penjelasan tentang **Electrical Remote Control (ERC)**. Sistem ERC dirancang untuk mengontrol motor listrik dan servo secara nirkabel menggunakan konfigurasi transmitter dan receiver.

![ERC_Diagram](https://github.com/user-attachments/assets/da540e29-be60-4c41-bbc6-b068dba18e7d)

---

## **Overview Sistem**

Sistem ERC terdiri dari dua komponen utama:
1. **Transmitter Board**: Antarmuka pengguna untuk mengirimkan sinyal kontrol.
2. **Receiver Board**: Pengontrol yang memproses perintah dan mengelola motor serta servo.

Komunikasi antara kedua papan menggunakan **protokol SPI**.

---

## **Penjelasan Diagram**

### **1. Transmitter Board**
Transmitter board bertugas menghasilkan sinyal kontrol dan mengirimkannya ke receiver. Komponennya meliputi:
- **Microcontroller**:
  - Memproses sinyal input dari tombol.
  - Mengirimkan data ke modul transmitter.
  - Memperbarui LED Display dengan informasi sistem.
- **Transmitter**:
  - Mengirimkan sinyal kontrol secara nirkabel ke receiver.
- **LED Display**:
  - Menampilkan informasi sistem, seperti status koneksi atau level baterai.
- **Buttons**:
  - Memberikan input untuk mengontrol motor dan servo (misalnya: throttle naik/turun, start/stop).
- **Battery**:
  - Memberikan daya untuk transmitter board.

### **2. Receiver Board**
Receiver board bertugas menginterpretasikan perintah dari transmitter dan mengontrol motor serta servo sesuai perintah. Komponennya meliputi:
- **Receiver**:
  - Menerima sinyal nirkabel dari transmitter board.
- **Microcontroller**:
  - Memproses data yang diterima dan menghasilkan sinyal kontrol untuk ESC dan servo.
- **ESC (Electronic Speed Controller)**:
  - Mengontrol kecepatan dan arah motor berdasarkan perintah dari microcontroller.
- **Motor**:
  - Melakukan gerakan sesuai perintah dari ESC.
- **Servo**:
  - Mengatur sudut atau posisi komponen mekanis (contohnya rudder).
- **Battery**:
  - Memberikan daya untuk receiver board dan semua komponen yang terhubung.

---


# Fuel Engine Remote Control (FERC)

Repository ini berisi desain dan penjelasan tentang **Fuel Engine Remote Control (FERC)**. Sistem FERC dirancang untuk mengontrol mesin berbahan bakar (fuel engine) secara nirkabel dengan menggunakan konfigurasi transmitter dan receiver.

![FERC_Diagram](https://github.com/user-attachments/assets/9a4d1541-d2b2-43c8-b01f-b808a09ed85e)

---

## **Overview Sistem**

Sistem FERC terdiri dari dua komponen utama:
1. **Transmitter Board**: Antarmuka pengguna untuk mengirimkan sinyal kontrol.
2. **Receiver Board**: Pengontrol yang memproses perintah dan mengelola komponen-komponen seperti throttle, servo, dan ignition controller.

Komunikasi antara kedua papan menggunakan **protokol SPI**.

---

## **Penjelasan Diagram**

### **1. Transmitter Board**
Transmitter board bertugas menghasilkan sinyal kontrol dan mengirimkannya ke receiver. Komponennya meliputi:
- **Microcontroller**:
  - Memproses sinyal input dari tombol.
  - Mengirimkan data ke modul transmitter.
  - Memperbarui LED Display dengan informasi sistem.
- **Transmitter**:
  - Mengirimkan sinyal kontrol secara nirkabel ke receiver.
- **LED Display**:
  - Menampilkan informasi sistem, seperti status koneksi atau level baterai.
- **Buttons**:
  - Memberikan input untuk mengontrol throttle, servo, atau sistem pengapian (ignition).
- **Battery**:
  - Memberikan daya untuk transmitter board.

### **2. Receiver Board**
Receiver board bertugas menginterpretasikan perintah dari transmitter dan mengontrol mesin berbahan bakar serta servo. Komponennya meliputi:
- **Receiver**:
  - Menerima sinyal nirkabel dari transmitter board.
- **Microcontroller**:
  - Memproses data yang diterima dan menghasilkan sinyal kontrol untuk komponen seperti ignition controller, throttle servo, dan servo tambahan.
- **Ignition Controller**:
  - Mengontrol sistem pengapian mesin berbahan bakar.
- **Throttle Servo**:
  - Mengatur throttle untuk menyesuaikan kecepatan mesin.
- **Servo**:
  - Mengontrol komponen mekanis lain sesuai kebutuhan (misalnya, sistem kemudi).
- **Engine**:
  - Mesin berbahan bakar yang dikontrol melalui ignition controller dan throttle servo.
- **Battery**:
  - Memberikan daya untuk receiver board dan semua komponen yang terhubung.

---


# Perbedaan Utama: ESC vs Throttle Servo dan Penambahan Ignition Controller

Pada sistem **Fuel Engine Remote Control (FERC)**, terdapat dua perbedaan utama dibandingkan dengan **Electrical Remote Control (ERC)**:

1. **Penggantian ESC dengan Throttle Servo**  
   - **ESC (Electronic Speed Controller)** digunakan pada ERC untuk mengatur kecepatan motor listrik.  
   - Pada FERC, motor listrik digantikan oleh **engine berbahan bakar**, sehingga kontrol kecepatan dilakukan melalui **Throttle Servo** yang mengatur bukaan throttle mesin berbahan bakar.

2. **Penambahan Ignition Controller**  
   - **Ignition Controller** diperlukan pada FERC untuk mengatur sistem pengapian pada mesin berbahan bakar. Komponen ini memastikan mesin dapat menyala dan bekerja sesuai perintah yang diberikan dari transmitter board.

---
