public class number {

            double num;

      
            public number(){
                  num = 0.0;
            }
            public number(double num){
                  this.num = num;
            }
            public boolean iszero(){
                  if(num==0)
                        return true;
                  else  
                        return false;
            }
            public boolean ispositive(){
                  if(num>0)
                        return true;
                  return false;
            }
            public boolean isnegative()
            {
                  if(num<0)
                        return true;
                  else  
                        return false;
            }
            public boolean isprime(){
                  double temp = num/2;
                  int count = 1;
                  for(int i=2;i<=temp;i++)
                  {
                        if(num%i == 0)
                              count++;
                  }
                  if(count <2)
                        return true;
                  else
                        return false;
            }
            public double getfact(){
                  double fact = 1;
                  for(int i=1;i<=num;i++)
                        fact = fact * i;
                  return fact;
            }
            public double getsqrt(){
                  return Math.sqrt(num);
            }
            public double getsq(){
                  return (num * num);
            }
            public static void main(String args[]){
                  number n1 = new number(3);
                  System.out.println("Negative:"+n1.isnegative());
                  System.out.println("positive:"+n1.ispositive() );
                  System.out.println("zero:"+n1.iszero());
                  System.out.println("Prime:"+ n1.isprime());
                  System.out.println("Square:"+n1.getsq());
                  System.out.println("Squareroot:"+n1.getsqrt());
                  System.out.println("factorial:"+n1.getfact());
            }
}
