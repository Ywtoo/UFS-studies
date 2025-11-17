
/**
 * @author Gabriel Nascimento 
 * @version 0.0.1
 */
public class ContaBancaria
{
    private String proprietario;
    private int numConta,agencia;
    private double saldo;
    
    public ContaBancaria(String nome, double saldoInicial, int numero, int agenciaNum) {
        proprietario = nome;
        saldo = saldoInicial;
        numConta = numero;
        agencia = agenciaNum;
    }

    public void verSaldo()
    {
        System.out.println("Saldo atual: R$ " + saldo);
    }
    
    public void depositar(double v_depositado)
    {
        saldo = saldo + v_depositado;
        System.out.println("Depósito de R$ " + v_depositado + " realizado.");
    }
    
    public void sacar(double v_sacado)
    {
        saldo = saldo - v_sacado;
        System.out.println("Saque de R$ " + v_sacado + " realizado.");
    }
    
    public void exibirProprietario() {
        System.out.println("Proprietário da conta: " + proprietario);
    }
    
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria("Maria Silva", 1000.0, 12345, 6789);
        
        conta.exibirProprietario();
        conta.verSaldo();

        conta.depositar(500.0);
        conta.verSaldo();

        conta.sacar(200.0);
        conta.verSaldo();
    }
}