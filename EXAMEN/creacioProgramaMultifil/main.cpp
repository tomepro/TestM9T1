#include <iostream>
#include <thread>

using namespace std;


// Imarells 
void crearImparells() {
    for (int i = 1; i <= 10; i += 2) {
        cout << "Imparell: " << i << "\n";
    }
}

// Parells
void crearParells() {
    for (int i = 2; i <= 10; i += 2) {
        cout << "Parell: " << i << "\n";
    }
}

int main() {
    // Aqui creu els fills
    thread filImparell(crearImparells);
    thread filParell(crearParells);

    // I aqui espero a que els fills acabin
    filImparell.join();
    filParell.join();

    cout << "Tots els nuemeros han estat printats" << "\n";

    return 0;
}
