#include <stdio.h>
/*
include là lệnh tiền xử lý báo cho trình biên dịch nội dung của tập tin
*/
int main(){
    int x;
    x = 123;
    float gpa = 9.9;
    char grade = 'A';
    char name[] = "Huy Thành";
    printf("%d\n", x);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
   return 0; // trả về trạng thái thoát của chương trình, trả về 0 nếu nó true và trả về 1 nếu false
} 

