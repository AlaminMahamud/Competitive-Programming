using System;
using Systems.Numerics.BigInteger;

public class Test
{
	public BigInteger fibonacci(BigInteger n){
		if (n==1) return 1;
		return n*fibonacci(n-1);
	}
	
	public static void Program(int d){
		BigInteger big = fibonacci(d);
		int count = 0;
		while(big/10 == 0){
			count++;
			big/=10
		}
		Console.WriteLine(count);
	}
	
	public static void Main()
	{
		// your code here
		int t;
		t = Console.ReadLine();
		while(t-->0){
			Program(Console.ReadLine());
		}
	}
}