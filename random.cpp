#include <bits/stdc++.h>
using namespace std;

bool isprime(int a){
   if (a<=1)
       return false;
   for (int i=2;i*i<a;i++)
       if (a%i==0)
           return false;
   return true;
}


int main(){
	 
   int n; // number till what we want the prime numbers
   cin >> n; 
   vector<int> primes; // vector containing primes;
   for ( int i = 1 ; i <= n ; i++){
   	    if ( isprime(i))           // Boolean funtion to check if the current number is prime 
   	    	primes.push_back(i);
   }
   for (auto prime : primes){ // print primes in range [1 : n ]
   	cout << prime << " ";
   }
   cout << endl;
    


	return 0;
}