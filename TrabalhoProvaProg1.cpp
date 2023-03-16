#include <iostream>

using namespace std;

int main()
{
  float valor, descontoDC = 10, descontoCA = 5 ,juros = 10;
  string escolha, escolhacar;
  int esc, escar;
  descontoDC = descontoDC/100;
  descontoCA = descontoCA/100;
  juros = juros/100;
  
  cout << "Insira o valor a ser pago : " << endl;
  cin >> valor;
  
  cout << endl;
  cout << "           Dinheiro ou cartão?            " << endl;
  cout << "         D : Dinheiro C : Cartão          " << endl;
  cin >> escolha;
  
  if(escolha == "D") {
      esc = 1;
  } else {
      esc = 2;
  }
  
  switch(esc) {
      case 1:
      cout << "Opção : Dinheiro/Cheque" << endl;
      cout << "Valor Final : " << valor-(valor*descontoDC) << endl;
      break;
      
      case 2:
      cout << endl;
      cout << "               Opção : Cartao                 " << endl;
      cout << "       Selecione a Forma De Pagamento      " << endl;
      cout << "V = A vista. DV = Duas vezes. TV = Tres vezes." << endl;
      cin >> escolhacar;
      
      if(escolhacar == "V") {
          escar = 1;
      } else if (escolhacar == "DV") {
          escar = 2;
      } else {
          escar = 3;
      }
      
      switch(escar) {
          case 1:
          cout << endl;
          cout << "Cartão: a vista" << endl;
          cout << "Valor Final : " << valor-(valor*descontoCA) << endl;
          break;
          
          case 2:
          cout << endl;
          cout << "Cartão: Duas Vezes" << endl;
          cout << "Valor Final : " << valor << endl;
          break;
          
          case 3:
          cout << endl;
          cout << "Cartão: Tres Vezes" << endl;
          cout << "Valor Final : " << valor+(valor*juros) << endl;
          break;
          
      }
      
      
      
 
   
  }
}

