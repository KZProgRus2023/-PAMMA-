#include <iostream>
#define YES 1
#define NO 0

int main()
{
    char ch;/* ��������� ������ */
    long nc = 0L;/* ����� �������� */
    int n1 = 0;/* ����� ����� */
    int nw = 0;/* ����� ���� */
    int word = NO;
    while ((ch = std::cin.get()) != EOF)
    {
        nc++; /* ������� �������� */
        if (ch == '\n') nl++;/* ������� ����� */
        if (ch != ' ' && ch != '\n' && ch != '\t' && word == NO)
        {
            word = YES;/* ������ ������ ����� */
            nw++;/* ����� ���� */
        }
        if ((ch == ' ' || ch == '\n' || ch == '\t') && word == YES)
            word = NO;/* ��������� ����� ����� */
    }
    std::cout << " �������� = " << nc << ", ���� = " << nw << ", ����� = " << nl << std::endl;
    return 0;
}