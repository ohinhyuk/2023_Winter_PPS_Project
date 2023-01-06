#include <iostream>

using namespace std;
 int N,k, mid;
int calculate(int y){

    int x = 0 ;

    while(y < N){
        y -= N;
        x++;
    }

    return x * y;

}

int main(int argc, char** argv){
   

    cin >> N >> k;

    int left = 1;
    int right = N * N;
    pair<int,int> p = make_pair(N,N);
    
    while(left < right){
        mid = (left+ right)/2;
        
        if(mid > k){
            right = mid - 1;
            
            }
        else if(mid < k){
             left = mid + 1;
             }
        else break;
    }
    cout << mid-1 << "\n";
}