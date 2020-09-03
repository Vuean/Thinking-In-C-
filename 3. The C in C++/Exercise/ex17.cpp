#include <iostream>
using namespace std;

union Packed{   // Declaration similar to a class
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;
    // The union will be the size of double, 
    // since that's the largest element
    // Selection ends a union(�ֺ�), like a struct
};

int main()
{
    cout << "sizeof(Packed) = " << sizeof(Packed) << endl;
    Packed x;
    x.i = 'c';
    cout << x.i << endl;
    x.d = 3.1415926;
    cout << x.d << endl;

    // һ�ҽ��и�ֵ�� ����������������������ʲô��
    // ������������У� ���Զ�x��һ������ֵ��
    x.f = 2.222;
    // Ȼ�������Ϊһ��int�����
    cout << x.j;    // (���13631)
    cout << x.i;    // (���?)
    // ��������õ���Ϣ��
}