import java.util.Scanner;

public class Questao06 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double salario, imposto, salario_final;

        System.out.print("Digite o salário: ");
        salario = sc.nextDouble();

        imposto = salario * 0.1;
        salario_final = salario - imposto;

        System.out.printf("Salário: R$%.2f\n", salario);
        System.out.printf("Imposto: R$%.2f\n", imposto);
        System.out.printf("Salário final: R$%.2f\n", salario_final);
    }
}
