#include <iostream>
#include <string>
#include <vector>
#define MAX_SIZE 1e5

using namespace std;

int main()
{   
    vector<int> grades;
    vector<string> names;
    int counter = 0;

    int temp_grade;
    string temp_name;

    while (std::cin >> temp_grade >> temp_name ) {
        grades.push_back(temp_grade);
        names.push_back(temp_name);
        counter++;
    }

    for (int i = 9; i < 12; i++) {
        for (int j = 0; j < counter; j++) {
            if (grades[j] == i) {
                cout << grades[j] << " " << names[j] << endl;
            }
        }
    }
}
