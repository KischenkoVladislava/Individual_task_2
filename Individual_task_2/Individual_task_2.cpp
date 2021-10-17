#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, x, w, y;
    cout << "Для решения w = sqrt(x^2+b)-(b^2)*((sin(x+a))^3)/ x и " << endl << "y = ((cos(x ^ 3)) ^ 2) - x / sqrt(a ^ 2 + b ^ 2) введите значения парамеьров a, b и x" << endl;
    cin >> a >> b >> x;
    while (x == 0)
    {
        cout << "При делении на ноль получается неопределенное выражение. Введите значения парамеьров a, b и x снова" << endl;
        cin >> a >> b >> x;
    }
    w = sqrt(x * x + b) - (b * b) * ((sin(x + a)) * (sin(x + a)) * (sin(x + a))) / x;
    y = ((cos(x * x * x)) * (cos(x * x * x))) - x / sqrt(a * a + b * b);
    cout << "Ответ:" << w << ", " << y;
    return 0;
}