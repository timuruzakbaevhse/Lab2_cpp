#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> koloda_1;
    vector<int> koloda_2;

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        koloda_1.push_back(x);
    }

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        koloda_2.push_back(x);
    }

    int counter = 0;

    int card1;
    int card2;

    while (counter <= 1e6 && !koloda_1.empty() && !koloda_2.empty()) {

        card1 = koloda_1.front();
        card2 = koloda_2.front();
        koloda_1.erase(koloda_1.begin());
        koloda_2.erase(koloda_2.begin());

        if (card1 == 9 && card2 == 0) {
            koloda_2.push_back(card1);
            koloda_2.push_back(card2);
        }
        else if (card2 == 9 && card1 == 0) {
            koloda_1.push_back(card1);
            koloda_1.push_back(card2);
        }
        else if (card1 > card2) {
            koloda_1.push_back(card1);
            koloda_1.push_back(card2);
        }
        else if (card2 > card1) {
            koloda_2.push_back(card1);
            koloda_2.push_back(card2);
        }

        counter++;
    }

    if (koloda_2.empty()) {
        cout << "first " << counter;
    }
    else if (koloda_1.empty()) {
        cout << "second " << counter;
    }
    else {
        cout << "botva";
    }


    return 0;
}