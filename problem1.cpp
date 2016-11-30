#include <string>
#include <iostream>
int main(){std::string b;for(int i=2;i<2016;i++){bool a=true;for(int j=2;j<i;j++){if(i%j==0){a=false;}}b=std::to_string(i);for(int k=0;k<b.size();k++){if(b.at(k)!=b.at(b.size()-1-k)){a=false;}}if(a){std::cout<<i<<"\n";}}}