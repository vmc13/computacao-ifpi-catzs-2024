public class Aplicativo {
    public static void main(String[] args) {
        Cliente cliente = new Cliente();

        cliente.nome = "Maria Silva";
        cliente.cpf = "123.456.789-00";
        cliente.codigo = 101;

        System.out.println("Nome do cliente: " + cliente.nome);
        System.out.println("CPF: " + cliente.cpf);
        System.out.println("Código: " + cliente.codigo);
    }
}
