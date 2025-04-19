import java.util.Scanner;

public class Questao04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double temp_c, temp_f, temp_k;

        System.out.print("Digite a temperatura(ºC): ");
        temp_c = sc.nextDouble();

        temp_f = temp_c * 1.8 + 32;
        temp_k = (temp_f + 459.67)/1.8;

        System.out.printf("Celsius: %.2fº\n", temp_c);
        System.out.printf("Fahrenheit: %.2fº\n", temp_f);
        System.out.printf("Kelvin: %.2f°\n", temp_k);
    }
}
