// C12_24_TypeConversionFanout.cpp
class Orange {};
class Pear {};

class Apple 
{
public:
    operator Orange() const;
    operator Pear() const;
};

// Overloaded eat();
void eat(Orange);
void eat(Pear);

int main()
{
    Apple(c);
    // �ж�� ���غ��� "eat" ʵ��������б�ƥ��:
    // eat(c); // Error: Apple->Orange or Apple->Pear������
}