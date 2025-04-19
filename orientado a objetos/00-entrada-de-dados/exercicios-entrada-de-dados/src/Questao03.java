import java.util.Scanner;
import static java.lang.Math.*;

public class Questao03 {
    public static void main(String[] args) {
        double pi = 3.14;

        Scanner sc = new Scanner(System.in);
        System.out.print("Digite raio do círculo: ");
        double raio = sc.nextDouble();

        double area = pi * pow(raio, 2);
        double comprimento = 2 * pi * raio;

        System.out.printf("Area: %.2f\n", area);
        System.out.printf("Comprimento: %.2f\n", comprimento);
    }
}
