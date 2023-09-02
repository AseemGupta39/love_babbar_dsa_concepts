int countPrimes(int n) {
        int i,j,count = 0;
        vector<bool> prime(n+1,true);

        // prime[0] = prime[1] =false;
        for(i=2;i<n;i++){
            if(prime[i] == true){
                count++;
                for(j=i<<1;j<n;j+=i){
                    prime[j] = false;
                }
            }
        }
        return count;
    }