#include<iostream>
using  namespace std;
class Cuboid{
    public:
        void cuboidInput();
        void unitPrice(double p);
        void getVolume();
        static void sumPrice(Cuboid &s);
    private:
        double length;
        double width;
        double height;
        double volume;
        static double price;
        static double sum;

};
double Cuboid::sum=0;
double Cuboid::price=0;
int main(){
    Cuboid cuboid[4];
    //Cuboid cuboid2;
    //Cuboid cuboid3;
    //Cuboid cuboid4;
    double p;
    cout<<"请输入单位造价：";
    cin>>p;

    for(int i=0;i<4;i++){
        if(i==0)
            cuboid[i].unitPrice(p);
        cout<<"请输入第"<<i+1<<"个长方体的长宽高：";
        cuboid[i].cuboidInput();

        cuboid[i].getVolume();
        Cuboid::sumPrice(cuboid[i]);

    }

    return 0;
}


void Cuboid::cuboidInput(){
    cin>>length;
    cin>>width;
    cin>>height;
}

void Cuboid::unitPrice(double p){
    price=p;
}

void Cuboid::getVolume(){
    volume=length*height*width;
    //cout<<volume;
}

void Cuboid::sumPrice(Cuboid &s){
    sum=sum+s.volume*price;
    cout<<"现总造价为："<<sum<<endl;
}
