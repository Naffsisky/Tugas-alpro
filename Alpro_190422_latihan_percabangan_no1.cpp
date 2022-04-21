#include <iostream>
using namespace std;

int kerja, usia, status, tanggungan;

int main(){

    cout << "-------Program Bantuan Langsung Desa Sambirejo-------\n\n";

    cout << " Masukkan status kependudukan anda : \n\n";
    cout << " Berapa usia anda ? \n";
    cout << " 1. Dibawah 17 tahun   2. Diatas 17 tahun        3. Lansia \n";
    cin >> usia;
    if (usia==1){
        cout << " Anda tidak berhak mendapatkan bantuan langsung desa \n";
    
    }
    else if (usia==2){
            cout << " Apakah anda sudah menikah ? \n";
            cout << " 1. Belum      2. Sudah \n";
            cin >> status;
        if (status==1){
            cout << " Apakah anda sudah bekerja ? \n";
            cout << " 1. Belum      2. Sudah \n";
            cin >> kerja;
                if (kerja==2){
                    cout << " Anda tidak berhak mendapatkan bantuan langsung desa \n";
                
                }
                else if (kerja==1){
                    cout << " Anda mendapatkan bantuan sebesar Rp. 350.000/bulan \n";
                    cout << " Bantuan yang anda dapatkan sebesar Rp. 1.050.000 selama 3 bulan \n";
                }


        }
        else if (status==2){
            cout << " Apakah anda sudah bekerja ? \n";
            cout << " 1. Belum      2. Sudah \n";
            cin >> kerja;
                if (kerja==1){
                    cout << " Anda tidak berhak mendapatkan bantuan langsung desa \n";
                }
                else if (kerja==2){
                    cout << " Apakah anda mempunyai minimal 3 tanggungan ? \n";
                    cout << " 1. Tidak      2. Ya  \n";
                    cin >> tanggungan;
                        if (tanggungan==1){
                            cout << " Anda tidak berhak mendapatkan bantuan langsung desa \n";
                        }
                        else if (tanggungan==2){
                            cout << " Anda berhak mendapatkan bantuan Rp. 450.000/bulan \n";
                            cout << " Bantuan yang anda dapatkan sebesar Rp. 1.350.000 selama 3 bulan \n";
                        }


                }
        }

        
    }
    else if (usia==3){
        cout << " Anda berhak mendapatkan bantuan sebesar Rp. 750.000/bulan \n";
        cout << " Bantuan yang anda dapatkan sebesar Rp. 2.250.000 selama 3 bulan \n";
    }
    else {
        cout << " Pilihan anda salah ";
    }
    return 0;
}









    