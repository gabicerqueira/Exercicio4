//1 – Peça para o usuário digitar um número de 1 a 7, e mostre
//o dia da semana correspondente, por exemplo, se o usuário
//digitar 1, mostre Domingo.Se o usuário digitar 2, mostre
//Segunda - Feira, e assim por diante.Caso o usuário digite
//algum outro número mostre dia invalido.

//#include <iostream>
//#include <locale>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "pt_BR.UTF-8");
//
//	int numero;
//	cout << "Digite um número de 1 a 7 ";
//	cin >> numero;
//
//	switch (numero)
//	{
//	case 1:
//		cout << "Domingo";
//		break;
//	case 2:
//		cout << "Segunda";
//		break;
//	case 3:
//		cout << "Terça";
//		break;
//	case 4:
//		cout << "Quarta";
//		break;
//	case 5:
//		cout << "Quinta";
//		break;
//	case 6:
//		cout << "Sexta";
//		break;
//	case 7:
//		cout << "Sabádo";
//		break;
//	default:
//		cout << "Dia inválido";
//		break;
//	}
//}





//2 – Peça para o usuário informar dois números e a operação
//matemática que ele deseja(+, -, *ou / ), mostre o resultado
//da conta de acordo com a operação que ele escolheu

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int numero1;
	int numero2;
	char operacao;
	cout << "Informe um número";
	cin >> numero1;
	cout << "Informe outro número";
	cin >> numero2;
	cout << "Informe a operação matemática (+, -, * ou /)";
	cin >> operacao;
	int resultado1 = numero1 + numero2;
	int resultado2 = numero1 - numero2;
	int resultado3 = numero1 * numero2;
	int resultado4 = numero1 / numero2;

	switch (operacao)
	{
	case '+':
		cout << resultado1;
		break;
	case '-':
		cout << resultado2;
		break;
	case '*':
		cout << resultado3;
		break;
	case '/':
		cout << resultado4;
		break;
	default:
		cout << "Operação inválida";
		break;
	}
}