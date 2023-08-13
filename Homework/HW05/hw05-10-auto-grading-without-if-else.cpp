/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , 
    C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax. 
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/

#include<stdio.h>

int main(){

    int ip;

    printf("enter score :\n");
    scanf("%d" , &ip);


    printf("Output:\n");

    switch (ip)
    {
    case 91 : case 92: case 93: case 94: case 95: case 96 : case 97: case 98: case 99: case 100: printf("A !"); break;
    case 80 : case 81: case 82: case 83: case 84: case 85: case 86 : case 87: case 88: case 89: case 90:printf("A !"); break;
    case 79 : case 78: case 77: case 76: case 75: printf("B+ !"); break;
    case 74 : case 73: case 72: case 71: case 70: printf("B !"); break;
    case 69 : case 68: case 67: case 66: case 65: printf("C+ !"); break;
    case 64 : case 63: case 62: case 61: case 60: printf("C !"); break;
    case 59 : case 58: case 57: case 56: case 55: printf("D+ !"); break;
    case 54 : case 53: case 52: case 51: case 50: printf("D !"); break;

    default: printf("F !"); break;
    }


    return 0 ;
}