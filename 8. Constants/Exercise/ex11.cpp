int d = 1;
const int e = 2;
int* u = &d;

// "const int*"���͵�ֵ�������ڳ�ʼ��"int*"���͵�ʵ��
// int* v = &e;

// ֱ��ǿ������ת��
int* w = (int*)(&e);