public class InfixtoPostfix
{
	Stack st = new Stack();
	InfixtoPostfix()
	{
		Scanner inn = new Scanner(System.in);
		Scanner inp = new Scanner(System.in);

		int n,i;
		System.out.println("Enter the size of your expression: ");
		n=inn.nextInt();
		System.out.println("Enter the expression: ");
		
		String Q[] = new String[100];
		String P[] = new String[100];
		for (i = 0; i < n; i++)
    		{
        		Q[i] = inp.nextLine();
    		}
    	Q[n]= ")";
    	st.push("(");
    	int j = 0;
    	for (i = 0; i <= n; i++)
    		{
        		if(Q[i].matches("[A-Za-z0-9]+"))
        		{
        			P[j] = Q[i];
        		}
        		else if(Q[i].equals("("))
        		{
        			st.push(Q[i]);
        		}
        		else
        		{
        			while(precedenceLevel(st.pop()) >= precedenceLevel(Q[i]))
                	printf("%c",pop());
            		push(*e);
        		}
        		j++;
    		}
	}

	int precedenceLevel(char op) {
    switch (op) {
        case '+':
        case '-':
            return 0;
        case '*':
        case '/':
            return 1;
        case '^':
            return 2;
        default:
            throw new IllegalArgumentException("Operator unknown: " + op);
    }
}

	
}