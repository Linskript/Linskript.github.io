public class Funcionario {
    private int idade, id;
    private double altura;
    private String nome, sexo, endereço;
    
    
    public Funcionario(int id, int idade, double altura, String nome, String sexo, String endereço) {
        this.idade = idade;
        this.altura = altura;
        this.nome = nome;
        this.sexo = sexo;
        this.endereço = endereço;
        this.id = id;
    }
    
    public int getId() {
        return id;
    }
    
    public int getIdade () {
        return idade;
    }
    
    public double getAltura () {
        return altura;
    }
    
    public String getNome () {
        return nome;
    }
    
    public String getSexo () {
        return sexo;
    }
    
   public String getEndereço () {
       return endereço;
   }
   
   public void exibefuncionario () {
       System.out.println("Nome : " + nome + " Idade : " + idade + " Sexo : " + sexo + " Altura : " + altura + " Endereço : " + endereço);
   }
}