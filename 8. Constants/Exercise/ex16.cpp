void t(int*) {}

void u(const int* cip)
{
    // ���ʽ�����ǿ��޸ĵ���ֵ
    // *cip = 2;
    int i = *cip;
    // "const int *" ���͵�ֵ�������ڳ�ʼ�� "int *" ���͵�ʵ��
    // int* ip2 = cip;
}