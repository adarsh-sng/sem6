import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        System.out.println("Calculator started.");
        Scanner sc  =new Scanner(System.in);
        int a =sc.nextInt();
        int b =sc.nextInt();
        char symbol = sc.next().charAt(0);
        switch (symbol) {
            case '+':
                System.out.println(a+b);
                break;
            case '-':
                System.out.println(a-b);
                break;
            case '*':
            case 'x':
                System.out.println(a*b);
                break;
            case '/':
                System.out.println(a/b);
                break;
            default:System.out.println("invalid");
        }
        sc.close();
    }
}