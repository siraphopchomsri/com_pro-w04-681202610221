//กรณีที่ 2: ประกาศตัวแปร score เป็นชนิด float และกำหนดค่า 90.5

#include <stdio.h> // เรียกใช้ไลบรารีมาตรฐานสำหรับฟังก์ชัน Input/Output

int main() {
    float score = 90.5f; // ประกาศตัวแปร score เป็นชนิด float (ทศนิยม) และกำหนดค่า 90.5
                         // ใช้ 'f' ต่อท้าย 90.5 เพื่อระบุว่าเป็น float literal
    printf("float score = 90.5 %d\n" , score); // แสดงผลตัวแปร score
    printf(" score: %.1f\n", score); // แสดงผลตัวแปร score โดยให้แสดงทศนิยม 1 ตำแหน่ง
    return 0; // คืนค่า 0 เมื่อโปรแกรมทำงานเสร็จสมบูรณ์
}