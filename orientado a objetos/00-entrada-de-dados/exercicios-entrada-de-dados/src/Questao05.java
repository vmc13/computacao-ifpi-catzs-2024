import java.util.Scanner;

public class Questao05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double salario, imposto;
        System.out.print("Digite o salário: ");
        salario = sc.nextDouble();
        imposto = salario * 0.1;

        System.out.printf("Salário: R$%.2f\n", salario);
        System.out.printf("Imposto: R$%.2f\n", imposto);
    }
}
