#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    cout << "Введите начальную последовательность символов (например, 10101 или abc): ";
    cin >> input;

    int n = input.length();
    vector<char> tape(n);
    for (int i = 0; i < n; i++) {
        tape[i] = input[i];
    }

    int pos;
    cout << "Введите начальную позицию каретки (от 0 до " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Ошибка: неверная позиция." << endl;
        return 1;
    }

    cout << "Начальная лента: ";
    for (int i = 0; i < n; i++) cout << tape[i];
    cout << endl;

    char cmd;
    while (true) {
        cout << "\nТекущая позиция: " << pos << " | Символ: " << tape[pos] << endl;
        cout << "Команды: R - вправо, L - влево, W - записать, S - выйти\n> ";
        cin >> cmd;

        if (cmd == 'S' || cmd == 's') {
            break;
        } else if (cmd == 'R' || cmd == 'r') {
            if (pos < n - 1) pos++;
            else cout << "Достигнут правый край." << endl;
        } else if (cmd == 'L' || cmd == 'l') {
            if (pos > 0) pos--;
            else cout << "Достигнут левый край." << endl;
        } else if (cmd == 'W' || cmd == 'w') {
            char sym;
            cout << "Введите символ: ";
            cin >> sym;
            tape[pos] = sym;
        } else {
            cout << "Неизвестная команда." << endl;
        }

        cout << "Лента: ";
        for (int i = 0; i < n; i++) cout << tape[i];
        cout << endl;
    }

    cout << "Итоговая лента: ";
    for (int i = 0; i < n; i++) cout << tape[i];
    cout << endl;

    return 0;
}