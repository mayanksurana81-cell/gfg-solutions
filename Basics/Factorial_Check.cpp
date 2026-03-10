class Solution {
  public:
int isFactorial(int N) {
    if (N == 1){
        return 1;
    }
    long long fact = 1;
    for(int i = 1; fact < N; i++) {
        fact *= i;
        if(fact == N) return 1;
    }
    return 0;
}

    
};