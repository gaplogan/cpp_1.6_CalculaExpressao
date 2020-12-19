#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double A, B, C, D, F, R;

    // {Leitura das vari�veis de entrada}
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
    cout << "Digite o valor de D: ";
    cin >> D;

    //valida o valor de F (n�o pode ser zero)
    do
    {
        cout << "Digite o valor de F: ";
        cin >> F;
        cout << endl; //salta linha
    } while (F == 0); //fim da valida��o da vari�vel F

    //{Faz os c�lculos}

    R = A - B * (C + pow(D, 2)) / F;
    cout << endl; //salta linha

    // {Apresenta o resultado}
    cout << A << " - " << B << " * (" << C << " + " << D << "�) / " << F << " = " << R;
    return 0;
}