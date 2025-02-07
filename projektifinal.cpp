
#include <iostream>
#include <iomanip>

using namespace std;


void menuKryesore();
void menaxhoNotat();


int main() {

    menuKryesore();

    return 0;
}
void Kalkulatori() {

    char perserit;
do
{

    cout << "\n--- Kalkulatori ---\n";
    int numriNotave
    cout << "Shkruani numrin e notave qe keni: ";
    cin >> numriNotave;
    if (numriNotave <= 0) {
    cout << "Numri i notave duhet te jete me i madh se zero.\n";
     return;
    }

    double shumaNotave = 0;
    int shumaECTS = 0;

    for (int i = 0; i < numriNotave; ++i) { 
        double nota;
        int ects;

        do {
            cout << "Shkruani noten e " << i + 1 << ": ";
            cin >> nota;

            if (nota < 0)
                cout << "Nuk ka note negative";
            else if (nota < 6)
                cout << "Ju nuk keni kaluar lenden!";
            else if (nota > 10)
                cout << "Nuk ekziston kjo note!";

        } while (nota < 6 || nota > 10);
        do {
            cout << "Shkruani ECTS per kete lende ( 7, 6, ose 5): ";
            cin >> ects;
            if (ects != 7 && ects != 6 && ects != 5) {
                cout << "Nuk ka lende me keto ECTS!\n";
            }
        } while (ects != 7 && ects != 6 && ects != 5);

        shumaNotave += nota;
        shumaECTS += ects;
    }

}

