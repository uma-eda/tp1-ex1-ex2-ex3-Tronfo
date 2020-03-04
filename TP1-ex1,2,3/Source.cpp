/*TP1
EX. 1*/
// Ciclo de Desenvolvimento de Software
// Escrito por: João Araújo
// Data: 04/03/2020

#include <iostream>
#include <locale>
using namespace std;

int main() {
	locale::global(locale(""));
	cout << "Os passos para o desenvolvimento de SW seguro são:" << endl;
	cout << "1. Análise: Definir o problema tendo em conta a segurança." << endl;
	cout << "2. Desenho: Planear a solução tendo em conta a segurança." << endl;
	cout << "3. Implementação: Codificar a solução tendo em conta a segurança." << endl;
	cout << "4. Testar e depurar tendo em conta a segurança." << endl;
	cout << "5. Manter e documentar tendo em conta a segurança." << endl;
	return 0;
}
/* EX. 2 - O passo 6 é o errado.
EX. 3 - Modificado acima*/

