public class Carro {
    private int qtdportas, ano, id;
    private String marca, cor, linha;
    
    public Carro(int id, int qtdportas, int ano, String marca, String cor, String linha) {
        this.qtdportas = qtdportas;
        this.ano = ano;
        this.marca = marca;
        this.cor = cor;
        this.linha = linha;
        this.id = id;
    }
    
    public int getId() {
        return id;
    }
    
    public int getQtdportas () {
        return qtdportas;
    }
    
    public int getAno () {
        return ano;
    }
    
    public String getMarca () {
        return marca;
    }
    
    public String getCor () {
        return cor;
    }
    
    public String getLinha() {
        return linha;
    }
    
    public void exibecarro() {
        System.out.println("Linha : " + linha + " Marca : " + marca + " Ano : " + ano + " Quantidade de portas : " + qtdportas + " Cor : " + cor);
    }
}
