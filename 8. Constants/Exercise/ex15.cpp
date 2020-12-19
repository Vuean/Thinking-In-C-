#include <iostream>
using namespace std;

class X
{
    int i;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii) 
{
    i = ii;
    cout << "X(): " << i << endl;
}

void X::modify()
{
    i++;
    cout << "modify() i = " << i << endl;
}

X f5()
{
    return X();
}

const X f6()
{
    return X();
}

void f7(X& _x)
{
    _x.modify();
}

int main()
{
    f5() = X(1);
    f5().modify();
    // cannot bind non-const lvalue reference of type 'X&' to an rvalue of type 'X'
    // f7(f5());

    // û������Щ������ƥ��� "=" ����� -- ����������Ϊ:  const X = X
    // f6() = X(1);

    //���������Ա ���� "X::modify" �����ݵ������޶��� -- ����������:  const X
    // f6().modify();

    // �� "X &" ���͵����ð󶨵� "const X" ���͵ĳ�ʼֵ�趨��ʱ���޶���������
    // f7(f6());
}