#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

/*class Node
{
    private:
    int data;
    Node *next;
}*/
int i=0;
class mydata
{
    public:
    int data1;
    int data2;
    
};

mydata data_obj[100];

class binarytree:public mydata
{
  private:
  int level;
  //mydata data_obj[100];
  public:
  binarytree(int lev)
  {
      level = lev;
  }
  void parent(int num1,int num2);
  void left(int num1,int num2);
  void right(int num1,int num2);
  void display();
  
  
};
//mydata data_obj[2*3+1];
void binarytree::parent(int num1,int num2)
{
    data_obj[i].data1 = num1;
    data_obj[i].data2 = num2;
}
void binarytree::left(int num1,int num2)
{
    data_obj[2*i+1].data1 = num1;
    data_obj[2*i+1].data2 = num2;
}
void binarytree::right(int num1,int num2)
{
    data_obj[2*i+2].data1 = num1;
    data_obj[2*i+2].data2 = num2;
}
void binarytree::display()
{
    for(int j=0;j<2*level+1;j++)
    {   if(j==0)
        {
        cout<<"parent:";
        cout<<data_obj[j].data1<<" ";
        cout<<data_obj[j].data2<<"\n";   
        }
        else if(j%2!=0)
        {
        cout<<"left:";
        cout<<data_obj[j].data1<<" ";
        cout<<data_obj[j].data2<<"\n";
        }
        else
        {
        cout<<"right:";
        cout<<data_obj[j].data1<<" ";
        cout<<data_obj[j].data2<<"\n";
        }
    }
}
int main()
{
    int lev = 3;
    //mydata data_obj[2*lev+1];
    //data_obj[0].data1=1;
    //data_obj[0].data2=2;
    binarytree obj(lev);
    obj.parent(0,1);
    for(int n=0;n<2*lev+1;n++)
    {
        obj.left(n+2,n+3);
        obj.right(n+4,n+5);
        i++;
    }
    obj.display();
    
    
    return 0;
}

