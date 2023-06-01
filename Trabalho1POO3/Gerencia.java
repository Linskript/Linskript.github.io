public class Gerencia {
    public static void main(String[] args) {
        
        Carro[] carros = new Carro[] {
          new Carro(1, 4, 2013, "chevrolet", "vermelho", "cruze"),
          new Carro(2, 4, 2013, "chevrolet", "amarelo", "camaro")
        };
        
        Funcionario[] funcionarios = new Funcionario[] {
        new Funcionario(1, 19, 1.71, "Gabriel", "M", "Avenida Brasil"),
        new Funcionario(2, 23, 1.67, "Maria", "F", "Avenida Brasil")   
        };
        
        funcionarios[0].exibefuncionario();
        funcionarios[1].exibefuncionario();
        
        carros[0].exibecarro();
        carros[1].exibecarro();
    }
}