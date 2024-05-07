

#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No induk = " << nim << endl;
    }

    int main() {

        mahasiswa mhs{ 1 }; //Object mhs
        mhs.showNim(); //Member access operator

        mahasiswa& refMhs = mhs; //Pointer reference refMhs
        refMhs.nim = 1; //Member access operator
        mhs.showNim();

        mahasiswa* pMhs = &mhs; //Pointer reference pMhs
        pMhs->nim = 3; //Access operator
        pMhs->showNim();
        return 0;
    }
};





