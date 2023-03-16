
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;



void creditos() {
    cout <<"Gabriel Dolinski 2021"<< endl;
    cout <<"Trabalho final de Programação de computadores 2"<< endl;
    cout << endl;
    cout << "Uma vez um velho sabio disse : Programar pode ser dificil as vezes, voce pode procurar por horas como solucionar um problema mas por complicar demais voce acaba por perder muito tempo, sim, este sou eu terminando o trabalho, fiquei uma hora procurando erro e no final era um ponto e virgula." << endl;
}


typedef struct{
    string mod;
    string material;
    float preco;
    float qtdest;
} RegProd;


int criaproduto() {
    RegProd Prod;
    ofstream controle ("control.csv", ios::app);
    
     if (!controle){
 cout << "Os dados não podem ser acessados" << endl;
 return -1;
 }

cout << endl; 

 getline(cin, Prod.mod); // não tenho a minima ideia o porque, mas, o programa só le o modelo do modelo se eu declarar o getline duas vezes.
 cout << "Informe o modelo da peca" << endl;
 getline(cin, Prod.mod);
 controle << Prod.mod << endl;
 
 
 cout << endl;
 
 cout << "Informe o material da peca" << endl;
 getline(cin, Prod.material);
 controle << Prod.material << endl;
 
 cout << endl;
 
 cout << "Informe o preco da peca" << endl;
 cin >> Prod.preco;
 controle<< Prod.preco << endl;
 
 cout << "Informe a quantidade em estoque" << endl;
 cin >> Prod.qtdest;
 controle<< Prod.qtdest << endl;
 
 controle.close();
 return 0;
}

int mostraproduto() {
    
    cout << endl;
 cout << "Confirmação" << endl;
 ifstream controle ("control.csv"); 
 if (!controle){
 cout << "O arquivo não pode ser aberto" << endl;
 return -1;
 }
 
RegProd Prod;
  
 while (!controle.eof()){


cout << endl;

 cout << "Modelo da peca :" << endl;
 getline(controle, Prod.mod);
cout << Prod.mod << endl;
 

 
 cout << "Material da peca :" << endl;
 getline(controle, Prod.material);
cout << Prod.material << endl;
 
 
 cout << "Preco da peca :" << endl;
 cout << Prod.preco << endl;
 
 
 cout << "Quantidade em estoque :" << endl;
 cout << Prod.qtdest << endl;
 
 controle.close();
 return 0;
}
}

int buscaproduto(int n) {
    fstream controle("control.csv");
    RegProd Rep;
    string ph1, ph2 ,itemproc;
    
    cin >> itemproc ;
    
for(int x = 0; x<4*n; x++) {
    getline(controle, ph1);
    if(ph1 == itemproc) {
        for(int x = 0; x<3; x++) {
   getline(controle, ph2);
    cout << ph2 << endl;
        }
    }
}
}


int menu() {
    
    int escolha, qtdprod;
cout << "         --- Olá!, seja bem vindo ao controle de vendas da loja Memo! ---" << endl;
cout << "                        -- por favor escolha uma opcao. -- " << endl;
cout << "            [1] Registrar Produto,  [2] Buscar Produto,  [3] Creditos " << endl;
cin >> escolha;

    switch(escolha) {
    case 1:
    
    cout << endl;
    cout << "                -- Quantos produtos deseja criar? --" << endl;
    cin >> qtdprod;
    
    for(int x = 0; x < qtdprod; x++) {
        criaproduto();
        mostraproduto();
        
    }


    break;
    case 2:
    buscaproduto(qtdprod);
    break;
    case 3:
    creditos();
    break;
    
    case 4:
    break;
  default:
cout << "Opção invalida!" << endl;
    break;
}
cout << endl;
cout << "                      -- Deseja Repetir a Operação? --" << endl;
cout << "                              [1]Sim     [2]Não " << endl;
int esc;
cin >> esc;
switch(esc) {
    case 1:
    menu();
    break;
    
    case 2:
    return 0;
    break;
    
    default:
    cout << "Opção invalida!" << endl;
    break;
    
}
}




int main() {
menu();
}

