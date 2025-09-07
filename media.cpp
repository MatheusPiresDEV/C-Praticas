#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a = 1;
    while (true)
    {
        cout << a << " ª ESTAVA COM PREGUIÇA E SONO PARA PENSAR EM NOMES DE VARIÁVEIS MELHORES" << endl;
        a++;
    }

    // double a, b, c, r;
    // double pA = 2.0, pB = 3.0, pC = 5.0,  s = pA + pB + pC;

    // cin >> a;
    // cin >> b;
    // cin >> c;

    // r = (a * pA + b * pB + c * pC) / s;

    // cout << fixed << setprecision(1);
    // cout << "MEDIA = " << r << endl;

    // int a, r, b, c, d;
    // cin >> a >> b >> c >> d;
    // r = (a * b - c * d);
    // cout << "DIFERENCA = " << r << endl;

    // int a, b;
    // double h, r;

    // cin >> a >> b >> h;

    // r = b * h;

    // cout << "NUMBER = " << a << endl;
    // cout << fixed << setprecision(2);
    // // cout << "SALARY = U$ " << r << endl;

    // string nome;
    // double s, v, r;

    // cin >> nome;
    // cin >> s >> v;

    // r = s + (v * 0.15);

    // cout << fixed << setprecision(2);
    // cout << "TOTAL = R$ " << r << endl;

    // int a, b, c, d;
    // double r, r2;

    // cin >> a >> b >> r;
    // cin >> c >> d >> r2;

    // double total = (b * r) + (d * r2);
    // cout << fixed << setprecision(2);
    // cout << "VALOR A PAGAR: R$ " << total << endl;

    // double r, pi = 3.14159, resul;

    // cin >> r;

    // // resul = (4/3.0) * pi * pow (r , 3);

    // // cout << fixed << setprecision (3) << endl;

    // // cout << "VOLUME = " << resul << endl;

    // double a, b, c, trinagulo, circulo, trapezio, quadrado, retangulo;

    // cin >> a >> b >> c;

    // trinagulo = (a * c) / 2;
    // circulo = 3.14159 * pow(c, 2);
    // trapezio = ((a + b) * c) / 2;
    // quadrado = pow(b, 2);
    // retangulo = a * b;
    // cout << fixed << setprecision(3);
    // cout << "TRIANGULO: " << trinagulo << endl;
    // cout << "CIRCULO: " << circulo << endl;
    // cout << "TRAPEZIO: " << trapezio << endl;
    // cout << "QUADRADO: " << quadrado << endl;
    // cout << "RETANGULO: " << retangulo << endl;

    // int a, b, c;
    // cin >> a >> b >> c;

    // int r = (a + b + abs(a - b)) / 2;
    // int r2 = (r + c + abs(r - c)) / 2;

    // cout << r2 << " eh o maior" << endl;

    // int a;
    // float aa, b;

    // cin >>a ;
    // cin >>  aa;

    // b=  a / aa;

    // cout << fixed << setprecision(3);

    // cout << b << " km/l" << endl;

    // float x1, y1, x2, y2, r;

    // cin >> x1 >> y1;
    // cin >> x2 >> y2;

    // r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // cout << fixed << setprecision(4);
    // cout << r << endl;

    // const int x = 60, y = 90;
    // int d;
    // cin >> d;

    // int t = d * 2;

    // cout << t << " minutos" << endl;

    //  int t, v;
    // cin >> t >> v;

    // int d = t * v;
    // double l = d / 12.0;

    // cout << fixed << setprecision(3);
    // cout << l << endl;

    // return 0;

    // int N;
    // cin >> N;

    // cout << N << endl;

    // int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    // for (int i = 0; i < 7; i++) {
    //     int qtd = N / notas[i];
    //     cout << qtd << " nota(s) de R$ " << notas[i] << ",00" << endl;
    //     N %= notas[i]; // Atualiza o valor restante
    // }

    // int s, h, m;

    // cin >> s;

    // h = s / 3600;
    // m = (s % 3600) / 60;
    // s = s % 60;

    // cout << h << ":" << m << ":" << s << endl;

    // int n;
    // cin >> n;

    // int a = n / 365;
    // int b = (n % 365) / 30;
    // int c = (n % 365) % 30;

    // cout << a << " ano(s)" << endl;
    // cout << b << " mes(es)" << endl;
    // cout << c << " dia(s)" << endl;

    //  double a;
    // cin >> a;

    // int b = (int)a;
    // double c = a - b;
    // int c2 = (int)(c * 100 + 0.5);

    // int valores[] = {100, 50, 20, 10, 5, 2};
    // int moedas[]  = {100, 50, 25, 10, 5, 1};

    // cout << "NOTAS:" << endl;
    // for (int i = 0; i < 6; i++) {
    //     int qtd = b / valores[i];
    //     cout << qtd << " nota(s) de R$ " << valores[i] << ".00" << endl;
    //     b %= valores[i];
    // }

    // cout << "MOEDAS:" << endl;
    // cout << b << " moeda(s) de R$ 1.00" << endl;

    // for (int i = 0; i < 6; i++) {
    //     int qtd = c2 / moedas[i];
    //     cout << qtd << " moeda(s) de R$ ";
    //     if (moedas[i] >= 100) cout << "1.00";
    //     else cout << "0." << (moedas[i] < 10 ? "0" : "") << moedas[i];
    //     cout << endl;
    //     c2 %= moedas[i];
    // }

    // return 0;

    // while (true)
    // {
    //    cout << "ESTAVA COM PREGUIÇA E SONO PARA PENASAR EM NOMES DE VARIAVEIS MELHORES" << endl;
    // }

    // ESTAVA COM PREGUIÇA E SONO PARA PENASAR EM NOMES DE VARIAVEIS MELHORES

    // string s;
    // int a, b, c, d, e, f, g, h, i, j;

    // cin >> s >> a;
    // cin >> b >> s >> c >> s >> d;
    // cin >> s >> e;
    // cin >> f >> s >> g >> s >> h;

    // i = (e - a) * 86400 + (f - b) * 3600 + (g - c) * 60 + (h - d);

    // j = i / 86400; i %= 86400;
    // a = i / 3600; i %= 3600;
    // b = i / 60; i %= 60;
    // c = i;

    // cout << j << " dia(s)" << endl;
    // cout << a << " hora(s)" << endl;
    // cout << b << " minuto(s)" << endl;
    // cout << c << " segundo(s)" << endl;
}