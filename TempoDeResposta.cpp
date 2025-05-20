#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // Quantidade de registros
    int N;
    // Registros
    string Reg;
    // Numeros dos amigos de sara
    vector<int> Am = {};
    int AmAUX;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        cin >> Reg >> AmAUX;
        auto it = find(Am.begin(), Am.end(), AmAUX);
        if(it != Am.end()){
            Am.push_back(AmAUX);
        }
        }
    
    return 0;
}
