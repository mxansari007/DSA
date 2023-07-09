bool isPowerOfTwo(int n)
{	
    // Write your code here.
    while(n>>1){
        if(n%2 != 0){
            return false;
        }
        n=n>>1;
    }

    return true;

}