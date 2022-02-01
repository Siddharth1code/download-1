#include<iostream>
using namespace std;
class Shop
{
    int Itemname[100]; 
    int Itemprice[100];
    int counter; 
    public:
    void initcounters(void) {counter=0;}
    void se~tprice(void);
    void displayprice(void);
};

 Shop::setprice(void)
{
    cout<<"Enter the id of the Item"<<counter+1<<endl;
    cin>>Itemname[counter];
    cout<<"Enter the price of the Item"<<endl;
    cin>>Itemprice[counter];
    cointer++;
}

 Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of the Item and id"<<Itemname[i]<<"is "<<Itemprice[i]<<endl;
    }
    
}
int main()
{
    Shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    cout <<"Student";
    return 0;
}