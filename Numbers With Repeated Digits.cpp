#include <string>
using namespace std;

    int numDupDigitsAtMostN(int n) {
        int count = 0;
        if(n<10){
            return 0;
        }
        else{
            for (int i = 10; i < n; ++i) {
                string number = to_string(n);
                for (int j = 0; j < number.size()-1; ++j) {
                    bool flag = false;
                    for (int k = j+1; k < number.size(); ++k) {
                        if(number[j] == number[k]){
                            flag = true;
                            break;
                        }
                    }
                    if(flag == true){
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
int main(){
    numDupDigitsAtMostN(20);
    }