import java.util.Scanner;

public class Questao07 {
    public static void main(String[] args) {
        double distancia, velocidade, tempo;
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite a distância percorrida: ");
        distancia = sc.nextDouble();
        System.out.print("Digite a velocidade(km/h): ");
        velocidade = sc.nextDouble();
        tempo = distancia / velocidade;
        System.out.printf("Tempo: %.1fh\n", tempo);
    }
}
