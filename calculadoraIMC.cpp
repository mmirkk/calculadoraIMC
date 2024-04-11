#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float imc, alt, peso;

    cout << "Ingrese su altura en Mts: ";
    cin >> alt;

    cout << "Ingrese su peso en Kg: ";
    cin >> peso;

    imc = peso/(alt*alt);

    cout << "Su IMC es de: " << setprecision(3) << imc << "kg/m2";

    if (imc < 16.5){
        cout << " - Bajo peso severo" << endl;
    }else if (imc >= 16.5 && imc < 18.5){
        cout << " - Bajo peso" << endl;
    }else if (imc >= 18.5 && imc < 25){
        cout << " - Peso normal" << endl;
    }else if (imc >= 25 && imc < 30){
        cout << " - Sobrepeso" << endl;
    }else if (imc >= 30 && imc < 35){
        cout << " - Obesidad tipo 1 (moderada)" << endl;
    }else if (imc >= 35 && imc < 40){
        cout << " - Obesidad tipo 1 (severa)" << endl;
    }else if (imc >= 40){
        cout << " - Obesidad tipo 3 (morbida)" << endl;
    }else{
        cout << "";
    }

    return 0;
}
