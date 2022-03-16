#include <iostream>

using namespace std;

const int m=50;

class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;
    
    public:
    void CNT(void){count=0;}
    void getItems(void);
    void displaySum(void);
    void removeItems(void);
    void displayItems(void);

};

void ITEMS :: getItems(void)
{
    cout<<"Enter item code : ";
    cin>>itemCode[count];
    
    cout<<"Enter item price : ";
    cin>>itemPrice[count];
    count++;
    
}
void ITEMS :: displaySum(void)
{
    float sum = 0;
    for(int i=0;i<count;i++)
    {
        sum=sum+itemPrice[i];
    }
    cout<<"\n Total value : "<<sum<<"\n";
}

void ITEMS :: removeItems(void)
{
    int a;
    cout<<"Enter the item code : ";
    cin>>a;
    
    for(int i=0;i<count;i++)
    {
        if(itemCode[i] == a)
        {
            itemPrice[i]=0;
        }
    }
}

void ITEMS :: displayItems(void)
{
    cout<<"\n Code       Price\n";
    
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<"       "<<itemPrice[i];
    }
    cout<<"\n";

}

// ==================================================================
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<"\n You can do the following : "<<"\n Enter appropriate number : \n";
        cout<<"\n 1: Add an Item";
        cout<<"\n 2: Display Total Value";
        cout<<"\n 3: Remove an Item";
        cout<<"\n 4: Display All items";
        cout<<"\n 5: Quit";
        
        cout<<"\n\n What is your Option ?";
        cin>>x;
        
        switch(x)
        {
            case 1: order.getItems();break;
            case 2: order.displaySum();break;
            case 3: order.removeItems();break;
            case 4: order.displayItems();break;
            case 5: break;
            
            default : cout<<"Error in input; try again\n";
        }
    }while(x!=5);
    
  return 0;
}
