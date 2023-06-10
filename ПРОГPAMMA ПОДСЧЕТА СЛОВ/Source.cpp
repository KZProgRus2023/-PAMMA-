#include <iostream>
#define YES 1
#define NO 0

int main()
{
    char ch;/* введенный символ */
    long nc = 0L;/* число символов */
    int n1 = 0;/* число строк */
    int nw = 0;/* число слов */
    int word = NO;
    while ((ch = std::cin.get()) != EOF)
    {
        nc++; /* подсчет символов */
        if (ch == '\n') nl++;/* подсчет строк */
        if (ch != ' ' && ch != '\n' && ch != '\t' && word == NO)
        {
            word = YES;/* начало нового слова */
            nw++;/* число слов */
        }
        if ((ch == ' ' || ch == '\n' || ch == '\t') && word == YES)
            word = NO;/* достигнут конец слова */
    }
    std::cout << " символов = " << nc << ", слов = " << nw << ", строк = " << nl << std::endl;
    return 0;
}