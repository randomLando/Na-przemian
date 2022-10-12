#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
        cout << t[i] << " ";
        cout << endl;

    for (int i = 0; i < n; i++)
        if (i % 2 != 0)
        cout << t[i] << " ";
        cout << endl;
}
