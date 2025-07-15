// 15July2025
#include <iostream>
#include <string>

inline void haikyatu(){
    std::cout<<"inline hu"<<std::endl;
}
inline std::string parity(int x){
    return(x%2==0)?"even":"odd";
}
inline int maxi(int x,int y){
    return(x>y)?x:y;
}
inline int mini(int x,int y){
    return(x<y)?x:y;
}

// inline for max and min also
int main(){
    haikyatu();
    std::cout<<parity(5)<<std::endl;
}