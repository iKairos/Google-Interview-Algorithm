#include <iostream>
#include <vector>

using namespace std;

bool HasPairWithSum(vector<int> vect, int sum){
    vector<int> compliments;
    int i,j;
    int comp;
    for(i=0;i<vect.size();i++){
      comp = sum - vect[i];

      if(comp < 0)
        continue;

      for(j=0;j<compliments.size();j++){
        if(vect[i] == compliments[j]){
          return true;
        }
      }
      compliments.push_back(comp);
    }
    return false;
}

int main(){
    vector<int> arr{1,2,3,4,4};
    vector<int> arr2{1,2,3,10};
    int sum;

    cout << "Enter desired sum:" << endl;
    cin >> sum;

    if(HasPairWithSum(arr2, sum))
      cout << "Vector has a pair that adds up to " << sum << endl;
    else
      cout << "Vector doesn't have a pair that adds up to " << sum << endl;

}
