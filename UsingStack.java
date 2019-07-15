class UsingStack
{
    public static void main(String[] args)
    {
        Stack st = new Stack();
        for(int i = 1;i <= 50; i++)
        {
            st.push(""+ i);
        }
        for(int i = 1;i <= 50; i++)
        {
            System.out.println(st.pop());
        }
    }
}