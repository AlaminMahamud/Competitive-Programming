package com.company;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static BigInteger[] t;
    public static boolean[] flag;

    public static BigInteger init(int n){
        BigInteger n2,n3,n4;
        if(!flag[n/2]) n2 = init(n/2);
        else n2 = t[n/2];
        if(!flag[n/3]) n3 = init(n/3);
        else n3 = t[n/3];
        if(!flag[n/4]) n4 = init(n/4);
        else n4 = t[n/4];

        BigInteger sum = BigInteger.ZERO;
        sum.add(n2);
        sum.add(n3);
        sum.add(n4);

        if(sum.compareTo(BigInteger.valueOf(n)) == -1) {t[n] = BigInteger.valueOf(n); flag[n] = true; return BigInteger.valueOf(n);}
        else {t[n] = sum; flag[n] = true; return sum;}
    }

    public static void main(String[] args) {
	// write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        t = new BigInteger[n];
        flag = new boolean[n];
        for(int i=0; i<=4;i++){
            t[i] = BigInteger.valueOf(i);
            flag[i] = true;
        }
        init(n);
        System.out.println(t[n].longValue());
        sc.close();
    }
}
