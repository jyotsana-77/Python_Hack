import java.util.*;
public class multiplynums{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter  1st num:");
        int n1 = sc.nextInt();
        System.out.println("Enter  2nd num:");
        int n2 = sc.nextInt();
        sc.close();
        int p = n1*n2;
        System.out.println("Product is:"+p);
    }
}