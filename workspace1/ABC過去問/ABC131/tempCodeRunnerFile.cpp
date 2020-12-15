long long int gcd(long long int x, long long int y){
    if(x < y) swap(x, y); 

    while (y > 0) {
        long long int r = x % y;
        x = y;
        y = r;
    }
    return x;
    }