#include <iostream>
using namespace std;

int main() {
    char ch = 'k';
    char answerd = 'k';
    cout << "Estoy pensando en una letra entre la A y la Z" << endl;
    cout << "¿Puedes adivinarla? \n: ";
    cin >> answerd;

    if(ch == answerd) cout << "**Correcto**" << endl;
    else if (ch < answerd)cout<<"Te quedastes por debajo"<<endl;
    else cout<<"Te quedastes por Arriva"<<endl;

    return 0;
}
