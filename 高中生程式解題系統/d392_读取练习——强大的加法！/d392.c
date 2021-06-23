#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s;
    stringstream ss;
    while(getline(cin, s)){
        int num;
        ss << s;
        int sum=0;
        while(ss>>num)
            sum+=num;
        cout<<sum<<endl;
        ss.clear();
    }
    return 0;
}
