public class Aplicativo {
    public static void main(String[] args) {
        Empregado emp = new Empregado();
        emp.adicionarHoras(40);
        emp.adicionarHoras(5);
        System.out.println("Horas trabalhadas: " + emp.hrTrabalhadas);
        System.out.println("Salário: R$" + emp.calcularSalario());
    }
}
