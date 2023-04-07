#include <iostream>
// nguon : GPT
using namespace std;
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
int main() {
  int kq,n;
  cout<<"Nhap vi tri n muon tim trong day fibonacci: ";
  cin>>n;
  kq = fib(n);
  cout<<"\nSo fibonacci ? vi tr� "<<n<<" l�: "<<kq;
}
