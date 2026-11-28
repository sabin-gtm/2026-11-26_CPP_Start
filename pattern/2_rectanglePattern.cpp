// A B C
// D E F
// G H I
// J K L

# include <iostream>
using namespace std;

int main () {
    int r,c;
    char ch = 'A';
    cout << "Enter the number of rows:";
    cin >> r;
    cout << "Enter the number of cols:";
    cin >> c;

    for (int i = 0; i < r; i++) {
         for (int j = 0; j < c; j++) {
            cout << ch << "\t";
            ch++;
         }
         cout << endl;
    }
    return 0;
} 