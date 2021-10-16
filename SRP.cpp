#include <bits/stdc++.h>
using namespace std;

class customer
{
	string name;
	string address;
	public:
	string getname()
	{
		return name;
	}
	void setname( string name)
	{
		this->name=name;
	}
	string getaddress()
	{
		return address;
	}
	void setaddress( string address)
	{
		this->address=address;
	}
};

class order{
	customer cust;
	string orderid,itemname;
	public:
	 customer getcustomer() 
	 { 
		 return cust; 
     }
     void setcustomer(customer cust)
    {
        this->cust = cust;
    }
     string getorderid() 
     { 
		 return orderid; 
	 }
     void setorderid(string orderid)
    {
  
        this->orderid = orderid + "-" + to_string(rand());
    }
     string getitemname() 
     { 
		 return itemname; 
	}
     void setitemname(string itemname)
    {
        this->itemname = itemname;
        setorderid(itemname);
    }
    void preparefood()
    {
		cout <<"Preparing food for"<<this->getcustomer().getname()<<"has ordered"<<this->getitemname();
	}
};

int main()
{
	customer obj;
	obj.setname("Ashish");
	cout <<obj.getname()<<"\n";
	obj.setaddress("Prayagraj");
	cout << obj.getaddress()<<"\n";
	order ord;
	ord.setcustomer(obj);
	ord.setitemname("Cheese");
	ord.preparefood();
}


	   

		

	
			
		
	
		
	
	
	
		
		
   
 
 
