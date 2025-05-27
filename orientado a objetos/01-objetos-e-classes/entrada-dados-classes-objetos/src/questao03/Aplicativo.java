public class Aplicativo {
    public static void main(String[] args) {
        Aluno aluno = new Aluno();

        aluno.nome = "João";
        aluno.nota1 = 7.5;
        aluno.nota2 = 8.0;
        aluno.nota3 = 9.2;

        System.out.println("Nome do aluno: " + aluno.nome);
        System.out.println("Nota 1: " + aluno.nota1);
        System.out.println("Nota 2: " + aluno.nota2);
        System.out.println("Nota 3: " + aluno.nota3);
    }
}
