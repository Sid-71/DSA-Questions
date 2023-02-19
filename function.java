class function {

    public static void helper(String name) {
        System.out.println(name);
    }

    public static int sum(int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += i;
        }
        return sum;
    }
    public static int fact(int n) {
        int sum = 1;
        for (int i = 2; i <= n; i++) {
            sum *=i;
        }
        return sum;
    }

    public static void main(String arg[]) {
        String st = "Sidharth";
        helper(st);

        int n = 20;
        int x = sum(n);
        System.out.println(x);
        
        System.out.println(fact(500));
    }
}