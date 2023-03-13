#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string postfix; 
    getline(cin, postfix); 
    stack<int> st; // ���� ��� �������� ���������

    
    for (char c : postfix) {
        if (c >= '0' && c <= '9') { // ���� ������ - �����, �� ��������� � � ���� � ���� �����
            st.push(c - '0');
        }
        else if (c == '+') { // ���� ������ - ���� ��������, �� ��������� ��� ��������� ����� �� ����� � ���������� ��, ����� ��������� ��������� � ����
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a + b);
        }
        else if (c == '-') { // ���� ������ - ���� ���������, �� ��������� ��� ��������� ����� �� ����� � �������� �� �������� ����� ������, ����� ��������� ��������� � ����
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a - b);
        }
        else if (c == '*') { // ���� ������ - ���� ���������, �� ��������� ��� ��������� ����� �� ����� � ����������� ��, ����� ��������� ��������� � ����
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(a * b);
        }
    }

    // � ����� ��������� � ����� ������ ���� ���������
    cout << st.top() << endl;
    return 0;
}