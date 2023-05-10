#include<iostream>
using namespace std;
class Order{
    private:
    int OrderID;
    string DeliveryLocation;
    float DiscountPercentage;
    float Price;
    public:
    Order(){
        cout<<"Empty Constructor"<<endl;
    }
    Order(int o,float p){
        OrderID=o;
        Price=p;
    }
    void SetLoca(string n){
        DeliveryLocation=n;
    }
    string GetLoca(){
        return DeliveryLocation;
    }
    void SetDisPer(float a){
        DiscountPercentage=a;
    }
    float GetDisper(){
        return DiscountPercentage;
    }
    void ShowAllinfo(){
        cout<<"Order Id is: "<<OrderID<<endl;
        cout<<"Delivery location is: "<<DeliveryLocation<<endl;
        cout<<"Original Price is: "<<Price<<endl;
        cout<<"Discount Percentage is: "<<DiscountPercentage<<endl;
        cout<<"delivary charge 50tk"<<endl;
        cout<<"Net Price is: "<<(Price-((Price*DiscountPercentage)/100))+50<<endl;
    } 
};
int main(){
    Order A1(100000111, 1000.00);
    A1.SetLoca("Bashundhara R/A, Block C, House Number:308");
    A1.SetDisPer(10.00);
    A1.ShowAllinfo();

}