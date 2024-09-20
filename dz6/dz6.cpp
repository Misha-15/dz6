//1 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите целое число: ";
    cin >> num;

    cout << "числа, на которые делится " << num << '\n';
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}



//2 задание
#include <iostream>
using namespace std;

int main() {
    int low = 0, high = 1000, mid;
    char response;

    cout << "загадайте число от 0 до 1000\n";

    while (low <= high) {
        mid = (low + high) / 2;
        cout << "ваше число больше меньше или равно " << mid << "? (введите '>', '<' или '=')\n";
        cin >> response;

        if (response == '=') {
            cout << "ваше число: " << mid << '\n';
            break;
        }
        else if (response == '>') {
            low = mid + 1;
        }
        else if (response == '<') {
            high = mid - 1;
        }
    }

    return 0;
}


//3 задание
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double stipend, expenses, total = 0;
    cout << "введите сумму стипендии (N): ";
    cin >> stipend;
    cout << "введите ежемесячные расходы (M): ";
    cin >> expenses;

    for (int month = 1; month <= 10; ++month) {
        total += expenses - stipend;
        expenses *= 1.03; 
    }

    cout << "необходимая сума для учебного года: " << total << " гривен\n";
    return 0;
}


//4 задание
#include <iostream>
using namespace std;

void drawLayer(int height) {
    int width = 2 * height - 1; 
    for (int i = 1; i <= height; i++) {
        int stars = 2 * i - 1;
        int spaces = (width - stars) / 2;
        for (int j = 0; j < spaces; j++) cout << ' ';
        for (int j = 0; j < stars; j++) cout << '*';
        cout << '\n';
    }
}

int main() {
    int layers, height;
    cout << "введите количество ярусов елочки: ";
    cin >> layers;

    for (int i = 1; i <= layers; i++) {
        cout << "Введите высоту " << i << "-го яруса: ";
        cin >> height;
        drawLayer(height);
    }
    return 0;
}
