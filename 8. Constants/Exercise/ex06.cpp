#include <iostream>

int main()
{
    const char hello[] = {'c', 'o', 'n', 's', 't', '\0'};
    // hello[0] = 'n';  // �����ǿ��޸ĵ���ֵ
    // *hello = 'n';
    std::cout << hello << std::endl;
}