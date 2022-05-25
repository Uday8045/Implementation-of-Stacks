#include <iostream>
#include <vector>
using namespace std;


class CustomQueue
{
    
    protected:
    vector<int> data;
    
    private:
    int length= 10;
    
    public:
    
    int end = 0;
    
   CustomQueue ()
    {
         this->data= vector<int>(length);
        
    }
    CustomQueue (int size)
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
            cout<< "Queue is full now, can't insert elements anymore"<<endl;
            throw("Queue is full now, cant insert elements anymore");
            
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
            cout<<"Queue is Empty !! Elements cant be removed"<<endl;
            throw ("Queue is Empty !! Elements cant be removed");
        
        }
        
        
        int removed= data[0];
      
      for(int i=1; i<end; i++)
        data[i-1]= data[i];
      
      end--;
      return removed;
    }
    int front(){
        
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            throw ("Queue is Empty!!");
        
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
   CustomQueue q(10);
   q.insert(1);
   
          
            
   q.display();
   q.deleteelement();
   q.display();
   q.deleteelement();
   
  
    return 0;
}
