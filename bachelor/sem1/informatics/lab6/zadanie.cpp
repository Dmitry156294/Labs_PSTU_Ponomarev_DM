#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[256];
    cout << "Строка: ";
    gets(str);

    int dlina = strlen(str);
    if (str[dlina - 1] == '.') str[dlina - 1] = '\0';

    char slova[100][256];
    int kolvo = 0;
    char* ukaz = strtok(str, " ");
    while (ukaz != NULL)
    {
        strcpy(slova[kolvo], ukaz);
        kolvo++;
        ukaz = strtok(NULL, " ");
    }

    for (int i = 0; i < kolvo - 1; i++)
        for (int j = 0; j < kolvo - 1 - i; j++)
            if (slova[j][0] >= '0' && slova[j][0] <= '9' &&
                slova[j+1][0] >= '0' && slova[j+1][0] <= '9' &&
                strcmp(slova[j], slova[j+1]) < 0)
            {
                char bufer[256];
                strcpy(bufer, slova[j]);
                strcpy(slova[j], slova[j+1]);
                strcpy(slova[j+1], bufer);
            }

    for (int i = 0; i < kolvo; i++)
        cout << slova[i] << " ";
    cout << endl;
    return 0;
}