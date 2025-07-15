#include <stdio.h>

int main() {
    float score = 90.5;  
    printf("Score = %.1f\n", score);  
    return 0;
}
#include <stdio.h>

int main() {
    int score = 90.5;  
    printf("Score = %d\n", score);  
    return 0;
}

//ข้อที่1: แสดงค่าเป็น 90 เพราะ int เอาแต่จำนวนเต็ม
//ข้อที่2: แสดงค่าเป็น 90.5 ได้ เพราะใช้ float จะรับทศนิยมได้
//การเลือก Data Type ผิดอาจทำให้ข้อมูล ผิดพลาดได้
//ทำให้แสดงผลไม่ถูกต้อง และอาจทำให้โปรแกรมทำงานไม่ถูกต้อง
//คำนวณค่าทศนิยมควรใช้ float ไม่ควรใช้ int