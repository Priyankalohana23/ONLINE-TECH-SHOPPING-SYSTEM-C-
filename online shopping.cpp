#include<iostream>
using namespace std;
struct customerDetails {
    string firstName;
	string lastName;
	string email;
    string mobileNO;
	string postalCode;
    string address;
	string city;
};

int main(){
    char start;
    char choiceagain;
    string name;
    double onlineshopping();
    cout<<"please press s to start shopping"<<endl;
    start:
    cin>>start;
    cout<<endl;
    startlevel:
    if(start=='s' || start=='S'){
        double totalamount=onlineshopping();
        
      customerDetails customerDetail;
        
        cout << "Enter your email: ";
        cin >> customerDetail.email;
        cout << "Enter First name: ";
        cin >> customerDetail.firstName;
        cout << "Enter Last name: ";
        getline(cin>>ws,customerDetail.lastName);
        cout << "Enter your shipping address: ";
        getline(cin>>ws,customerDetail.address);
        cout << "Enter your city: ";
        getline(cin>>ws,customerDetail.city);
        
        
        cout << "Enter Postal code: ";
        cin >> customerDetail.postalCode;
        cout << "Enter Mobile no: ";
        cin >> customerDetail.mobileNO;

        string confirmOrder;
        cout << "Confirm order (yes/no): ";
        cin >> confirmOrder;
        if (confirmOrder == "yes" || confirmOrder == "Yes" || confirmOrder == "YES")
	    {
           cout<<"Order Completed"<<endl;
		   }
         else
         {
		 cout<<"order not completed ";
		 }
		
        cout<<"Hey,"<<customerDetail.firstName<<" Your total bill is:"<<" PKR"<<totalamount<<endl;
        shopagain:
        cout<<"Do you want shopping again, y or n"<<endl;
        cin>>choiceagain;
        cout<<endl<<endl;
        if(choiceagain=='y' || choiceagain=='Y'){
            goto startlevel;
        }
        else if (choiceagain=='n' || choiceagain=='N'){
            cout<<"********Thank You for shopping********"<<endl;
        }
        else {
            cout<<"you entered wrong option"<<endl;
            goto shopagain;
        }
    }
    else{
        cout<<"you have entered wrong option, please type s"<<endl;
        goto start;
    }

}
double onlineshopping(){
    char choice;
    char item;
    double totalamount=0;
    double quantity;
    starting:
    cout<<"************welcome to online shopping************"<<endl<<endl;
    cout<<"------------please follow the instructiins------------"<<endl;
    cout<<"(1) please enter m to order mobile phones"<<endl;
    cout<<"(2) please enter l to order laptop"<<endl;
    cout<<"(3) please enter d to order desktop"<<endl;
    cout<<"(4) please enter s to order speaker"<<endl;
    cout<<"(5) please enter h to order Headphone"<<endl;
    cin>>choice;

//*******mobile*********//
    if (choice=='m' || choice=='M'){
            mobilelevel:
        cout<<"Mobile details"<<endl;
        cout<<"(1) Apple    => price : 350000"<<endl;
        cout<<"(2) Vivo     => price : 60000"<<endl;
        cout<<"(3) Oppo     => price : 90000"<<endl;
        cout<<"(4) Redmi    => price : 40000"<<endl;
        cout<<"(5) Realme   => price : 45000"<<endl;
        cout<<"(6) Samsung  => price : 150000"<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 350000*quantity;
        }
        else if(item=='2'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 60000*quantity;

        }
        else if(item=='3'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 90000*quantity;
        }
        else if(item=='4'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 40000*quantity;
        }
        else if(item=='5'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 45000*quantity;
        }
        else if (item=='6'){
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            totalamount=totalamount + 150000*quantity;
        }
        else {
            cout<<"you entered wrong option, please try again";
            goto mobilelevel;
        }
    }
    //*******laptop*********//
    else if (choice=='l' || choice=='L'){
            laptoplevel:
        cout<<"laptop details"<<endl;
        cout<<"(1) Apple    => price : 500000"<<endl;
        cout<<"(2) Hp       => price : 250000"<<endl;
        cout<<"(3) Dell     => price : 200000"<<endl;
        cout<<"(4) Asus     => price : 400000"<<endl;
        cout<<"(5) Lenovo   => price : 150000"<<endl;
        cout<<"(6) Acer     => price : 225000"<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 500000*quantity;
        }
        else if(item=='2'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 250000*quantity;

        }
        else if(item=='3'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 200000*quantity;
        }
        else if(item=='4'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 400000*quantity;
        }
        else if(item=='5'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 150000*quantity;
        }
        else if (item=='6'){
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            totalamount=totalamount + 225000*quantity;
        }
        else {
            cout<<"you entered wrong option, please try again";
            goto laptoplevel;
        }
    }

    //*******desktop*********//
    else if (choice=='d' || choice=='D'){
            desktoplevel:
        cout<<"Desktop details"<<endl;
        cout<<"(1) Apple    => price : 50000"<<endl;
        cout<<"(2) Samsung  => price : 20000"<<endl;
        cout<<"(3) Lg       => price : 12000"<<endl;
        cout<<"(4) Sony     => price : 22000"<<endl;
        cout<<"(5) Wipro    => price : 15000"<<endl;
        cout<<"(6) Ibm      => price : 22500"<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 50000*quantity;
        }
        else if(item=='2'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 20000*quantity;

        }
        else if(item=='3'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 12000*quantity;
        }
        else if(item=='4'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 22000*quantity;
        }
        else if(item=='5'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 15000*quantity;
        }
        else if (item=='6'){
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            totalamount=totalamount + 22500*quantity;
        }
        else {
            cout<<"you entered wrong option, please try again";
            goto desktoplevel;
        }
    }
    //*******speakers*********//
    else if (choice=='s' || choice=='S'){
            speakerlevel:
        cout<<"speaker details"<<endl;
        cout<<"(1) JBL      => price : 85000"<<endl;
        cout<<"(2) sony     => price : 10000"<<endl;
        cout<<"(3) KEF      => price : 7500"<<endl;
        cout<<"(4) Infinity => price : 9200"<<endl;
        cout<<"(5) Pioneer  => price : 6500"<<endl;
        cout<<"(6) Philips  => price : 12200"<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 85000*quantity;
        }
        else if(item=='2'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 10000*quantity;

        }
        else if(item=='3'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 7500*quantity;
        }
        else if(item=='4'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 9200*quantity;
        }
        else if(item=='5'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 6500*quantity;
        }
        else if (item=='6'){
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            totalamount=totalamount + 12500*quantity;
        }
        else {
            cout<<"you entered wrong option, please try again";
            goto speakerlevel;
        }
    }

    //*******Headphone*********//
    else if (choice=='h' || choice=='H'){
            headphoneslevel:
        cout<<"speaker details"<<endl;
        cout<<"(1) Grado    => price : 3200"<<endl;
        cout<<"(2) Koss     => price : 1000"<<endl;
        cout<<"(3) Apple    => price : 9800"<<endl;
        cout<<"(4) Shure    => price : 5200"<<endl;
        cout<<"(5) Audeze   => price : 1400"<<endl;
        cout<<"(6) Jabra    => price : 5100"<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 3200*quantity;
        }
        else if(item=='2'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 1000*quantity;

        }
        else if(item=='3'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 9800*quantity;
        }
        else if(item=='4'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 5200*quantity;
        }
        else if(item=='5'){
                cout<<"enter quantity"<<endl;
                cin>>quantity;
            totalamount= totalamount + 1400*quantity;
        }
        else if (item=='6'){
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            totalamount=totalamount + 5100*quantity;
        }
        else {
            cout<<"you entered wrong option, please try again";
            goto headphoneslevel;
        }
    }
    else {
        cout<<"you enterd a wrong option"<<endl;
        goto starting;
    }

    return totalamount;
}







