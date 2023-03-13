#include <iostream>
#include <string>
#include <stack>

int main() {
    std::string brackets;
    std::cin >> brackets;

    std::stack<char> stack;

    for (char bracket : brackets) {
        switch (bracket) {
        case '(':
        case '[':
        case '{':
            stack.push(bracket);
            break;
        case ')':
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            }
            else {
                std::cout << "no" << std::endl;
                return 0;
            }
            break;
        case ']':
            if (!stack.empty() && stack.top() == '[') {
                stack.pop();
            }
            else {
                std::cout << "no" << std::endl;
                return 0;
            }
            break;
        case '}':
            if (!stack.empty() && stack.top() == '{') {
                stack.pop();
            }
            else {
                std::cout << "no" << std::endl;
                return 0;
            }
            break;
        }
    }

    if (stack.empty()) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
