package com.company;
import java.text.*;
import java.util.Scanner;

public class Main {
    static public void customFormat(String pattern, double value ) {
        DecimalFormat myFormatter = new DecimalFormat(pattern);
        String output = myFormatter.format(value);
        System.out.println(output);
    }
    static public void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double d = scan.nextDouble();
        customFormat("sss.sss",d );
    }
}