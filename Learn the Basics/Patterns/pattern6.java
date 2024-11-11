import java.util.Scanner;

public class pattern6 {
//    12345
//    1234
//    123
//    12
//    1
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = n; i >0 ; i--) {
            for (int j = 1; j<=i ; j++) {
                System.out.print(j+ " ");
            }
            System.out.println();
        }
    }
}
