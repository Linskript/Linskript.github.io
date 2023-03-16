#include <iostream>
#include <cstdlib>
#include <ctime>


#define N 10
#define Na 10
using namespace std;

//Função com passagem de matriz por parâmetro 

void valbase (string a[10][10]){
for (int xz = 0; xz < 10; xz++){
for (int xc = 0; xc < 10; xc++)	{
a[xz][xc] = "^";
	}
    }
}

void valbaseinimigo (string b[10][10]){
for (int xz = 0; xz < 10; xz++){
for (int xc = 0; xc < 10; xc++)	{
b[xz][xc] = "^";
	}
    }
}


void exibemat (string a[10][10]){
cout << "0 1 2 3 4 5 6 7 8 9";
for (int xz = 0; xz < 10; xz++){
cout << endl;

for (int xc = 0; xc < 10; xc++)	{
cout << a[xz][xc] << " ";
	}
	cout << xz;
    }
}

void exibeini (string b[10][10]){
cout << "0 1 2 3 4 5 6 7 8 9";
for (int xz = 0; xz < 10; xz++){
cout << endl;
for (int xc = 0; xc < 10; xc++)	{
cout << b[xz][xc] << " ";
	}
		cout << xz;
    }

}

void inform() {
    cout << "---------- BATALHA NAVAL! ----------" << endl;
    cout <<" Regras :" << endl;
    cout <<"1- Não coloque os seu navio nas mesma posição!"<< endl;
    cout <<"2- Não olhe as respostas no codigo!" << endl;
    cout <<"3- Divirta-se!" << endl;
    cout << endl;
}

//Registro
typedef struct {
    int embarcrestantes;
    int embarcdestruidas;
} dados;



//Função com passagem de registro por parâmetro 
//Função com return

int dadostruct (dados dpt, int ct1, int ct2){
 dpt.embarcrestantes = ct1 - ct2;
 dpt.embarcdestruidas = ct2;
 
 cout << "O jogador terminou o jogo com " << dpt.embarcrestantes <<" embarcaçoes restantes!" << endl;
 cout << "O inimigo destrui " << dpt.embarcdestruidas <<" embarcaçoes suas!" << endl;
 if (ct1 >> ct2) {
     cout << "E voce ganhou!!" << endl;
 } else {
     cout << "E voce perdeu!" << endl;
 }
cout << endl;

return(0);
}

string embinimigas(string b[N][Na]) {
 b[1][1] = "^​";
 b[1][2] = "^​";
 b[1][3] = "^​";
 b[2][2] = "^​";

 b[3][3] = "^​";
 b[3][4] = "^​";
 b[3][5] = "^​";
 b[4][4] = "^​";

 b[7][7] = "^​";
 b[6][6] = "^​";
 
}


// Função com parâmetro(s) por valor 
void adcvalhidro(int alinha, int acoluna, string a[N][Na]) {
  cout << "Linha" << endl;
 cin >> alinha;
  cout << "Coluna" << endl;
 cin >> acoluna;


     a[alinha][acoluna] ="e";
  a[alinha][acoluna-1] = "e";
  a[alinha][acoluna+1] = "e";
 a[alinha+1][acoluna] ="e";
  
}

void adcvalsub(int alinha, int acoluna, string a[N][Na]) {
  cout << "Linha" << endl;
 cin >> alinha;
  cout << "Coluna" << endl;
 cin >> acoluna;

a[alinha][acoluna] ="e";
}




int main () {
  string a[N][Na], b[N][Na], vc;
  int alinha, acoluna, embres, embdes, linhatiro, colunatiro, aleum, aledois, ct1=0, ct2=0;
 
  bool g = true;
  srand(time(NULL));
  aleum = rand()%10;
  aledois = rand()%10;
  dados dpt;
  valbase(a);
  valbaseinimigo(b);
  embinimigas(b);
  
  inform();
  
  cout << endl;
  cout << "Insira as coordenadas do primeiro hidroavião" << endl;
 adcvalhidro(alinha, acoluna, a);
 exibemat(a);
 
 cout << endl;
   cout << endl;
   
  cout << "Insira as coordenadas do segundo hidroavião" << endl;
 adcvalhidro(alinha, acoluna, a);
 exibemat(a);
 
 cout << endl;
   cout << endl;
   
  cout << "Insira as coordenadas do primeiro submarino" << endl;
 adcvalsub(alinha, acoluna, a);
 exibemat(a);
 
 cout << endl;
  cout << endl;
  
  cout << "Insira as coordenadas do segundo submarino" << endl;
 adcvalsub(alinha, acoluna, a);
 exibemat(a);
 
 cout <<  endl;
 
 cout << "Todas as suas embarcaçoes foram devidamente posiciondas, agora, tente acertar o inimigo!"<< endl;
 

while (g = true) {
    
    cout << endl;
  
    cout << "Seu turno" << endl;
    
    cout << "Linha" << endl;
    cin >> linhatiro;
    cout << "Coluna" << endl;
    cin >> colunatiro;
    
  if (b[linhatiro][colunatiro] == "*") {
      cout << "Voce ja atirou neste local" << endl;
  }
  
  if(b[linhatiro][colunatiro] == "^​"){
      b[linhatiro][colunatiro] = "x";
      cout << "Parabens! voce acertou uma embarcação!" << endl;
    ct1++;
      
  } else {
      b[linhatiro][colunatiro] = "*";
      cout << "Voce Errou o Tiro" << endl;
  }
  
  
  cout << endl;
  
  cout << "Turno do Computador" << endl;
  
  aleum = rand()%9;
  aledois = rand()%9;
  
 
  if(a[aleum][aledois] == "e"){
      a[aleum][aledois] = "x";
      cout << endl;
      cout << "O Computador acertou uma de suas embarcaçoes!" << endl;
    ct2++;
  } else {
      a[aleum][aledois] = "*";
      cout << endl;
      cout << "O Computador Errou o Tiro" << endl;
  }
  
  cout << endl;
  
  cout << "Suas embarcaçoes" << endl;
  exibemat(a);
  
  cout << endl;
  cout << "Embarcaçoes inimigas" << endl;
  exibeini(b);
  
  
  if(ct2 == 10 || ct1 == 10) {
      break;
      cout << endl;
  }
}
cout << endl;
cout << endl;
dadostruct(dpt, ct1, ct2);

  
 
}


