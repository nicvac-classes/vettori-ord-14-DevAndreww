#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    float t;
    string s;
    bool scambio;

    cout << "Quanti studenti ci sono in una classe?" << endl;
    cin >> n;
    float voti[n];
    string nomi[n];

    i = 0;
    while (i < n) {
        cout << "Scrivi rispettivamente il nome e il voto dello studente." << endl;
        cin >> nomi[i];
        cin >> voti[i];
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        j = 0;
        scambio = false;
        while (j <= n - 2 - i) {
            if (voti[j] > voti[j + 1]) {
                t = voti[j];
                voti[j] = voti[j + 1];
                voti[j + 1] = t;
                s = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = s;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << nomi[i] << " " << voti[i] << endl;
        i = i + 1;
    }
    
}
