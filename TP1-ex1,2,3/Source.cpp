/*TP1
EX. 1*/
// Ciclo de Desenvolvimento de Software
// Escrito por: Jo�o Ara�jo
// Data: 04/03/2020

#include <iostream>
#include <locale>
using namespace std;

int main() {
	locale::global(locale(""));
	cout << "Os passos para o desenvolvimento de SW seguro s�o:" << endl;
	cout << "1. An�lise: Definir o problema tendo em conta a seguran�a." << endl;
	cout << "2. Desenho: Planear a solu��o tendo em conta a seguran�a." << endl;
	cout << "3. Implementa��o: Codificar a solu��o tendo em conta a seguran�a." << endl;
	cout << "4. Testar e depurar tendo em conta a seguran�a." << endl;
	cout << "5. Manter e documentar tendo em conta a seguran�a." << endl;
	return 0;
}
/* EX. 2 - O passo 6 � o errado.
EX. 3 - Modificado acima*/

