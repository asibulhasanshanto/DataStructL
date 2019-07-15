public class StackTest{
	Stack s = new Stack();
	StackTest(){
		s.push("5");
		s.push("6");
		s.push("2");
		double a = Double.parseDouble(s.pop());
		double b = Double.parseDouble(s.pop());
		double result = Operation(a,b,"+");
		s.push(""+result);
		a = Double.parseDouble(s.pop());
		b = Double.parseDouble(s.pop());
		result = Operation(a,b,"*");
		s.push(""+result);
		s.push("12");
		s.push("4");
		a = Double.parseDouble(s.pop());
		b = Double.parseDouble(s.pop());
		result = Operation(a,b,"/");
		s.push(""+result);
		a = Double.parseDouble(s.pop());
		b = Double.parseDouble(s.pop());
		result =  Operation(a,b,"-");
		s.push(""+result);
		System.out.println(s.pop());

	}
	double Operation(double A,double B,String operation){
		if(operation.equals("+")){
			System.out.println(A+"\n"+ B + "\n"+(B+A) + "\n");
			return B+A;
		}
		else if(operation.equals("-")){
			//System.out.println(A+"\n"+ B + "\n"+(B-A) + "\n");
			return B-A;
		}
		else if(operation.equals("*")){
			System.out.println(A+"\n"+ B + "\n"+(B*A) + "\n");
			return B*A;
		}
		else if(operation.equals("/")){
			//System.out.println(A+"\n"+ B + "\n"+(B/A) + "\n");
			return B/A;
		}
		else if(operation.equals("|")){
			//System.out.println(A+"\n"+ B + "\n"+(Math.pow(B,A)) + "\n");
			return Math.pow(B,A);
		}
		else {
			return 0;
		}
	}
	public static void main(String[] args) {
		new StackTest();
	}
}