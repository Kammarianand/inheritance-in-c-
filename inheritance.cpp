#include<iostream>
using namespace std;
class base{
  public:
    int num;
void get_data(){
cout<<"Enter any number: "<<endl;
cin>>num;
}
};
class programm: public base{
  public:
  int i, sum = 1;
};
class factorial: public programm{
  public:
    void get_result(){
  for(i=1;i<=num;i++){
  sum = sum * i;
  }
cout<<"The factorial of number  "<<num<<"  is  "<<sum;
}
};
int main(){
  factorial obj;
  obj.get_data();
  obj.get_result();
  return 0;
}