class NthFibnocci {
    public static void main(String[] args) {
        	int a = 1;
		int n =6;
    int b = 1;
    int c=0;
    for (int i = 3; i <= n; i++) { 
        c = a + b;
        b = a;
        a = c; 
    }
    System.out.println(c);

    }
}
