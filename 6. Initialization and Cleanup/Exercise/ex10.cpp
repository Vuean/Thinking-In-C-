#include <iostream>
using  namespace std;

class A
{
    int a;
public:
    A(int value);
    void setA(int value);
    void print();
};

A::A(int value)
{
    a = value;
}

void A::setA(int value)
{
    a = value;
}

void A::print()
{
    cout << "The value is: " << a << endl;
}

int main()
{
    // ��ʱ����дA a;��ᱨ��û��Ĭ�Ϲ��캯��
    A a(0);
    a.setA(5);
    a.print();
}