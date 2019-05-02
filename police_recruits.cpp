#include <iostream>

using namespace std;

int main(void)
{
    int n, rec= 0, untreat= 0, tmp;
    cin>>n;
    while(n--){
        cin>>tmp;
        
        if(tmp > 0) rec+= tmp;
        else if(rec > 0 && tmp<0){
            rec--;
        }
        else untreat++;
    }
    
    cout<<untreat<<endl;
    return 0;
}