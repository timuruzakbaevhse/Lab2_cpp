#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string postfix; 
    getline(cin, postfix); 
    stack<int> st; // стек для хранения операндов

    
    for (char c : postfix) {
        if (c >= '0' && c <= '9') { // если символ - цифра, то добавляем её в стек в виде числа
            st.push(c - '0');
        }
        else if (c == '+') { // если символ - знак сложения, то извлекаем два последних числа из стека и складываем их, затем результат добавляем в стек
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a + b);
        }
        else if (c == '-') { // если символ - знак вычитания, то извлекаем два последних числа из стека и вычитаем из верхнего числа нижнее, затем результат добавляем в стек
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a - b);
        }
        else if (c == '*') { // если символ - знак умножения, то извлекаем два последних числа из стека и перемножаем их, затем результат добавляем в стек
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a * b);
        }
    }

    // в конце выражения в стеке должен быть результат
    cout << st.top() << endl;
    return 0;
}