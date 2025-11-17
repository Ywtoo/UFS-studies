                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
/**
 * Escreva uma descrição da classe Ponto aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */

import java.util.Scanner;

public class Ponto {
    private int x;
    private int y;
    
    //metodo construtor que inicia
    public Ponto(int inicialX, int inicialY) {
        x = inicialX;
        y = inicialY;
    }
    
    //metodo que pega a posição atual do ponto
    public int getX() {
        return x;
    }
    
    public int getY() {
        return y;
    }
    
    //metodo que coloca os valores no ponto causando o movimento
    public void setX(int novoX) {
        x = novoX;
    }
    
    public void setY(int novoY) {
        y = novoY;
    }
    
    //acões do ponto
    public void mover(int deltaX, int deltaY) {
    x = x + deltaX;
    y = y + deltaY;
    } 
    
    public void mostrarPlano(int largura, int altura) {
        for (int j = altura - 1; j >= 0; j--) { // percorre linhas de cima pra baixo
            for (int i = 0; i < largura; i++) {  // percorre colunas da esquerda pra direita
                if (i == x && j == y) {
                    System.out.print("*"); // ponto na posição (x, y)
                } else {
                    System.out.print("."); // espaço vazio
                }
            }
            System.out.println(); // nova linha
        }
        System.out.println(); // linha extra só pra separar
    }
    
    public void controlarPlano(int largura, int altura) {
        Scanner sc = new Scanner(System.in);
        String comando = "";
    
        mostrarPlano(largura, altura);
    
        while (!comando.equalsIgnoreCase("sair")) {
            System.out.println("Digite w(up), s(down), a(left), d(right) ou sair:");
            comando = sc.nextLine();
    
            switch (comando.toLowerCase()) {
                case "w": if (y + 1 < altura) y++; break;
                case "s": if (y - 1 >= 0) y--; break;
                case "a": if (x - 1 >= 0) x--; break;
                case "d": if (x + 1 < largura) x++; break;
                case "sair": System.out.println("Encerrando controle."); break;
                default: System.out.println("Comando inválido!"); break;
            }
    
            mostrarPlano(largura, altura);
        }
        sc.close();
    }
    
    public void mostrar() {
    System.out.println("O ponto está em (" + x + ", " + y + ")");
    }
}