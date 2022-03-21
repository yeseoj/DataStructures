#include<stdio.h>

int main() {

    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- �忹��, 2021041018 -----]\n\n");

    printf("Size of char: %ld byte\n",sizeof(charType));        //char Ÿ�� ������ ũ��� 1byte
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int Ÿ�� ������ ũ��� 4bytes
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float Ÿ�� ������ ũ��� 4bytes
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double Ÿ�� ������ ũ��� 8bytes

    printf("--------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));            //char Ÿ���� ũ��� 1byte
    printf("Size of int: %ld bytes\n",sizeof(int));             //int Ÿ���� ũ��� 4bytes
    printf("Size of float: %ld bytes\n",sizeof(float));         //float Ÿ���� ũ��� 4bytes
    printf("Size of double: %ld bytes\n",sizeof(double));       //double Ÿ���� ũ��� 8bytes
    /*
    char Ÿ���� ũ��� 1����Ʈ, int�� float Ÿ���� ũ��� 4����Ʈ, double Ÿ���� ũ��� 8����Ʈ�̴�.
    �̶�, �� Ÿ������ ����� ������ ũ�Ⱑ �� Ÿ���� ũ��� ���� ���� �ڸ��� ����̴�.
    ���ʿ� sizeof(Ÿ��)�� '�� Ÿ������ ����� ��ü�� �� ������ ũ�⸦ �Ҵ�ް� �ȴ�'�� �ǹ��̱⵵ �ϱ� �����̴�.
    */

    printf("--------------------------------------\n");

    printf("Size of char*: %ld bytes\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    /*
    �� ������ Ÿ���� ũ��� �����Ͱ� �ƴϾ��� ���� Ÿ���� ũ��� ������ �׻� 4����Ʈ�̴�.
    ���� VS Code���� �� �ڵ带 ������ ��ǻ�ʹ� 64��Ʈ ������� VS Code���� �̿��� gcc �����Ϸ��� 32��Ʈ ���α׷��̾�̴�.
    (�����ڷḦ ���� �ٿ���� MinGW���� 32��Ʈ gcc�����Ϸ��� �����Ͽ���)
    ���� �� �����Ϸ� ȯ�濡 ���� �ּҸ� �����ϴ� �����ʹ� �޸𸮿��� �׻� 4����Ʈ�� �Ҵ�ް� �ȴ�.
    1. �����(������) ȯ�濡�� MinGW�� ������ �ʰ� ��ġ�� gcc�� �̿��� �������ϰų�
    2. Visual Studio���� Debug x86 ������ x64�� �ٲپ� ���� �ڵ带 �������� ��� ������ Ÿ���� ũ��� 8����Ʈ�� �Ҵ�Ǿ��ٰ� ��µȴ�.
    */

    return 0;

}