#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //Definir Variaveis
    char l1, l2, l3, l4, l5;
    int pin;
    int c1,c2,c3,c4,c5;
    char opcao;

    //Utilizador escolhe o que quer fazer
    cout << "Encriptar ou Desencriptar? (E,D) " << endl;
    cin >> opcao;

    //Logica
    switch (opcao)
    {
        case 'E': cout << "Indroduzir 5 Letras: ";
        cin >> l1 >> l2 >> l3 >> l4 >> l5; 
        cout << "Introduzir PIN: "; 
        cin >> pin; 
        c1 = l1 * pin, c2 = l2 * pin, c3 = l3 * pin, c4 = l4 * pin, c5 = l5 * pin; 
        cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl; break;

        case 'e': cout << "Indroduzir 5 Letras: ";
            cin >> l1 >> l2 >> l3 >> l4 >> l5;
            cout << "Introduzir PIN: ";
            cin >> pin;
            c1 = l1 * pin, c2 = l2 * pin, c3 = l3 * pin, c4 = l4 * pin, c5 = l5 * pin;
            cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl; break;

        case 'D': cout << "Indroduzir 5 Codigos: ";
            cin >> c1 >> c2 >> c3 >> c4 >> c5;
            cout << "Introduzir PIN: ";
            cin >> pin;
            l1 = c1 / pin, l2 = c2 / pin, l3 = c3 / pin, l4 = c4 / pin, l5 = c5 / pin;
            cout << l1 << l2 << l3 << l4 << l5 << endl; break;

        case 'd': cout << "Indroduzir 5 Codigos: ";
            cin >> c1 >> c2 >> c3 >> c4 >> c5;
            cout << "Introduzir PIN: ";
            cin >> pin;
            l1 = c1 / pin, l2 = c2 / pin, l3 = c3 / pin, l4 = c4 / pin, l5 = c5 / pin;
            cout << l1 << l2 << l3 << l4 << l5 << endl; break;
    
        default:cout << "Operacao Invalida" << endl;
    }
    //Aguardar
    cin.get();
}

