#include <bits/stdc++.h>

using namespace std;

class Lingkaran {
   private:
   double r; 
   
   public:
   
   Lingkaran(){             //Default constructor
    //   cout<<"Konstruktor lingkaran dipanggil";
      setR(1);
   }
   
   Lingkaran(double r){             // constructor dengan parameter
    //   cout<<"Konstruktor lingkaran dipanggil";
      setR(r);
   }
   
   Lingkaran (Lingkaran &l){        //Copy Constructor
       this->r = l.r;
   }
   
   void setR(double r){
       this->r = abs(r);          //(*). bs digantikan dengan arrow operator ->
   }
   
   double getR(){
       return r;
   }
   
   double perimeter(){
       return 2*M_PI*r;
   }
   
   double area(){
       return M_PI*r*r;
   }
   
   bool isBig(Lingkaran other){
       return this->r > other.r;
   }
   
   void display();
   
};

void Lingkaran::display(){
       cout<<getR()<<" "<<perimeter()<<" "<<area()<<endl;
}

class NilaiMahasiswa{
    char nama[25];
    double nilai[5];
    
    public:
    void setNama(char* n){
        strcpy(nama , n);
    }
    
    char* getNama(){
        return nama;
    }
    
    void setNilai(double par[]){
        for (int i=0;i<5;i++)
            nilai[i]=par[i];
    }
    
    double average(){
        double hasil=0;
        for (int i=0;i<5;i++)
            hasil += nilai[i]/5;
        
        return hasil;
    }
};

int main(){
    // Lingkaran l[10];
    // for (int i=0;i<10;i++){
    //     l[i].setR(rand() % 20 + 1);
    //     // cout<<l[i].getR()<<" "<<l[i].perimeter()<<" "<<l[i].area()<<endl;
    //     l[i].display();
    //     if (i>0)
    //         cout<<(l[0].isBig(l[i]) ? "l[0] Lebih besar": "l[0] lebih kecil" )<<endl;
    // }
    
    // NilaiMahasiswa mhs;
    // char namaMhs[]="Nurul F";
    // double nilai[] = {75, 80, 85,65, 90};
    
    // mhs.setNama(namaMhs);
    // mhs.setNilai(nilai);
    
    // cout<<mhs.getNama()<<" "<<mhs.average()<<endl;
    
    Lingkaran l(10);
    
    Lingkaran b(l);
    
    cout<<b.getR();
    return 0;
}
