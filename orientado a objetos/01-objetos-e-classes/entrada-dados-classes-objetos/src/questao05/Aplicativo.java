public class Aplicativo {
    public static void main(String[] args) {
        Funcionario funcionario = new Funcionario();

        funcionario.nome = "Carlos Souza";
        funcionario.matricula = "X1234";
        funcionario.salario = 3500.00;

        System.out.println("Nome do funcionário: " + funcionario.nome);
        System.out.println("Matrícula: " + funcionario.matricula);
        System.out.println("Salário: R$" + funcionario.salario);
    }
}
