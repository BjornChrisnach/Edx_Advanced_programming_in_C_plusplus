#include <iostream>
using namespace std;

int factorial(int num);
int kCombinations(int n, int k);

int main() {
    int n, k, k_comb;

    cout<<"Please enter n and k (n>=k) :"<<endl;
    cin>>n>>k;

    // nFact = 1;
    // for(int i = 1; i <= n; i++) {
    //     nFact *= i;
    // }

    // kFact = 1;
    // for(int i = 1; i <= k; i++) {
    //     kFact *= i;
    // }

    // n_kFact = 1;
    // for(int i = 1; i <= n - k; i++) {
    //     n_kFact *= i;
    // }

    k_comb = kCombinations(n, k);
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
    
    return 0;
}

int kCombinations(int n, int k) {
    int nFact, kFact, n_kFact;

    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k); 
    return nFact / (kFact * n_kFact);
}


int factorial(int num){
    int factorialResultValue, i;

    factorialResultValue = 1;
    for(i = 1; i <= num; i++) {
        factorialResultValue *= i;
    }
    return factorialResultValue;
}