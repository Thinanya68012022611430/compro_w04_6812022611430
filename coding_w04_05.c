#include <stdio.h>

void countCallStatic() {
    static int counter = 0; 
    counter++;
    printf("Static Counter = %d\n", counter);
}

void countCallNormal() {
    int counter = 0;  
    counter++;
    printf("Normal Counter = %d\n", counter);
}

int main() {
    printf("Static Function Call\n");
    countCallStatic(); 
    countCallStatic();  
    countCallStatic();  

    printf("\nNormal Function Call\n");
    countCallNormal();  
    countCallNormal();  
    countCallNormal();  

    return 0;
}
// Static Variable จำค่าจากครั้งก่อนหน้าได้
// Non-static Variable จะถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชันใหม่
// การใช้ static ช่วยให้เราสามารถนับจำนวนครั้งที่เรียกฟังก์ชันได้
// การใช้ non-static จะทำให้ค่าถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชัน ทำให้ไม่สามารถนับจำนวนครั้งได้
// อยู่ในหน่วยความจำจนสิ้นสุดการทำงานของโปรแกรม
// อยู่ในหน่วยความจำแค่ช่วงที่ฟังก์ชันกำลังทำงานอยู่