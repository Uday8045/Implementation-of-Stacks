#include <iostream>
#include <vector>
using namespace std;


class CustomStack
{
    
    protected:
    vector<int> data;
    
    private:
    int length= 10;
    
    public:
    
    int end = 0;
    
   CustomStack ()
    {
         this->data= vector<int>(length);
        
    }
    CustomStack (int size)
    {
        this->data= vector<int>(size);
        
    }
    

    bool isFull()
    {
        
        return end== data.size() ;
    }
    bool isEmpty()
    {
        
        return end == 0 ;
    }
    bool insert(int item)
    {
        if(isFull())
        {
           cout<< "Stack is full now, can't insert elements anymore"<<endl;
        throw("Stack is full now, cant insert elements anymore");
            
        return false;
        }
        
        else
        {
            data[end++]= item;
            return true;
        }
    }
    int deleteelement(){
        
        if(isEmpty())
        {
            cout<<"Stack is Empty !! Elements cant be removed"<<endl;
            throw ("Stack is Empty !! Elements cant be removed");
        
        }
        
        
        return data[end--];
    }
    int front(){
        
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            throw ("Stack is Empty!!");
        
        }
        
        return data[0];
    }
    
    void display()
    {
        for(int i=0; i<end; i++)
           cout<<data[i]<<" ";
           
           cout<<"END"<<endl;
        
    }
};


int main()
{
   CustomStack q(10);
   q.insert(1);
   
          
            
   q.display();
   q.deleteelement();
   q.display();
   q.deleteelement();
   
  
    return 0;
}
