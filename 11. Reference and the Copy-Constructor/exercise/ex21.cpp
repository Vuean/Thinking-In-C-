#include <iostream>
using namespace std;

class A
{
public:
    A() {}
private:
// ����ʱ����ʾ�������캯���������������ɷ���
    A(const A& tmp);
};

void f(A a) {}

int main()
{
    A a;
    f(a);
}