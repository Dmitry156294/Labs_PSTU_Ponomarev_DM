#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[256];
    int i, len = 0, min = 256;
    cout << "Введите строку: ";
    cin.getline(s, 256);
    for (i = 0; i <= strlen(s); i++)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            len++;
        }
        else
        {
            if (len > 0 && len < min)
            {
            min = len;
            }
        len = 0;
        }
    }
    cout << "Длина самого короткого слова: " <<(min);
    return 0;
}