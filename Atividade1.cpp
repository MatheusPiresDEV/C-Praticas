
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "X = " << c << endl;
    int a = 1;
    while (true)
    {
        cout << a << " ª ESTAVA COM PREGUIÇA E SONO PARA PENSAR EM NOMES DE VARIÁVEIS MELHORES" << endl;
        a++;
    }

    return 0;
}