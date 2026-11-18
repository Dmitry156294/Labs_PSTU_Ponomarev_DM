#include <iostream>
using namespace std;

int first() // +1 к двоичному числу
{
    int head{1}, position{1};
    char arr[] = {' ', '1', '0', '1', '1', ' ', '\0'};
    char alp[] = {'0', '1', ' '};
 
    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
                position += 1;
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 2;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position -= 1;
            }
            else
            {
                arr[position] = alp[1]; // на '0' или ' ' пишем 1
                head = 0;
            }
        }
    }
    cout << "1. " << arr << endl;
    return 0;
}

int second() // умножение двоичного числа на 2 (дописать 0 в конец)
{
    int head{1}, position{1};
    char arr[] = {' ', '1', '0', '1', ' ', ' ', '\0'};
    char alp[] = {'0', '1', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
                position += 1;
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[0];
                head = 0;
            }
        }
    }
    cout << "2. " << arr << endl;
    return 0;
}

int third() // замена a на b и b на a
{
    int head{1}, position{1};
    char arr[] = {' ', 'a', 'b', 'b', 'a', ' ', '\0'};
    char alp[] = {'a', 'b', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                position += 1;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position += 1;
            }
            else if (arr[position] == alp[2])
                head = 0;
        }
    }
    cout << "3. " << arr << endl;
    return 0;
}

int fourth() // чётность числа единиц: в конец пишется 0 (чётно) или 1 (нечётно)
{
    int head{1}, position{1}; // head 1 = пока чётно, head 2 = пока нечётно
    char arr[] = {' ', '1', '0', '1', '1', ' ', ' ', '\0'};
    char alp[] = {'0', '1', ' '};

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0])
                position += 1;
            else if (arr[position] == alp[1])
            {
                position += 1;
                head = 2;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[0];
                head = 0;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[0])
                position += 1;
            else if (arr[position] == alp[1])
            {
                position += 1;
                head = 1;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    }
    cout << "4. " << arr << endl;
    return 0;
}

int main()
{
    first();
    second();
    third();
    fourth();
    return 0;
}