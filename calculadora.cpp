#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "----------------------" << endl;
        cout << "|    Calculadora     |" << endl;
        cout << "----------------------" << endl;
        cout << "|                    |" << endl;
        cout << "| 1. Suma (+)        |" << endl;
        cout << "| 2. Resta (-)       |" << endl;
        cout << "| 3. Multiplicación (*) |" << endl;
        cout << "| 4. División (/)    |" << endl;
        cout << "|                    |" << endl;
        cout << "----------------------" << endl;

        int option;
        cout << "Seleccione una operación (1/2/3/4): ";
        cin >> option;

        cout << "Ingrese el primer número: ";
        cin >> num1;

        cout << "Ingrese el segundo número: ";
        cin >> num2;

        switch (option) {
            case 1:
                op = '+';
                result = num1 + num2;
                break;
            case 2:
                op = '-';
                result = num1 - num2;
                break;
            case 3:
                op = '*';
                result = num1 * num2;
                break;
            case 4:
                op = '/';
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: No se puede dividir por cero." << endl;
                    continue;
                }
                break;
            default:
                cout << "Opción no válida." << endl;
                continue;
        }

        cout << "----------------------" << endl;
        cout << "El resultado de " << num1 << " " << op << " " << num2 << " es: " << result << endl;
        cout << "----------------------" << endl;

        cout << "¿Desea hacer otra operación? (y/n): ";
        cin >> choice;
    }

    cout << "Gracias por usar la calculadora. ¡Hasta luego!" << endl;

    return 0;
}

