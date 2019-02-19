import java.util.Scanner;
import java.math.BigInteger;

class Main{             // standard Java Class in UVa OJ
    public static void main(String[] args)
    {
        BigInteger fac = BigInteger.ONE;
        for (int i = 2; i <= 25; i++)
            fac = fac.multiply(BigInteger.valueOf(i)); // Yes, it's in the library
    }
}