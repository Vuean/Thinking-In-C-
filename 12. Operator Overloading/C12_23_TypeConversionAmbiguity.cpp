// C12_23_TypeConversionAmbiguity.cpp
class Orange;   // Class declaration

class Apple
{
public:
    operator Orange() const;    // Convert Apple to Orange
};

class Orange
{
public:
    Orange(Apple);  // Convert Apple to Orange
};

void f(Orange) {}

int main()
{
    Apple a;
    // Ӧ�ö���û�����Ĵ� "Apple" �� "Orange" ��ת��
    // f(a);   // Error: ambiguous conversion
}