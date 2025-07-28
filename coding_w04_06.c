#include <stdio.h>
const int GLOBAL_RATE = 10;
void calculate() { 
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);
    return 0;
}
//GLOBAL_RATE คือ ค่าคงที่ระดับ global ใช้ได้ทุกค่าของฟังก์ชัน
//LOCAL_BONUS คือ ค่าคงที่ระดับ local ใช้ได้แค่ในระดับฟังก์ชันที่ประกาศเท่านั้น
//Error ทันที เพราะ const คือค่าคงที่ ไม่สามารถที่จะเปลี่ยนค่า
//เพราะเป็น ตัวแปร local อยู่ในฟังก์ชันของ calculate()และไม่สามารถเข้าถึงได้จาก main()
//ตัวแปร const ใช้กำหนดค่าคงที่และ global const สามารถใช้ได้ทุกที่ส่วน local const ใช้ได้แค่ในฟังก์ชันที่ประกาศถ้าเกิดการเปลี่ยนค่าจะเกิด compile error ทันที

