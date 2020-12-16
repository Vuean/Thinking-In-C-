// C8_06_ConstReturnValues.cpp
// Constant return by value
// Result cannot be used as a lvalue

class X
{
    int i;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii) { i = ii; }

void X::modify() {i++;}

X f5()
{
    return X();
}

const X f6()
{
    return X();
}

void f7(X& x)
{
    // pass by non-const reference
    x.modify();
}

int main()
{
    f5() = X(1);    // OK -- non-const return value
    f5().modify(); // OK

    // cannot bind non-const lvalue reference of type 'X&' to an rvalue of type 'X'
    // f7(f5());       // Causes warning
    // Causes compile-time errors:
    
    // ����û������Щ����ƥ��ġ�=�������
    // ����������Ϊ��const X = X;
    // f6() = X(1);

    // �������������Ա����"X::modify"�����ݵ������޶���
    // ���������ǣ�const X
    // f6().modify();
    
     // ������"X&"���͵����ð󶨵�"const X"���͵ĳ�ʼֵ�趨��ʱ��
     // �޶���������
    // f7(f6());
}