// C06: Stash2.h
// With Constructors and Destructors
#ifndef STASH2_H
#define STASH2_H

class Stash
{
    int size;           // Size of each space
    int quantity;       // Number of storage spaces
    int next;           // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char* storage;
    void inflate(int increase);     // inflate��ʹ������ʹ����
public:
    Stash(int size);
    ~Stash();
    int add(void* element);
    void* fetch(int index);         // fetch��ȡ����
    int count();
};

#endif // STASH2_H