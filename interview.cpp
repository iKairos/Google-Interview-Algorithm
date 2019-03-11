#include <iostream>
#include <vector>

using namespace std;

bool HasPair(vector<int> data, int sum){
    int low = 0;
    int high = data.size();

    while(low < high){
        int iter = data[low] + data[high];
        if(iter == sum)
            return true;
        
        if(iter < sum)
            low++;
        else
            high--;
    }
    return false;
}

int main(){

    vector<int> data;
    int size, target, temp, i = 0;

    cout << "Enter vector size:" << endl;
    cin >> size;

    cout << "Enter vector elements:" << endl;
    
    while(i < size){
        cin >> temp;
        data.push_back(temp);
        i++;
    }

    cout << "Enter the sum you're trying to find:" << endl;
    cin >> target;

    if(HasPair(data, target))
        cout << "It has a pair that add up to " << target << endl;
    else
        cout << "No pair is adding up to " << target << endl;

    return 0;
}