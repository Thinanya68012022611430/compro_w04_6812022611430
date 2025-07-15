#include <stdio.h>

void countCall() {
    static int counter = 0;  // ใช้ static → ค่าจะคงอยู่ระหว่างการเรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();  // ครั้งที่ 1
    printf("After first call:\n");
    countCall();  // ครั้งที่ 2
    countCall();  // ครั้งที่ 3
    return 0;
}
#include <stdio.h>

void countCall() {
    int counter = 0;  // non-static → สร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();  // ครั้งที่ 1
    printf("After first call:\n");
    countCall();  // ครั้งที่ 2
    countCall();  // ครั้งที่ 3
    return 0;
}
// Static Variable จำค่าจากครั้งก่อนหน้าได้
// Non-static Variable จะถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชันใหม่
// การใช้ static ช่วยให้เราสามารถนับจำนวนครั้งที่เรียกฟังก์ชันได้
// การใช้ non-static จะทำให้ค่าถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชัน ทำให้ไม่สามารถนับจำนวนครั้งได้
// อยู่ในหน่วยความจำจนสิ้นสุดการทำงานของโปรแกรม
// อยู่ในหน่วยความจำแค่ช่วงที่ฟังก์ชันกำลังทำงานอยู่