package org.example;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import io.github.bonigarcia.wdm.WebDriverManager;
import java.util.List;

/*
    Victória Mendes da Costa - POO
 */


public class SearchGoogle {
    public static void main(String[] args) {

        System.out.println("Configurando o ChromeDriver via WebDriverManager...");
        WebDriverManager.chromedriver().setup();

        System.out.println("Iniciando o navegador Chrome...");
        WebDriver driver = new ChromeDriver();

        try {
            String url = "https://www.ifpi.edu.br/cursos/documentos-dos-cursos/docentes/prof-ads-tsa";
            driver.get(url);
            driver.manage().window().maximize();

            // 2. Aguarda o carregamento da página
            Thread.sleep(3000);

            // 3. Captura as linhas da tabela de docentes
            List<WebElement> linhas = driver.findElements(By.cssSelector("table tr"));

            if (linhas.size() <= 1) {
                System.out.println("Nenhum professor encontrado ou a tabela está vazia.");
            } else {
                System.out.println("\nLista de Professores do curso ADS - Teresina Central:");
                for (int i = 1; i < linhas.size(); i++) { // Ignora o cabeçalho
                    List<WebElement> colunas = linhas.get(i).findElements(By.tagName("td"));
                    if (colunas.size() >= 3) {
                        String nome = colunas.get(0).getText();
                        String titulacao = colunas.get(1).getText();
                        String regime = colunas.get(2).getText();
                        System.out.println("- " + nome + " | " + titulacao + " | " + regime);
                    }
                }
            }

        } catch (Exception e) {
            System.err.println("Erro ao buscar os professores: " + e.getMessage());
            e.printStackTrace();
        } finally {
            System.out.println("\nFechando o navegador...");
            driver.quit();
        }
    }
}
