//กรณีที่ 1: ประกาศตัวแปร score เป็นชนิด int และกำหนดค่า 90.5

#include <stdio.h> // เรียกใช้ไลบรารีมาตรฐานสำหรับฟังก์ชัน Input/Output

int main() {
    int score = 90.5; // ประกาศตัวแปร score เป็นชนิด int (จำนวนเต็ม) และพยายามกำหนดค่า 90.5
    printf("(int score = 90.5;) %d\n", score); // แสดงผลตัวแปร score
    printf("score: %d\n", score); // แสดงผลตัวแปร score
    return 0; // คืนค่า 0 เมื่อโปรแกรมทำงานเสร็จสมบูรณ์
}