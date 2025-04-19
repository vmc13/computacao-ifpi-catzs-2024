import java.util.Scanner;
import java.util.Locale;

public class Questao02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a altura do retângulo: ");
        double altura = scanner.nextDouble();
        System.out.print("Digite a largura do retângulo: ");
        double largura = scanner.nextDouble();

        double area = (largura * altura);
        double perimetro = 2 * largura + 2 * altura;

        System.out.printf("Área: %.2f\n", area); // 4,5
        System.out.printf("Perímetro: %.2f\n", perimetro); // 6,0
    }
}
