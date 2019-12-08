import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Trailing_Zeros  {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        int count = 0;
        int divider = 5;
 
        while ((number/divider) > 0) {
            count += number/divider;
            divider = divider * 5;
        }
        System.out.println(count);
    }
}