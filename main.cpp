#include <iostream>
#include <sstream>
using namespace std;
int main() {
    //����չʾһ���Ƚ����õ�stringstream���÷�
    string a;
    a = "123 223 555";
    stringstream ss(a);
    int s1,s2,s3;
    ss>>s1>>s2>>s3;
    cout<<s1<<" "<<s2<<" "<<s3<<" "<<endl;
    stringstream sy("123.123654");
    double x;
    sy>>x;
    cout<<x<<endl;
    return 0;
}
