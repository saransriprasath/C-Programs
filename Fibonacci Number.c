int fib(int n){
    if(n < 2) return n;
    int a = 0, b = 1;
    while(--n) b += a, a = b - a;
    return b;
}
