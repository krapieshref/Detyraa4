
#include <iostream>
#include <iomanip>

using namespace std;


void menuKryesore();
void menaxhoNotat();


int main() {

    menuKryesore();

    return 0;
}

void menuKryesore() {
    int zgjedhja;
    do {
        cout << "\nVegla per Menaxhimin e Notave te Studenteve(VMNS)\n";

        cout << "3. Dil\n";
        cout << "Zgjedhni: ";
        cin >> zgjedhja;

        switch (zgjedhja) {
        case 3: cout << "Mirupafshim!\n"; break;
        default: cout << "Zgjedhja nuk u gjend ne sherbimet tona. Provoni perseri.\n";
        }
    } while (zgjedhja != 3);
}