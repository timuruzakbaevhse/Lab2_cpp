#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> numbers;
    // создаем set (множество), в котором будем хранить уникальные числа
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numbers.insert(x);
    }
    cout << numbers.size() << endl;
    // выводим количество уникальных чисел - размер set'а
    return 0;
}