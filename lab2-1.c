#include<stdio.h>

int main() {

    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- 장예서, 2021041018 -----]\n\n");

    printf("Size of char: %ld byte\n",sizeof(charType));        //char 타입 변수의 크기는 1byte
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int 타입 변수의 크기는 4bytes
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float 타입 변수의 크기는 4bytes
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double 타입 변수의 크기는 8bytes

    printf("--------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));            //char 타입의 크기는 1byte
    printf("Size of int: %ld bytes\n",sizeof(int));             //int 타입의 크기는 4bytes
    printf("Size of float: %ld bytes\n",sizeof(float));         //float 타입의 크기는 4bytes
    printf("Size of double: %ld bytes\n",sizeof(double));       //double 타입의 크기는 8bytes
    /*
    char 타입의 크기는 1바이트, int와 float 타입의 크기는 4바이트, double 타입의 크기는 8바이트이다.
    이때, 각 타입으로 선언된 변수의 크기가 각 타입의 크기와 같은 것은 자명한 사실이다.
    애초에 sizeof(타입)은 '이 타입으로 선언된 객체는 이 정도의 크기를 할당받게 된다'는 의미이기도 하기 때문이다.
    */

    printf("--------------------------------------\n");

    printf("Size of char*: %ld bytes\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    /*
    각 포인터 타입의 크기는 포인터가 아니었을 때의 타입의 크기와 별개로 항상 4바이트이다.
    실제 VS Code에서 이 코드를 실행한 컴퓨터는 64비트 기기지만 VS Code에서 이용한 gcc 컴파일러가 32비트 프로그램이어서이다.
    (강의자료를 통해 다운받은 MinGW에서 32비트 gcc컴파일러를 제공하였음)
    따라서 이 컴파일러 환경에 따라 주소를 저장하는 포인터는 메모리에서 항상 4바이트를 할당받게 된다.
    1. 우분투(리눅스) 환경에서 MinGW를 통하지 않고 설치한 gcc를 이용해 컴파일하거나
    2. Visual Studio에서 Debug x86 설정을 x64로 바꾸어 같은 코드를 실행했을 경우 포인터 타입의 크기는 8바이트로 할당되었다고 출력된다.
    */

    return 0;

}