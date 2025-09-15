#include <stdio.h>

int main() {
    int start, stop;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start == stop) {
        printf("Your start number is equal to stop number, please try again!\n");
    } 
    else if (start > stop) {
        printf("Your start number is greater than stop number, please try again!\n");
    } 
    else {
        printf("Start number is %d and stop number is %d\n", start, stop);
        printf("Sequence from start to stop: ");
        for (int i = start; i <= stop; i++) {
            printf("%d ", i);
        }
        printf("\nThank you.\n");
    }

    return 0;
}

//เพิ่มการตรวจสอบเงื่อนไขของตัวเลขที่ผู้ใช้ป้อนเข้ามา
//เพิ่ม start number = stop number จะเเสดงข้อความาว่า "Your start number is equal to stop number, please try again!" 
//และ start number > stop number จะเเสดงข้อความว่า "Your start number is greater than stop number, please try again!"