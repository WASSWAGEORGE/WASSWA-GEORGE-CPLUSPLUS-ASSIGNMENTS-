#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string key = "ABCD"; 
    string answers;

    cout << "Enter answers: ";
    cin >> answers;

    int score = 0;
    for (int i = 0; i < key.length(); i++) {
        if (answers[i] == key[i]) {
            score++;
        }
    }

    cout << score << " out of " << key.length() << endl;
    return 0;
}