#include <iostream>
#include <string>

using namespace std;

class Barang {
    private:
        string nama;
        int stok;
        int hargaSatuan;
        int harga;
        int total;

    public:
        Barang(){
            this->nama;
            this->stok;
            this->hargaSatuan;
            this->harga;
            this->total;
        }

        // ini adalah setter
        void inputBarang(string nama, int stok, int hargaSatuan, int harga){
            this->nama = nama;
            this->stok = stok;
            this->hargaSatuan =hargaSatuan;
            this->harga = harga;
        }

        // setter total
        void inputTotal(int barang1, int barang2, int barang3){
            this->total = barang1 + barang2 + barang3;
        }

        // ini adalah getter
        string getNama(){
            return this->nama;
        }
        int getStok(){
            return this->stok;
        }
        int getHargaSatuan(){
            return this->hargaSatuan;
        }
        int getHarga(){
            return this->harga;
        }
        int getTotal(){
            return this->total;
        }

        // menampilkan barang
        void tampilkan(){
            cout <<"Nama Barang\t : "<< this->nama<<endl;
            cout <<"Stok\t\t : "<< this->stok<<endl;
            cout <<"Harga Satuan\t : "<< this->hargaSatuan<<endl;
            cout <<"Harga\t\t : "<< this->harga<<endl<<endl;
        }
};

int main(int argc, char const *argv[])
{
    string nama;
    int hargaSatuan, stok, harga, total;
    char pilihan, ulang;

    // Nama aplikasi
    cout <<"Selamat datang di AppToko"<<endl;
    cout <<"========================="<<endl<<endl;
    cout <<"1. Masukkan Barang Baru (setter) "<<endl;
    cout <<"2. Tampilkan Barang (getter) "<<endl;
    cout <<"3. Total penjualan "<<endl;
    cout <<"(x). Keluar Program "<<endl<<endl;
    
    // data barang
        Barang barang1;
        barang1.inputBarang("bolpoint", 10, 5000, 50000);
        Barang barang2;
        barang2.inputBarang("pensil", 20, 2000, 40000);
        Barang barang3;
        barang3.inputBarang("Penghapus", 20, 1500, 30000);

    do{
        
        ulang='y';
        cout <<"Masukkan pilihan : "; cin >>pilihan;
        cout<<endl<<endl;

        if (pilihan == '1')
    {
        cout <<"Masukkan Barang : "; cin >>nama;
        cout <<"Masukkan Stok : "; cin >>stok;
        cout <<"Masukkan Harga Satuan : "; cin >>hargaSatuan;
        harga=stok*hargaSatuan;
        cout<<endl<<endl;

        // implementasi setter
        Barang barangBaru;
        barangBaru.inputBarang(nama, stok,hargaSatuan,harga);

        cout <<"Barang yang baru anda masukkan :"<<endl;
        barangBaru.tampilkan();
    
    }
    else if (pilihan == '2')
    {
        // implementasi getter
        // barang 1
        cout <<"Barang 1"<<endl;
        cout <<"Nama Barang\t : "<<barang1.getNama() <<endl;
        cout <<"Stok\t\t : "<< barang1.getStok() <<endl;
        cout <<"Harga Satuan\t : Rp. "<< barang1.getHargaSatuan() <<endl;
        cout <<"Harga\t\t : Rp. "<< barang1.getHarga() <<endl<<endl;

        // barang 2
        cout <<"Barang 2"<<endl;
        cout <<"Nama Barang\t : "<<barang2.getNama() <<endl;
        cout <<"Stok\t\t : "<< barang2.getStok() <<endl;
        cout <<"Harga Satuan\t : Rp. "<< barang2.getHargaSatuan() <<endl;
        cout <<"Harga\t\t : Rp. "<< barang2.getHarga() <<endl<<endl;

        // barang 3
        cout <<"Barang 3"<<endl;
        cout <<"Nama Barang\t : "<<barang3.getNama() <<endl;
        cout <<"Stok\t\t : "<< barang3.getStok() <<endl;
        cout <<"Harga Satuan\t : Rp. "<< barang3.getHargaSatuan() <<endl;
        cout <<"Harga\t\t : Rp. "<< barang3.getHarga() <<endl<<endl;
        
        
    }
    else if(pilihan == '3' ){
        // setter dan getter untuk menampilkan total harga
        Barang total;
        // setter total harga
        total.inputTotal(barang1.getHarga(), barang2.getHarga(),barang3.getHarga());

        // getter total harga
        cout <<"Total Harga : Rp. "<<total.getTotal()<<endl;
    }
    else if (pilihan = 'x')
    {
        break;
    }
    else{
        cout <<"Pilihan tidak ada!";
    }

    } while (ulang == 'y');
    cout <<endl<< "Terimakasih, Program Selesai!" << endl;
    return 0;
}
