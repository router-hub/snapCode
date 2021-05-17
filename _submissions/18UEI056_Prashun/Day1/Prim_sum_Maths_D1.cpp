/*Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.*/
//code
bool isPrime(int n)
if(n<=1){
    return false;
}
if(n==2 || n == 3){
    return true;
}

if(n%2==0 || n%3==0){
  return false;  
}

for(int i=5;i*i<=n;i=i+6){
    if(n%i==0 || n%(i+2)==0){
        return false;
    }
}
return true;  
}

vector<int> Solution::primesum(int A) {
    //baase case
  vector<int> v;
for(int i=2;i<A;i++){
    for(int j=2;j<A;j++){
        
        
            if((i+j)==A){
                
              if(isPrime(i) && isPrime(j)){
              v.push_back(i);
              v.push_back(j);
              return v;
            }
        }
    }
}
return v;
    
}
