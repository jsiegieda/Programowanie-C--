#include <iostream>

using namespace std;


class poczta
{
public:
    string nadawca;
    string odbiorca;
    string temat;
    string tresc;
};

void wypisz(poczta x) {
    cout << "Nadawca : " << endl;
    cin >> x.nadawca;
    cout << "Odbiorca : " << endl;
    cin >> x.odbiorca;
    cout << "Temat : " << endl;
    cin >> x.temat;
    cout << "Tresc : " << endl;
    cin >> x.tresc;
}

int main()
{
    poczta x;
    wypisz(x);

    return 0;
}
