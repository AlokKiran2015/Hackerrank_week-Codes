#include <bits/stdc++.h>

using namespace std;

string acidNaming(string acid_name) {
int a=acid_name.size();
    if("hydro"==acid_name.substr(1,5) && "ic"==acid_name.substr(a-2,a-1)){
        return "non-metal acid";
    }
    else if("ic"==acid_name.substr(a-2,a-1)){
        return "polyatomic acid";
    }
    else{
        return "not an acid";
	}
    
}

int main() {
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string acid_name;
        cin >> acid_name;
        string result = acidNaming(acid_name);
        cout << result << endl;
    }
    return 0;
}

