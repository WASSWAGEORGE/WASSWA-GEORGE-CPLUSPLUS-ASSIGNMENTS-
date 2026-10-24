#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string card;
    cout << "Card number: ";
    cin >> card;

    int total = 0;
    int count = 0;

    for (int i = card.length() - 1; i >= 0; i--) {
        int n = card[i] - '0';

        if (count % 2 == 1) {  
                      n = n * 2;
            if (n > 9) {
                n = n - 9;
            }
        }
        total += n;
        count++;
    }


    if (total % 10 == 0) 
    {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}