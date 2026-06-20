#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int TOTAL_MOTOS = 10;
    float faturamento[TOTAL_MOTOS] = {0};

    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "0 - Finalizar o dia\n";
        cout << "1 - Informar entrega\n";
        cout << "2 - Listar faturamentos\n";
        cout << "3 - Listar comissoes\n";
        cout << "4 - Motoboy destaque\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 0:
                cout << "\nDia finalizado!\n";
                break;

            case 1: {
                int moto;
                float valor;

                cout << "Numero do motoboy (1 a 10): ";
                cin >> moto;

                if (moto < 1 || moto > 10) {
                    cout << "Motoboy invalido!\n";
                    break;
                }

                cout << "Valor da entrega: R$ ";
                cin >> valor;

                faturamento[moto - 1] += valor;

                cout << "Entrega registrada com sucesso!\n";
                break;
            }

            case 2: {
                float total = 0;

                cout << fixed << setprecision(2);

                cout << "\n=== FATURAMENTOS ===\n";

                for (int i = 0; i < TOTAL_MOTOS; i++) {
                    cout << "Moto: " << i + 1
                         << " - R$ " << faturamento[i] << endl;

                    total += faturamento[i];
                }

                cout << "Total: R$ " << total << endl;
                break;
            }

            case 3: {
                float totalComissoes = 0;

                cout << fixed << setprecision(2);

                cout << "\n=== COMISSOES ===\n";

                for (int i = 0; i < TOTAL_MOTOS; i++) {
                    float comissao = faturamento[i] * 0.10;

                    cout << "Moto: " << i + 1
                         << " - Comissao: R$ "
                         << comissao << endl;

                    totalComissoes += comissao;
                }

                cout << "Total de comissoes: R$ "
                     << totalComissoes << endl;

                break;
            }

            case 4: {
                int destaque = 0;

                for (int i = 1; i < TOTAL_MOTOS; i++) {
                    if (faturamento[i] > faturamento[destaque]) {
                        destaque = i;
                    }
                }

                cout << fixed << setprecision(2);

                cout << "\nMoto que mais faturou: "
                     << destaque + 1
                     << " - R$ "
                     << faturamento[destaque]
                     << endl;

                break;
            }

            default:
                cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}