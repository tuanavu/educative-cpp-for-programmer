using System;

class HelloWorld{
  public static int calculateSum(int p1, int p2){
    int sum = p1 + p2;
    return sum;
  }

  public static void Main(){
    int s = calculateSum(2,3);
    Console.WriteLine(s);
  }
}