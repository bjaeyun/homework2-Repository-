#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("Size of char: %ld byte\n",sizeof(charType)); //변수 charType 자료형의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(integerType)); //변수 integerType 자료형의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(floatType)); //변수 floatType 자료형의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 변수 doubleType 자료형의 크기를 부호있는 long형 정수로 출력
printf("------------[변재윤] [2022041046]------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char의 크기를 10진수로 4바이트 출력
printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int의 크기를 10진수로 4바이트 출력
printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float의 크기를 10진수로 4바이트 출력
printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double의 크기를 10진수로 4바이트 출력
printf("------------[변재윤] [2022041046]------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*)); //자료형 char 포인터 변수의 크기 출력  
printf("Size of int*: %ld bytes\n",sizeof(int*)); // 자료형 int 포인터 변수의 크기 출력
printf("Size of float*: %ld bytes\n",sizeof(float*)); //자료형 float 포인터 변수의 크기 출력
printf("Size of double*: %ld bytes\n",sizeof(double*)); //자료형 double 포인터 변수의 크기 출력
return 0;
}