#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	const int TOTAL_MOTOS = 10;
	float faturamento[TOTAL_MOTOS] = {0};
	int opcao;
	do {
		cout <<"\n==== MENU ====\n";
		cout <<"0 - Finalizar o dia\n";
		cout <<"1 - Informar entrega\n";
		cout <<"2 - Listar faturamento\n";
		cout <<"3 - Listar comissoes\n";
		cout <<"4 - Motoboy destaque\n";
		cout <<"Escolha uma opcao: ";
		cin >> opcao;
		switch (opcao; {
			
			case 0;
			cout << "\nDia finalisado !\n";
			break;
		
		case 1; {
			int moto;
			float valor;
			
			cout <<"Numero do motoboy (1 a 10): ";
			cin >> moto;
			
			if (moto < 1 || moto > 10) {
				cout << "Motoboy invalido!\n";
				break;
			}
			cout << "Valor da entrega: R$";
			cin >> valor;
			faturamento - 1} 
{
	
	return 0;
}