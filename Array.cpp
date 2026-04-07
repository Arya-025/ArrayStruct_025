#include <iostream>
using namespace std;

int main() {
    int dataku[5] = {10, 20, 30, 40, 50};

    int datamu[5];
    int x;

    cout << "Data ke -3 :" << dataku[2] << endl;

    x = dataku[2]*3;

    dataku[2] = 600;
    cout << "Data ke -3 yang baru :" << dataku[2] << endl;
    
    
cout << "Data index ke - 0 : " ;
cin >> datamu[0];
cout << "Data index ke - 1 : " ;
cin >> datamu[1];
cout << "Data index ke - 2 : " ;
cin >> datamu[2];
cout << "Data index ke - 3 : " ;
cin >> datamu[3];
cout << "Data index ke - 4 : " ;
cin >> datamu[4];

cout << "Data ke -1 : " << datamu[0] << endl;
cout << "Data ke -2 : " << datamu[1] << endl;
cout << "Data ke -3 : " << datamu[2] << endl;
cout << "Data ke -4 : " << datamu[3] << endl;
cout << "Data ke -5 : " << datamu[4] << endl;

cout << endl;

for (int i = 0; i <= 4; i++) {
    cout << "Data index ke - " << i << " : ";
    cin >> datamu[i];
}
cout << endl;
for (int i = 0; i <= 4; i++) {
    cout << "Data ke - " << i+1 << " : " << datamu[i] << endl;
}

    return 0;
}