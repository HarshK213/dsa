/*
Q. Find out how to find if a number is power of 2.

Answer.

https://www.youtube.com/watch?v=4cqHahxFTYw

 
SOLUTION 1:


bool dividebytwo(int n){
        while(n%2==0){
                n=n/2;
        }
        
        if(n==1){
                return true;
        }else{
                return false;
        }
}

int main(){
        int r;
        cout << "Enter any number : ";
        cin >> r;
        
        if(dividebytwo(r)){
                cout << "Number is a power of 2."<< endl;
        }else{
                cout << "Number is not a power of 2."<<endl;
        }

        return 0;
}





SOLUTION 2:

int countingsetbits(int n){
        int count =0;
        int x =1;
        while(n>=x){
                if((n & x) != 0){
                        count +=1;      
                }
                x<<=1;
        }
        return count;
}

int main(){
        int r;
        cout << "Enter any number : ";
        cin >> r;
        if(countingsetbits(r)==1){
                cout << r << " is a power of 2 number." << endl;
        }else{
                cout << r << " is not a power of 2 number." << endl;
        }

        return 0;
}



SOLUTION 3:

int bitshift(int n){
        int count = 0;
        while(n>=1){
                if((n&1)!=0){
                        count +=1;
                }
                n>>=1;
        }
        return count;
}

int main(){
        int r;
        cout << "Enter any number : ";
        cin >> r;
        if(bitshift(r)==1){
                cout << r << " is a power of 2 number." << endl;
        }else{
                cout << r << " is not a power of 2 number." << endl;
        }


        return 0;
}







SOLUTION 4:

bool logOperation(int n){
        if(log2(n) == floor(log2(n))){
                return true;    
        }else{
                return false;
        }
}

int main(){
        int r;
        cout << "Enter any number : ";
        cin >> r;
        if(logOperation(r)){
                cout << r << " is a number of power 2."<< endl;
        }else{
                cout << r << " is not a number of power 2." << endl;
        }
        return 0;
}

*/

